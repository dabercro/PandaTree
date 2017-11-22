pipeline {
  agent any
  environment {
    SCRAM_ARCH = 'slc6_amd64_gcc530'
    DOSRC = 'source /cvmfs/cms.cern.ch/cmsset_default.sh'
    CMSSW_VERSION = 'CMSSW_8_0_29'
    PANDA_PROD_URL = 'https://github.com/PandaPhysics/PandaProd.git'
    PANDA_PROD_BRANCH = 'branch-80X'
  }
  stages {
    stage('Build') {
      steps {
        sh 'ls'
        sh 'if [ ! -d $CMSSW_VERSION ]; then $DOSRC; scramv1 project CMSSW $CMSSW_VERSION; fi'
        sh 'ls $CMSSW_VERSION/src'
        sh 'if [ ! -d $CMSSW_VERSION/src/PandaTree ]; then mkdir $CMSSW_VERSION/src/PandaTree; fi'
        sh 'for f in $(git ls-files); do if [ "$f" -nt "$CMSSW_VERSION/src/PandaTree/$f" ]; then cp --parents "$f" $CMSSW_VERSION/src/PandaTree; fi; done'
        sh 'cp --parents .git/HEAD  $CMSSW_VERSION/src/PandaTree'
        sh 'cp -r .git/refs  $CMSSW_VERSION/src/PandaTree/.git'
        dir ("${env.CMSSW_VERSION}/src") {
            sh 'if [ -d PandaProd ]; then cd PandaProd; git pull; cd ..; else git clone -b $PANDA_PROD_BRANCH $PANDA_PROD_URL; fi'
            sh 'if [ ! -d PhysicsTools ]; then $DOSRC; eval `scramv1 runtime -sh`; PandaProd/Producer/cfg/setuprel.sh; fi'
            sh '$DOSRC; eval `scramv1 runtime -sh`; scram b -j4'
        }
      }
    }
    stage('Test') {
      steps {
        dir ("${env.CMSSW_VERSION}/src") {
            sh '$DOSRC;  eval `scramv1 runtime -sh`; testpanda /home/dabercro/cms/cmssw/CMSSW_8_0_29/src/PandaProd/Producer/cfg/mc.root $(date +%y%m%d)_${BUILD_TAG}_mc'
            sh '$DOSRC;  eval `scramv1 runtime -sh`; testpanda /home/dabercro/cms/cmssw/CMSSW_8_0_29/src/PandaProd/Producer/cfg/data.root $(date +%y%m%d)_${BUILD_TAG}_data'
        }
      }
    }
  }
}

pipeline {
  agent any
  environment {
    SCRAM_ARCH = 'slc6_amd64_gcc530'
    VO_CMS_SW_DIR = '/cvmfs/cms.cern.ch'
  }
  stages {
    stage('Build') {
      steps {
        sh 'source $VO_CMS_SW_DIR/cmsset_default.sh'
        sh 'mkdir -p $HOME/cms/cmssw/jenkins'
        sh 'pwd'
        sh 'cd $HOME/cms/cmssw/jenkins'
        sh 'pwd'
      }
    }
    stage('Test') {
      steps {
        sh 'exit 0'
      }
    }
  }
}
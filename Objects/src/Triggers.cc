#include "../interface/Triggers.h"

/*static*/
panda::utils::BranchList
panda::Triggers::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"PFMET170_NotCleaned", "PFMET170_NoiseCleaned", "PFMET170_HBHECleaned", "PFMET170_JetIdCleaned", "PFMET170_BeamHaloCleaned", "PFMET170_HBHE_BeamHaloCleaned", "PFMETNoMu90_PFMHTNoMu90_IDTight", "PFMETNoMu100_PFMHTNoMu100_IDTight", "PFMETNoMu110_PFMHTNoMu110_IDTight", "PFMETNoMu120_PFMHTNoMu120_IDTight", "Mu17_Mu8", "Mu17_Mu8_DZ", "Mu17_Mu8_SameSign", "Mu17_Mu8_SameSign_DZ", "Mu20_Mu10", "Mu20_Mu10_DZ", "Mu20_Mu10_SameSign", "Mu20_Mu10_SameSign_DZ", "Mu17_TkMu8_DZ", "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL", "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ", "Mu25_TkMu0_dEta18_Onia", "Mu27_TkMu8", "Mu30_TkMu11"};
  return blist;
}

panda::Triggers::Triggers(char const* _name/* = ""*/) :
  Singlet(_name)
{
}

panda::Triggers::Triggers(Triggers const& _src) :
  Singlet(_src),
  PFMET170_NotCleaned(_src.PFMET170_NotCleaned),
  PFMET170_NoiseCleaned(_src.PFMET170_NoiseCleaned),
  PFMET170_HBHECleaned(_src.PFMET170_HBHECleaned),
  PFMET170_JetIdCleaned(_src.PFMET170_JetIdCleaned),
  PFMET170_BeamHaloCleaned(_src.PFMET170_BeamHaloCleaned),
  PFMET170_HBHE_BeamHaloCleaned(_src.PFMET170_HBHE_BeamHaloCleaned),
  PFMETNoMu90_PFMHTNoMu90_IDTight(_src.PFMETNoMu90_PFMHTNoMu90_IDTight),
  PFMETNoMu100_PFMHTNoMu100_IDTight(_src.PFMETNoMu100_PFMHTNoMu100_IDTight),
  PFMETNoMu110_PFMHTNoMu110_IDTight(_src.PFMETNoMu110_PFMHTNoMu110_IDTight),
  PFMETNoMu120_PFMHTNoMu120_IDTight(_src.PFMETNoMu120_PFMHTNoMu120_IDTight),
  Mu17_Mu8(_src.Mu17_Mu8),
  Mu17_Mu8_DZ(_src.Mu17_Mu8_DZ),
  Mu17_Mu8_SameSign(_src.Mu17_Mu8_SameSign),
  Mu17_Mu8_SameSign_DZ(_src.Mu17_Mu8_SameSign_DZ),
  Mu20_Mu10(_src.Mu20_Mu10),
  Mu20_Mu10_DZ(_src.Mu20_Mu10_DZ),
  Mu20_Mu10_SameSign(_src.Mu20_Mu10_SameSign),
  Mu20_Mu10_SameSign_DZ(_src.Mu20_Mu10_SameSign_DZ),
  Mu17_TkMu8_DZ(_src.Mu17_TkMu8_DZ),
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL(_src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL),
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ(_src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ),
  Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL(_src.Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL),
  Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ(_src.Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ),
  Mu25_TkMu0_dEta18_Onia(_src.Mu25_TkMu0_dEta18_Onia),
  Mu27_TkMu8(_src.Mu27_TkMu8),
  Mu30_TkMu11(_src.Mu30_TkMu11)
{
  PFMET170_NotCleaned = _src.PFMET170_NotCleaned;
  PFMET170_NoiseCleaned = _src.PFMET170_NoiseCleaned;
  PFMET170_HBHECleaned = _src.PFMET170_HBHECleaned;
  PFMET170_JetIdCleaned = _src.PFMET170_JetIdCleaned;
  PFMET170_BeamHaloCleaned = _src.PFMET170_BeamHaloCleaned;
  PFMET170_HBHE_BeamHaloCleaned = _src.PFMET170_HBHE_BeamHaloCleaned;
  PFMETNoMu90_PFMHTNoMu90_IDTight = _src.PFMETNoMu90_PFMHTNoMu90_IDTight;
  PFMETNoMu100_PFMHTNoMu100_IDTight = _src.PFMETNoMu100_PFMHTNoMu100_IDTight;
  PFMETNoMu110_PFMHTNoMu110_IDTight = _src.PFMETNoMu110_PFMHTNoMu110_IDTight;
  PFMETNoMu120_PFMHTNoMu120_IDTight = _src.PFMETNoMu120_PFMHTNoMu120_IDTight;
  Mu17_Mu8 = _src.Mu17_Mu8;
  Mu17_Mu8_DZ = _src.Mu17_Mu8_DZ;
  Mu17_Mu8_SameSign = _src.Mu17_Mu8_SameSign;
  Mu17_Mu8_SameSign_DZ = _src.Mu17_Mu8_SameSign_DZ;
  Mu20_Mu10 = _src.Mu20_Mu10;
  Mu20_Mu10_DZ = _src.Mu20_Mu10_DZ;
  Mu20_Mu10_SameSign = _src.Mu20_Mu10_SameSign;
  Mu20_Mu10_SameSign_DZ = _src.Mu20_Mu10_SameSign_DZ;
  Mu17_TkMu8_DZ = _src.Mu17_TkMu8_DZ;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
  Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL = _src.Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL;
  Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ = _src.Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ;
  Mu25_TkMu0_dEta18_Onia = _src.Mu25_TkMu0_dEta18_Onia;
  Mu27_TkMu8 = _src.Mu27_TkMu8;
  Mu30_TkMu11 = _src.Mu30_TkMu11;
}

panda::Triggers::~Triggers()
{
}

panda::Triggers&
panda::Triggers::operator=(Triggers const& _src)
{
  PFMET170_NotCleaned = _src.PFMET170_NotCleaned;
  PFMET170_NoiseCleaned = _src.PFMET170_NoiseCleaned;
  PFMET170_HBHECleaned = _src.PFMET170_HBHECleaned;
  PFMET170_JetIdCleaned = _src.PFMET170_JetIdCleaned;
  PFMET170_BeamHaloCleaned = _src.PFMET170_BeamHaloCleaned;
  PFMET170_HBHE_BeamHaloCleaned = _src.PFMET170_HBHE_BeamHaloCleaned;
  PFMETNoMu90_PFMHTNoMu90_IDTight = _src.PFMETNoMu90_PFMHTNoMu90_IDTight;
  PFMETNoMu100_PFMHTNoMu100_IDTight = _src.PFMETNoMu100_PFMHTNoMu100_IDTight;
  PFMETNoMu110_PFMHTNoMu110_IDTight = _src.PFMETNoMu110_PFMHTNoMu110_IDTight;
  PFMETNoMu120_PFMHTNoMu120_IDTight = _src.PFMETNoMu120_PFMHTNoMu120_IDTight;
  Mu17_Mu8 = _src.Mu17_Mu8;
  Mu17_Mu8_DZ = _src.Mu17_Mu8_DZ;
  Mu17_Mu8_SameSign = _src.Mu17_Mu8_SameSign;
  Mu17_Mu8_SameSign_DZ = _src.Mu17_Mu8_SameSign_DZ;
  Mu20_Mu10 = _src.Mu20_Mu10;
  Mu20_Mu10_DZ = _src.Mu20_Mu10_DZ;
  Mu20_Mu10_SameSign = _src.Mu20_Mu10_SameSign;
  Mu20_Mu10_SameSign_DZ = _src.Mu20_Mu10_SameSign_DZ;
  Mu17_TkMu8_DZ = _src.Mu17_TkMu8_DZ;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
  Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL = _src.Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL;
  Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ = _src.Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ;
  Mu25_TkMu0_dEta18_Onia = _src.Mu25_TkMu0_dEta18_Onia;
  Mu27_TkMu8 = _src.Mu27_TkMu8;
  Mu30_TkMu11 = _src.Mu30_TkMu11;

  /* BEGIN CUSTOM Triggers.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Triggers::doSetStatus_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::setStatus(_tree, name_, "PFMET170_NotCleaned", _branches);
  utils::setStatus(_tree, name_, "PFMET170_NoiseCleaned", _branches);
  utils::setStatus(_tree, name_, "PFMET170_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "PFMET170_JetIdCleaned", _branches);
  utils::setStatus(_tree, name_, "PFMET170_BeamHaloCleaned", _branches);
  utils::setStatus(_tree, name_, "PFMET170_HBHE_BeamHaloCleaned", _branches);
  utils::setStatus(_tree, name_, "PFMETNoMu90_PFMHTNoMu90_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMETNoMu100_PFMHTNoMu100_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMETNoMu110_PFMHTNoMu110_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight", _branches);
  utils::setStatus(_tree, name_, "Mu17_Mu8", _branches);
  utils::setStatus(_tree, name_, "Mu17_Mu8_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu17_Mu8_SameSign", _branches);
  utils::setStatus(_tree, name_, "Mu17_Mu8_SameSign_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu20_Mu10", _branches);
  utils::setStatus(_tree, name_, "Mu20_Mu10_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu20_Mu10_SameSign", _branches);
  utils::setStatus(_tree, name_, "Mu20_Mu10_SameSign_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu17_TkMu8_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", _branches);
  utils::setStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL", _branches);
  utils::setStatus(_tree, name_, "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu25_TkMu0_dEta18_Onia", _branches);
  utils::setStatus(_tree, name_, "Mu27_TkMu8", _branches);
  utils::setStatus(_tree, name_, "Mu30_TkMu11", _branches);
}

panda::utils::BranchList
panda::Triggers::doGetStatus_(TTree& _tree) const
{
  utils::BranchList blist;

  blist.push_back(utils::getStatus(_tree, name_, "PFMET170_NotCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET170_NoiseCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET170_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET170_JetIdCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET170_BeamHaloCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET170_HBHE_BeamHaloCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETNoMu90_PFMHTNoMu90_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETNoMu100_PFMHTNoMu100_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETNoMu110_PFMHTNoMu110_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_Mu8"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_Mu8_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_Mu8_SameSign"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_Mu8_SameSign_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu20_Mu10"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu20_Mu10_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu20_Mu10_SameSign"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu20_Mu10_SameSign_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_TkMu8_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu25_TkMu0_dEta18_Onia"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu27_TkMu8"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu30_TkMu11"));

  return blist;
}

void
panda::Triggers::doSetAddress_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  utils::setAddress(_tree, name_, "PFMET170_NotCleaned", &PFMET170_NotCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET170_NoiseCleaned", &PFMET170_NoiseCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET170_HBHECleaned", &PFMET170_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET170_JetIdCleaned", &PFMET170_JetIdCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET170_BeamHaloCleaned", &PFMET170_BeamHaloCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET170_HBHE_BeamHaloCleaned", &PFMET170_HBHE_BeamHaloCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETNoMu90_PFMHTNoMu90_IDTight", &PFMETNoMu90_PFMHTNoMu90_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETNoMu100_PFMHTNoMu100_IDTight", &PFMETNoMu100_PFMHTNoMu100_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETNoMu110_PFMHTNoMu110_IDTight", &PFMETNoMu110_PFMHTNoMu110_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight", &PFMETNoMu120_PFMHTNoMu120_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_Mu8", &Mu17_Mu8, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_Mu8_DZ", &Mu17_Mu8_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_Mu8_SameSign", &Mu17_Mu8_SameSign, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_Mu8_SameSign_DZ", &Mu17_Mu8_SameSign_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu20_Mu10", &Mu20_Mu10, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu20_Mu10_DZ", &Mu20_Mu10_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu20_Mu10_SameSign", &Mu20_Mu10_SameSign, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu20_Mu10_SameSign_DZ", &Mu20_Mu10_SameSign_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_TkMu8_DZ", &Mu17_TkMu8_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL", &Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ", &Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu25_TkMu0_dEta18_Onia", &Mu25_TkMu0_dEta18_Onia, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu27_TkMu8", &Mu27_TkMu8, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu30_TkMu11", &Mu30_TkMu11, _branches, _setStatus);
}

void
panda::Triggers::doBook_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, name_, "PFMET170_NotCleaned", "", 'O', &PFMET170_NotCleaned, _branches);
  utils::book(_tree, name_, "PFMET170_NoiseCleaned", "", 'O', &PFMET170_NoiseCleaned, _branches);
  utils::book(_tree, name_, "PFMET170_HBHECleaned", "", 'O', &PFMET170_HBHECleaned, _branches);
  utils::book(_tree, name_, "PFMET170_JetIdCleaned", "", 'O', &PFMET170_JetIdCleaned, _branches);
  utils::book(_tree, name_, "PFMET170_BeamHaloCleaned", "", 'O', &PFMET170_BeamHaloCleaned, _branches);
  utils::book(_tree, name_, "PFMET170_HBHE_BeamHaloCleaned", "", 'O', &PFMET170_HBHE_BeamHaloCleaned, _branches);
  utils::book(_tree, name_, "PFMETNoMu90_PFMHTNoMu90_IDTight", "", 'O', &PFMETNoMu90_PFMHTNoMu90_IDTight, _branches);
  utils::book(_tree, name_, "PFMETNoMu100_PFMHTNoMu100_IDTight", "", 'O', &PFMETNoMu100_PFMHTNoMu100_IDTight, _branches);
  utils::book(_tree, name_, "PFMETNoMu110_PFMHTNoMu110_IDTight", "", 'O', &PFMETNoMu110_PFMHTNoMu110_IDTight, _branches);
  utils::book(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight", "", 'O', &PFMETNoMu120_PFMHTNoMu120_IDTight, _branches);
  utils::book(_tree, name_, "Mu17_Mu8", "", 'O', &Mu17_Mu8, _branches);
  utils::book(_tree, name_, "Mu17_Mu8_DZ", "", 'O', &Mu17_Mu8_DZ, _branches);
  utils::book(_tree, name_, "Mu17_Mu8_SameSign", "", 'O', &Mu17_Mu8_SameSign, _branches);
  utils::book(_tree, name_, "Mu17_Mu8_SameSign_DZ", "", 'O', &Mu17_Mu8_SameSign_DZ, _branches);
  utils::book(_tree, name_, "Mu20_Mu10", "", 'O', &Mu20_Mu10, _branches);
  utils::book(_tree, name_, "Mu20_Mu10_DZ", "", 'O', &Mu20_Mu10_DZ, _branches);
  utils::book(_tree, name_, "Mu20_Mu10_SameSign", "", 'O', &Mu20_Mu10_SameSign, _branches);
  utils::book(_tree, name_, "Mu20_Mu10_SameSign_DZ", "", 'O', &Mu20_Mu10_SameSign_DZ, _branches);
  utils::book(_tree, name_, "Mu17_TkMu8_DZ", "", 'O', &Mu17_TkMu8_DZ, _branches);
  utils::book(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", "", 'O', &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL, _branches);
  utils::book(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", "", 'O', &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ, _branches);
  utils::book(_tree, name_, "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL", "", 'O', &Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL, _branches);
  utils::book(_tree, name_, "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ", "", 'O', &Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ, _branches);
  utils::book(_tree, name_, "Mu25_TkMu0_dEta18_Onia", "", 'O', &Mu25_TkMu0_dEta18_Onia, _branches);
  utils::book(_tree, name_, "Mu27_TkMu8", "", 'O', &Mu27_TkMu8, _branches);
  utils::book(_tree, name_, "Mu30_TkMu11", "", 'O', &Mu30_TkMu11, _branches);
}

void
panda::Triggers::doInit_()
{
  PFMET170_NotCleaned = false;
  PFMET170_NoiseCleaned = false;
  PFMET170_HBHECleaned = false;
  PFMET170_JetIdCleaned = false;
  PFMET170_BeamHaloCleaned = false;
  PFMET170_HBHE_BeamHaloCleaned = false;
  PFMETNoMu90_PFMHTNoMu90_IDTight = false;
  PFMETNoMu100_PFMHTNoMu100_IDTight = false;
  PFMETNoMu110_PFMHTNoMu110_IDTight = false;
  PFMETNoMu120_PFMHTNoMu120_IDTight = false;
  Mu17_Mu8 = false;
  Mu17_Mu8_DZ = false;
  Mu17_Mu8_SameSign = false;
  Mu17_Mu8_SameSign_DZ = false;
  Mu20_Mu10 = false;
  Mu20_Mu10_DZ = false;
  Mu20_Mu10_SameSign = false;
  Mu20_Mu10_SameSign_DZ = false;
  Mu17_TkMu8_DZ = false;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL = false;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ = false;
  Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL = false;
  Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ = false;
  Mu25_TkMu0_dEta18_Onia = false;
  Mu27_TkMu8 = false;
  Mu30_TkMu11 = false;

  /* BEGIN CUSTOM Triggers.cc.doInit_ */
  /* END CUSTOM */
}

panda::utils::BranchList
panda::Triggers::doGetBranchNames_(Bool_t _fullName) const
{
  if (_fullName)
    return getListOfBranches().fullNames(name_);
  else
    return getListOfBranches().fullNames();
}

void
panda::Triggers::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Triggers.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Triggers::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "PFMET170_NotCleaned = " << PFMET170_NotCleaned << std::endl;
  _out << "PFMET170_NoiseCleaned = " << PFMET170_NoiseCleaned << std::endl;
  _out << "PFMET170_HBHECleaned = " << PFMET170_HBHECleaned << std::endl;
  _out << "PFMET170_JetIdCleaned = " << PFMET170_JetIdCleaned << std::endl;
  _out << "PFMET170_BeamHaloCleaned = " << PFMET170_BeamHaloCleaned << std::endl;
  _out << "PFMET170_HBHE_BeamHaloCleaned = " << PFMET170_HBHE_BeamHaloCleaned << std::endl;
  _out << "PFMETNoMu90_PFMHTNoMu90_IDTight = " << PFMETNoMu90_PFMHTNoMu90_IDTight << std::endl;
  _out << "PFMETNoMu100_PFMHTNoMu100_IDTight = " << PFMETNoMu100_PFMHTNoMu100_IDTight << std::endl;
  _out << "PFMETNoMu110_PFMHTNoMu110_IDTight = " << PFMETNoMu110_PFMHTNoMu110_IDTight << std::endl;
  _out << "PFMETNoMu120_PFMHTNoMu120_IDTight = " << PFMETNoMu120_PFMHTNoMu120_IDTight << std::endl;
  _out << "Mu17_Mu8 = " << Mu17_Mu8 << std::endl;
  _out << "Mu17_Mu8_DZ = " << Mu17_Mu8_DZ << std::endl;
  _out << "Mu17_Mu8_SameSign = " << Mu17_Mu8_SameSign << std::endl;
  _out << "Mu17_Mu8_SameSign_DZ = " << Mu17_Mu8_SameSign_DZ << std::endl;
  _out << "Mu20_Mu10 = " << Mu20_Mu10 << std::endl;
  _out << "Mu20_Mu10_DZ = " << Mu20_Mu10_DZ << std::endl;
  _out << "Mu20_Mu10_SameSign = " << Mu20_Mu10_SameSign << std::endl;
  _out << "Mu20_Mu10_SameSign_DZ = " << Mu20_Mu10_SameSign_DZ << std::endl;
  _out << "Mu17_TkMu8_DZ = " << Mu17_TkMu8_DZ << std::endl;
  _out << "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL = " << Mu17_TrkIsoVVL_Mu8_TrkIsoVVL << std::endl;
  _out << "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ = " << Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ << std::endl;
  _out << "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL = " << Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL << std::endl;
  _out << "Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ = " << Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ << std::endl;
  _out << "Mu25_TkMu0_dEta18_Onia = " << Mu25_TkMu0_dEta18_Onia << std::endl;
  _out << "Mu27_TkMu8 = " << Mu27_TkMu8 << std::endl;
  _out << "Mu30_TkMu11 = " << Mu30_TkMu11 << std::endl;
}

/* BEGIN CUSTOM Triggers.cc.global */
/* END CUSTOM */

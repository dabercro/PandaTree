#include "../interface/EGamma.h"

/*static*/
panda::utils::BranchList
panda::EGamma::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"eCorr", "eInvMinusPInv", "energyErr", "hoe", "r9", "sieie", "cutBased", "vidNestedWPBitmap"};
  return blist;
}

panda::EGamma::EGamma(datastore& _data, UInt_t _idx) :
  eCorr(_data.eCorr[_idx]),
  eInvMinusPInv(_data.eInvMinusPInv[_idx]),
  energyErr(_data.energyErr[_idx]),
  hoe(_data.hoe[_idx]),
  r9(_data.r9[_idx]),
  sieie(_data.sieie[_idx]),
  cutBased(_data.cutBased[_idx]),
  vidNestedWPBitmap(_data.vidNestedWPBitmap[_idx])
{
}

/* BEGIN CUSTOM EGamma.cc.global */
/* END CUSTOM */

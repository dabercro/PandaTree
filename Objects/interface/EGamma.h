#ifndef PandaTree_Objects_EGamma_h
#define PandaTree_Objects_EGamma_h
#include "../../Framework/interface/Element.h"

namespace panda {

  class EGamma {
  public:
    struct datastore {
      Float_t* eCorr{0};
      Float_t* eInvMinusPInv{0};
      Float_t* energyErr{0};
      Float_t* hoe{0};
      Float_t* r9{0};
      Float_t* sieie{0};
      Int_t* cutBased{0};
      Int_t* vidNestedWPBitmap{0};
    };

    EGamma(datastore&, UInt_t idx);

    Float_t& eCorr;
    Float_t& eInvMinusPInv;
    Float_t& energyErr;
    Float_t& hoe;
    Float_t& r9;
    Float_t& sieie;
    Int_t& cutBased;
    Int_t& vidNestedWPBitmap;

    /* BEGIN CUSTOM EGamma.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();
  };
  /* BEGIN CUSTOM EGamma.h.global */
  /* END CUSTOM */

}

#endif

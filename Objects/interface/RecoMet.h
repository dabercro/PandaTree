#ifndef PandaTree_Objects_RecoMet_h
#define PandaTree_Objects_RecoMet_h
#include "Constants.h"
#include "Met.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class RecoMet : public Met {
  public:
    typedef Met base_type;

    RecoMet(char const* name = "");
    RecoMet(RecoMet const&);
    ~RecoMet();
    RecoMet& operator=(RecoMet const&);

    static char const* typeName() { return "RecoMet"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    /* Met
    Float_t pt{};
    Float_t phi{};
    */
    Float_t sumEt{};

    /* BEGIN CUSTOM RecoMet.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

  protected:
    void doSetStatus_(TTree&, utils::BranchList const&) override;
    utils::BranchList doGetStatus_(TTree&) const override;
    utils::BranchList doGetBranchNames_(Bool_t) const override;
    void doSetAddress_(TTree&, utils::BranchList const& = {"*"}, Bool_t setStatus = kTRUE) override;
    void doBook_(TTree&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  /* BEGIN CUSTOM RecoMet.h.global */
  /* END CUSTOM */

}

#endif

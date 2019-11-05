#ifndef PandaTree_Objects_BReweight_h
#define PandaTree_Objects_BReweight_h
#include "Constants.h"
#include "../../Framework/interface/Singlet.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class BReweight : public Singlet {
  public:
    typedef Singlet base_type;

    BReweight(char const* name = "");
    BReweight(BReweight const&);
    ~BReweight();
    BReweight& operator=(BReweight const&);

    static char const* typeName() { return "BReweight"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Float_t CSVV2{};
    Float_t CMVA{};

    /* BEGIN CUSTOM BReweight.h.classdef */
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

  /* BEGIN CUSTOM BReweight.h.global */
  /* END CUSTOM */

}

#endif

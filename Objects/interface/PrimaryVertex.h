#ifndef PandaTree_Objects_PrimaryVertex_h
#define PandaTree_Objects_PrimaryVertex_h
#include "Constants.h"
#include "../../Framework/interface/Singlet.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class PrimaryVertex : public Singlet {
  public:
    typedef Singlet base_type;

    PrimaryVertex(char const* name = "");
    PrimaryVertex(PrimaryVertex const&);
    ~PrimaryVertex();
    PrimaryVertex& operator=(PrimaryVertex const&);

    static char const* typeName() { return "PrimaryVertex"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Float_t ndof{};
    Float_t x{};
    Float_t y{};
    Float_t z{};
    Float_t chi2{};
    Float_t score{};
    Int_t npvs{};
    Int_t npvsGood{};

    /* BEGIN CUSTOM PrimaryVertex.h.classdef */
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

  /* BEGIN CUSTOM PrimaryVertex.h.global */
  /* END CUSTOM */

}

#endif

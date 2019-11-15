#ifndef PandaTree_Objects_Weight_h
#define PandaTree_Objects_Weight_h
#include "Constants.h"
#include "../../Framework/interface/Element.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Weight : public Element {
  public:
    struct datastore : public Element::datastore {
      datastore() : Element::datastore() {}
      ~datastore() { deallocate(); }

      Float_t* VAL{0};

      void allocate(UInt_t n) override;
      void deallocate() override;
      void setStatus(TTree&, TString const&, utils::BranchList const&) override;
      utils::BranchList getStatus(TTree&, TString const&) const override;
      utils::BranchList getBranchNames(TString const& = "") const override;
      void setAddress(TTree&, TString const&, utils::BranchList const& = {"*"}, Bool_t setStatus = kTRUE) override;
      void book(TTree&, TString const&, utils::BranchList const& = {"*"}, Bool_t dynamic = kTRUE) override;
      void releaseTree(TTree&, TString const&) override;
      void resizeVectors_(UInt_t) override;
    };

    typedef Array<Weight> array_type;
    typedef Collection<Weight> collection_type;

    typedef Element base_type;

    Weight(char const* name = "");
    Weight(Weight const&);
    Weight(datastore&, UInt_t idx);
    ~Weight();
    Weight& operator=(Weight const&);

    static char const* typeName() { return "Weight"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Float_t& VAL;

    /* BEGIN CUSTOM Weight.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    Weight(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<Weight> WeightArray;
  typedef Collection<Weight> WeightCollection;
  typedef Ref<Weight> WeightRef;
  typedef RefVector<Weight> WeightRefVector;

  /* BEGIN CUSTOM Weight.h.global */
  /* END CUSTOM */

}

#endif

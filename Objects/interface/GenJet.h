#ifndef PandaTree_Objects_GenJet_h
#define PandaTree_Objects_GenJet_h
#include "Constants.h"
#include "Particle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class GenJet : public Particle {
  public:
    struct datastore : public Particle::datastore {
      datastore() : Particle::datastore() {}
      ~datastore() { deallocate(); }

      /* Particle
      Float_t* pt{0};
      Float_t* eta{0};
      Float_t* phi{0};
      Float_t* mass{0};
      */
      Int_t* partonFlavour{0};
      UChar_t* hadronFlavour{0};

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

    typedef Array<GenJet> array_type;
    typedef Collection<GenJet> collection_type;

    typedef Particle base_type;

    GenJet(char const* name = "");
    GenJet(GenJet const&);
    GenJet(datastore&, UInt_t idx);
    ~GenJet();
    GenJet& operator=(GenJet const&);

    static char const* typeName() { return "GenJet"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    /* Particle
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    Float_t& mass;
    */
    Int_t& partonFlavour;
    UChar_t& hadronFlavour;

    /* BEGIN CUSTOM GenJet.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    GenJet(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<GenJet> GenJetArray;
  typedef Collection<GenJet> GenJetCollection;
  typedef Ref<GenJet> GenJetRef;
  typedef RefVector<GenJet> GenJetRefVector;

  /* BEGIN CUSTOM GenJet.h.global */
  /* END CUSTOM */

}

#endif

#ifndef PandaTree_Objects_SubJet_h
#define PandaTree_Objects_SubJet_h
#include "Constants.h"
#include "Particle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class SubJet : public Particle {
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
      Float_t* btagCMVA{0};
      Float_t* btagCSVV2{0};
      Float_t* btagDeepB{0};
      Float_t* n2b1{0};
      Float_t* n3b1{0};
      Float_t* rawFactor{0};
      Float_t* tau1{0};
      Float_t* tau2{0};
      Float_t* tau3{0};
      Float_t* tau4{0};

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

    typedef Array<SubJet> array_type;
    typedef Collection<SubJet> collection_type;

    typedef Particle base_type;

    SubJet(char const* name = "");
    SubJet(SubJet const&);
    SubJet(datastore&, UInt_t idx);
    ~SubJet();
    SubJet& operator=(SubJet const&);

    static char const* typeName() { return "SubJet"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    /* Particle
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    Float_t& mass;
    */
    Float_t& btagCMVA;
    Float_t& btagCSVV2;
    Float_t& btagDeepB;
    Float_t& n2b1;
    Float_t& n3b1;
    Float_t& rawFactor;
    Float_t& tau1;
    Float_t& tau2;
    Float_t& tau3;
    Float_t& tau4;

    /* BEGIN CUSTOM SubJet.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    SubJet(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<SubJet> SubJetArray;
  typedef Collection<SubJet> SubJetCollection;
  typedef Ref<SubJet> SubJetRef;
  typedef RefVector<SubJet> SubJetRefVector;

  /* BEGIN CUSTOM SubJet.h.global */
  /* END CUSTOM */

}

#endif

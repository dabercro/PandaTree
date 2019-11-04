#ifndef PandaTree_Objects_PFParticle_h
#define PandaTree_Objects_PFParticle_h
#include "Constants.h"
#include "RecoParticle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class PFParticle : public RecoParticle {
  public:
    struct datastore : public RecoParticle::datastore {
      datastore() : RecoParticle::datastore() {}
      ~datastore() { deallocate(); }

      /* Particle
      Float_t* pt{0};
      Float_t* eta{0};
      Float_t* phi{0};
      Float_t* mass{0};
      */
      /* RecoParticle
      UChar_t* cleanmask{0};
      */
      Int_t* charge{0};
      Int_t* pdgId{0};

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

    typedef Array<PFParticle> array_type;
    typedef Collection<PFParticle> collection_type;

    typedef RecoParticle base_type;

    PFParticle(char const* name = "");
    PFParticle(PFParticle const&);
    PFParticle(datastore&, UInt_t idx);
    ~PFParticle();
    PFParticle& operator=(PFParticle const&);

    static char const* typeName() { return "PFParticle"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    /* Particle
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    Float_t& mass;
    */
    /* RecoParticle
    UChar_t& cleanmask;
    */
    Int_t& charge;
    Int_t& pdgId;

    /* BEGIN CUSTOM PFParticle.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    PFParticle(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<PFParticle> PFParticleArray;
  typedef Collection<PFParticle> PFParticleCollection;
  typedef Ref<PFParticle> PFParticleRef;
  typedef RefVector<PFParticle> PFParticleRefVector;

  /* BEGIN CUSTOM PFParticle.h.global */
  /* END CUSTOM */

}

#endif

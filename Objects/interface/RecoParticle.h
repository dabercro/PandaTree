#ifndef PandaTree_Objects_RecoParticle_h
#define PandaTree_Objects_RecoParticle_h
#include "Constants.h"
#include "Particle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class RecoParticle : public Particle {
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
      UChar_t* cleanmask{0};

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

    typedef Array<RecoParticle> array_type;
    typedef Collection<RecoParticle> collection_type;

    typedef Particle base_type;

    RecoParticle(char const* name = "");
    RecoParticle(RecoParticle const&);
    RecoParticle(datastore&, UInt_t idx);
    ~RecoParticle();
    RecoParticle& operator=(RecoParticle const&);

    static char const* typeName() { return "RecoParticle"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    /* Particle
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    Float_t& mass;
    */
    UChar_t& cleanmask;

    /* BEGIN CUSTOM RecoParticle.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    RecoParticle(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<RecoParticle> RecoParticleArray;
  typedef Collection<RecoParticle> RecoParticleCollection;
  typedef Ref<RecoParticle> RecoParticleRef;
  typedef RefVector<RecoParticle> RecoParticleRefVector;

  /* BEGIN CUSTOM RecoParticle.h.global */
  /* END CUSTOM */

}

#endif

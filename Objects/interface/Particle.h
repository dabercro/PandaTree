#ifndef PandaTree_Objects_Particle_h
#define PandaTree_Objects_Particle_h
#include "Constants.h"
#include "../../Framework/interface/Element.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Particle : public Element {
  public:
    struct datastore : public Element::datastore {
      datastore() : Element::datastore() {}
      ~datastore() { deallocate(); }

      Float_t* pt{0};
      Float_t* eta{0};
      Float_t* phi{0};
      Float_t* mass{0};

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

    typedef Array<Particle> array_type;
    typedef Collection<Particle> collection_type;

    typedef Element base_type;

    Particle(char const* name = "");
    Particle(Particle const&);
    Particle(datastore&, UInt_t idx);
    ~Particle();
    Particle& operator=(Particle const&);

    static char const* typeName() { return "Particle"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    Float_t& mass;

    /* BEGIN CUSTOM Particle.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    Particle(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<Particle> ParticleArray;
  typedef Collection<Particle> ParticleCollection;
  typedef Ref<Particle> ParticleRef;
  typedef RefVector<Particle> ParticleRefVector;

  /* BEGIN CUSTOM Particle.h.global */
  /* END CUSTOM */

}

#endif

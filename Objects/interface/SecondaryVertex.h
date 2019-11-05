#ifndef PandaTree_Objects_SecondaryVertex_h
#define PandaTree_Objects_SecondaryVertex_h
#include "Constants.h"
#include "Particle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class SecondaryVertex : public Particle {
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
      Float_t* dlen{0};
      Float_t* dlenSig{0};
      Float_t* pAngle{0};
      Float_t* chi2{0};
      Float_t* ndof{0};
      Float_t* x{0};
      Float_t* y{0};
      Float_t* z{0};

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

    typedef Array<SecondaryVertex> array_type;
    typedef Collection<SecondaryVertex> collection_type;

    typedef Particle base_type;

    SecondaryVertex(char const* name = "");
    SecondaryVertex(SecondaryVertex const&);
    SecondaryVertex(datastore&, UInt_t idx);
    ~SecondaryVertex();
    SecondaryVertex& operator=(SecondaryVertex const&);

    static char const* typeName() { return "SecondaryVertex"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    /* Particle
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    Float_t& mass;
    */
    Float_t& dlen;
    Float_t& dlenSig;
    Float_t& pAngle;
    Float_t& chi2;
    Float_t& ndof;
    Float_t& x;
    Float_t& y;
    Float_t& z;

    /* BEGIN CUSTOM SecondaryVertex.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    SecondaryVertex(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<SecondaryVertex> SecondaryVertexArray;
  typedef Collection<SecondaryVertex> SecondaryVertexCollection;
  typedef Ref<SecondaryVertex> SecondaryVertexRef;
  typedef RefVector<SecondaryVertex> SecondaryVertexRefVector;

  /* BEGIN CUSTOM SecondaryVertex.h.global */
  /* END CUSTOM */

}

#endif

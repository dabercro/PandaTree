#ifndef PandaTree_Objects_Lepton_h
#define PandaTree_Objects_Lepton_h
#include "Constants.h"
#include "PFParticle.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Lepton : public PFParticle {
  public:
    struct datastore : public PFParticle::datastore {
      datastore() : PFParticle::datastore() {}
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
      /* PFParticle
      Int_t* charge{0};
      Int_t* pdgId{0};
      */
      Float_t* ip3d{0};
      Float_t* sip3d{0};
      Float_t* dxy{0};
      Float_t* dxyErr{0};
      Float_t* dz{0};
      Float_t* dzErr{0};
      Float_t* jetRelIso{0};
      Float_t* miniPFRelIso_all{0};
      Float_t* miniPFRelIso_chg{0};
      Float_t* pfRelIso03_all{0};
      Float_t* pfRelIso03_chg{0};
      Float_t* mvaTTH{0};
      Int_t* tightCharge{0};
      Bool_t* isPFcand{0};

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

    typedef Array<Lepton> array_type;
    typedef Collection<Lepton> collection_type;

    typedef PFParticle base_type;

    Lepton(char const* name = "");
    Lepton(Lepton const&);
    Lepton(datastore&, UInt_t idx);
    ~Lepton();
    Lepton& operator=(Lepton const&);

    static char const* typeName() { return "Lepton"; }

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
    /* PFParticle
    Int_t& charge;
    Int_t& pdgId;
    */
    Float_t& ip3d;
    Float_t& sip3d;
    Float_t& dxy;
    Float_t& dxyErr;
    Float_t& dz;
    Float_t& dzErr;
    Float_t& jetRelIso;
    Float_t& miniPFRelIso_all;
    Float_t& miniPFRelIso_chg;
    Float_t& pfRelIso03_all;
    Float_t& pfRelIso03_chg;
    Float_t& mvaTTH;
    Int_t& tightCharge;
    Bool_t& isPFcand;

    /* BEGIN CUSTOM Lepton.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    Lepton(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<Lepton> LeptonArray;
  typedef Collection<Lepton> LeptonCollection;
  typedef Ref<Lepton> LeptonRef;
  typedef RefVector<Lepton> LeptonRefVector;

  /* BEGIN CUSTOM Lepton.h.global */
  /* END CUSTOM */

}

#endif

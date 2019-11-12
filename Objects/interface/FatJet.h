#ifndef PandaTree_Objects_FatJet_h
#define PandaTree_Objects_FatJet_h
#include "Constants.h"
#include "SubJet.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class FatJet : public SubJet {
  public:
    struct datastore : public SubJet::datastore {
      datastore() : SubJet::datastore() {}
      ~datastore() { deallocate(); }

      /* Particle
      Float_t* pt{0};
      Float_t* eta{0};
      Float_t* phi{0};
      Float_t* mass{0};
      */
      /* SubJet
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
      */
      Float_t* area{0};
      Float_t* btagDDBvL{0};
      Float_t* btagDDCvB{0};
      Float_t* btagDDCvL{0};
      Float_t* btagHbb{0};
      Float_t* deepTagMD_H4qvsQCD{0};
      Float_t* deepTagMD_HbbvsQCD{0};
      Float_t* deepTagMD_TvsQCD{0};
      Float_t* deepTagMD_WvsQCD{0};
      Float_t* deepTagMD_ZHbbvsQCD{0};
      Float_t* deepTagMD_ZHccvsQCD{0};
      Float_t* deepTagMD_ZbbvsQCD{0};
      Float_t* deepTagMD_ZvsQCD{0};
      Float_t* deepTagMD_bbvsLight{0};
      Float_t* deepTagMD_ccvsLight{0};
      Float_t* deepTag_H{0};
      Float_t* deepTag_QCD{0};
      Float_t* deepTag_QCDothers{0};
      Float_t* deepTag_TvsQCD{0};
      Float_t* deepTag_WvsQCD{0};
      Float_t* deepTag_ZvsQCD{0};
      Float_t* msoftdrop{0};
      Int_t* jetId{0};
      Int_t* subJetIdx1{0};
      Int_t* subJetIdx2{0};

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

    typedef Array<FatJet> array_type;
    typedef Collection<FatJet> collection_type;

    typedef SubJet base_type;

    FatJet(char const* name = "");
    FatJet(FatJet const&);
    FatJet(datastore&, UInt_t idx);
    ~FatJet();
    FatJet& operator=(FatJet const&);

    static char const* typeName() { return "FatJet"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    /* Particle
    Float_t& pt;
    Float_t& eta;
    Float_t& phi;
    Float_t& mass;
    */
    /* SubJet
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
    */
    Float_t& area;
    Float_t& btagDDBvL;
    Float_t& btagDDCvB;
    Float_t& btagDDCvL;
    Float_t& btagHbb;
    Float_t& deepTagMD_H4qvsQCD;
    Float_t& deepTagMD_HbbvsQCD;
    Float_t& deepTagMD_TvsQCD;
    Float_t& deepTagMD_WvsQCD;
    Float_t& deepTagMD_ZHbbvsQCD;
    Float_t& deepTagMD_ZHccvsQCD;
    Float_t& deepTagMD_ZbbvsQCD;
    Float_t& deepTagMD_ZvsQCD;
    Float_t& deepTagMD_bbvsLight;
    Float_t& deepTagMD_ccvsLight;
    Float_t& deepTag_H;
    Float_t& deepTag_QCD;
    Float_t& deepTag_QCDothers;
    Float_t& deepTag_TvsQCD;
    Float_t& deepTag_WvsQCD;
    Float_t& deepTag_ZvsQCD;
    Float_t& msoftdrop;
    Int_t& jetId;
    Int_t& subJetIdx1;
    Int_t& subJetIdx2;

    /* BEGIN CUSTOM FatJet.h.classdef */
    /* END CUSTOM */

    static utils::BranchList getListOfBranches();

    void destructor(Bool_t recursive = kFALSE);

  protected:
    FatJet(ArrayBase*);

    void doBook_(TTree&, TString const&, utils::BranchList const& = {"*"}) override;
    void doInit_() override;
  };

  typedef Array<FatJet> FatJetArray;
  typedef Collection<FatJet> FatJetCollection;
  typedef Ref<FatJet> FatJetRef;
  typedef RefVector<FatJet> FatJetRefVector;

  /* BEGIN CUSTOM FatJet.h.global */
  /* END CUSTOM */

}

#endif

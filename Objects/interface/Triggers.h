#ifndef PandaTree_Objects_Triggers_h
#define PandaTree_Objects_Triggers_h
#include "Constants.h"
#include "../../Framework/interface/Singlet.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Triggers : public Singlet {
  public:
    typedef Singlet base_type;

    Triggers(char const* name = "");
    Triggers(Triggers const&);
    ~Triggers();
    Triggers& operator=(Triggers const&);

    static char const* typeName() { return "Triggers"; }

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    Bool_t PFMET170_NotCleaned{};
    Bool_t PFMET170_NoiseCleaned{};
    Bool_t PFMET170_HBHECleaned{};
    Bool_t PFMET170_JetIdCleaned{};
    Bool_t PFMET170_BeamHaloCleaned{};
    Bool_t PFMET170_HBHE_BeamHaloCleaned{};
    Bool_t PFMETNoMu90_PFMHTNoMu90_IDTight{};
    Bool_t PFMETNoMu100_PFMHTNoMu100_IDTight{};
    Bool_t PFMETNoMu110_PFMHTNoMu110_IDTight{};
    Bool_t PFMETNoMu120_PFMHTNoMu120_IDTight{};
    Bool_t Mu17_Mu8{};
    Bool_t Mu17_Mu8_DZ{};
    Bool_t Mu17_Mu8_SameSign{};
    Bool_t Mu17_Mu8_SameSign_DZ{};
    Bool_t Mu20_Mu10{};
    Bool_t Mu20_Mu10_DZ{};
    Bool_t Mu20_Mu10_SameSign{};
    Bool_t Mu20_Mu10_SameSign_DZ{};
    Bool_t Mu17_TkMu8_DZ{};
    Bool_t Mu17_TrkIsoVVL_Mu8_TrkIsoVVL{};
    Bool_t Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ{};
    Bool_t Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL{};
    Bool_t Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ{};
    Bool_t Mu25_TkMu0_dEta18_Onia{};
    Bool_t Mu27_TkMu8{};
    Bool_t Mu30_TkMu11{};

    /* BEGIN CUSTOM Triggers.h.classdef */
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

  /* BEGIN CUSTOM Triggers.h.global */
  /* END CUSTOM */

}

#endif

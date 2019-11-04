#ifndef PandaTree_Objects_Event_h
#define PandaTree_Objects_Event_h
#include "../../Framework/interface/TreeEntry.h"
#include "Constants.h"
#include "GenPart.h"
#include "Electron.h"
#include "Muon.h"
#include "Jet.h"
#include "Photon.h"

namespace panda {

  class Event : public TreeEntry {
  public:
    Event();
    Event(Event const&);
    ~Event();
    Event& operator=(Event const&);

    void print(std::ostream& = std::cout, UInt_t level = 1) const override;
    void dump(std::ostream& = std::cout) const override;

    GenPartCollection GenPart = GenPartCollection("GenPart", 256);
    ElectronCollection Electron = ElectronCollection("Electron", 16);
    MuonCollection Muon = MuonCollection("Muon", 16);
    JetCollection Jet = JetCollection("Jet", 32);
    PhotonCollection Photon = PhotonCollection("Photon", 16);

    UInt_t run{};
    UInt_t luminosityBlock{};
    ULong64_t event{};

    static utils::BranchList getListOfBranches(Bool_t direct = kFALSE);

  protected:
    void doSetStatus_(TTree&, utils::BranchList const&) override;
    utils::BranchList doGetStatus_(TTree&) const override;
    utils::BranchList doGetBranchNames_() const override;
    void doSetAddress_(TTree&, utils::BranchList const&, Bool_t setStatus) override;
    void doBook_(TTree&, utils::BranchList const&) override;
    void doGetEntry_(TTree&) override;
    void doInit_() override;
    void doUnlink_(TTree&) override;

  public:
    /* BEGIN CUSTOM Event.h.classdef */
    /* END CUSTOM */
  };

  /* BEGIN CUSTOM Event.h.global */
  /* END CUSTOM */

}

#endif

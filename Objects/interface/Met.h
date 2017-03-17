#ifndef PandaTree_Objects_Met_h
#define PandaTree_Objects_Met_h
#include "Constants.h"
#include "../../Framework/interface/Singlet.h"
#include "../../Framework/interface/Array.h"
#include "../../Framework/interface/Collection.h"
#include "../../Framework/interface/Ref.h"
#include "../../Framework/interface/RefVector.h"

namespace panda {

  class Met : public Singlet {
  public:
    typedef Singlet base_type;

    Met(char const* name = "");
    Met(Met const&);
    ~Met();
    Met& operator=(Met const&);
    void print(std::ostream& = std::cout) const override;

    virtual TVector2 v() const { TVector2 vec; vec.SetMagPhi(pt, phi); return vec; }
    void setXY(double x, double y) { pt = std::sqrt(x * x + y * y); phi = std::atan2(y, x); }
    TLorentzVector p4() const { TLorentzVector vec; vec.SetPtEtaPhiM(pt, 0.0, phi, 0.0); return vec; }

    Float_t pt{};
    Float_t phi{};

    /* BEGIN CUSTOM Met.h.classdef */
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

  /* BEGIN CUSTOM Met.h.global */
  /* END CUSTOM */

}

#endif

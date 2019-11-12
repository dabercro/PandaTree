#ifndef IWILLSEEYOULATER
#define IWILLSEEYOULATER 1

#include <vector>
#include <functional>
#include <algorithm>
#include <cassert>
#include "PandaTree/Objects/interface/Event.h"

namespace testpanda {

  template <int P>
  struct plotter {
    constexpr static const char* name = nullptr;
  };

  template <>
  struct plotter <0> {
    constexpr static const char* name = "common/run";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.run)};
      return output;
    }
  };

  template <>
  struct plotter <1> {
    constexpr static const char* name = "common/fixedGridRhoFastjetCentralCalo";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.fixedGridRhoFastjetCentralCalo)};
      return output;
    }
  };

  template <>
  struct plotter <2> {
    constexpr static const char* name = "common/fixedGridRhoFastjetAll";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.fixedGridRhoFastjetAll)};
      return output;
    }
  };

  template <>
  struct plotter <3> {
    constexpr static const char* name = "common/fixedGridRhoFastjetCentralNeutral";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.fixedGridRhoFastjetCentralNeutral)};
      return output;
    }
  };

  template <>
  struct plotter <4> {
    constexpr static const char* name = "common/luminosityBlock";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.luminosityBlock)};
      return output;
    }
  };

  template <>
  struct plotter <5> {
    constexpr static const char* name = "common/event";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.event)};
      return output;
    }
  };

  template <>
  struct plotter <6> {
    constexpr static const char* name = "common/genWeight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.genWeight)};
      return output;
    }
  };

  template <>
  struct plotter <7> {
    constexpr static const char* name = "Flag/EcalDeadCellBoundaryEnergyFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.EcalDeadCellBoundaryEnergyFilter)};
      return output;
    }
  };

  template <>
  struct plotter <8> {
    constexpr static const char* name = "Flag/EcalDeadCellTriggerPrimitiveFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.EcalDeadCellTriggerPrimitiveFilter)};
      return output;
    }
  };

  template <>
  struct plotter <9> {
    constexpr static const char* name = "Flag/trkPOG_manystripclus53X";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.trkPOG_manystripclus53X)};
      return output;
    }
  };

  template <>
  struct plotter <10> {
    constexpr static const char* name = "Flag/chargedHadronTrackResolutionFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.chargedHadronTrackResolutionFilter)};
      return output;
    }
  };

  template <>
  struct plotter <11> {
    constexpr static const char* name = "Flag/trkPOG_logErrorTooManyClusters";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.trkPOG_logErrorTooManyClusters)};
      return output;
    }
  };

  template <>
  struct plotter <12> {
    constexpr static const char* name = "Flag/trkPOGFilters";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.trkPOGFilters)};
      return output;
    }
  };

  template <>
  struct plotter <13> {
    constexpr static const char* name = "Flag/HBHENoiseFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.HBHENoiseFilter)};
      return output;
    }
  };

  template <>
  struct plotter <14> {
    constexpr static const char* name = "Flag/CSCTightHaloTrkMuUnvetoFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.CSCTightHaloTrkMuUnvetoFilter)};
      return output;
    }
  };

  template <>
  struct plotter <15> {
    constexpr static const char* name = "Flag/METFilters";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.METFilters)};
      return output;
    }
  };

  template <>
  struct plotter <16> {
    constexpr static const char* name = "Flag/ecalBadCalibFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.ecalBadCalibFilter)};
      return output;
    }
  };

  template <>
  struct plotter <17> {
    constexpr static const char* name = "Flag/BadPFMuonFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.BadPFMuonFilter)};
      return output;
    }
  };

  template <>
  struct plotter <18> {
    constexpr static const char* name = "Flag/HBHENoiseIsoFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.HBHENoiseIsoFilter)};
      return output;
    }
  };

  template <>
  struct plotter <19> {
    constexpr static const char* name = "Flag/globalSuperTightHalo2016Filter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.globalSuperTightHalo2016Filter)};
      return output;
    }
  };

  template <>
  struct plotter <20> {
    constexpr static const char* name = "Flag/BadPFMuonSummer16Filter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.BadPFMuonSummer16Filter)};
      return output;
    }
  };

  template <>
  struct plotter <21> {
    constexpr static const char* name = "Flag/ecalLaserCorrFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.ecalLaserCorrFilter)};
      return output;
    }
  };

  template <>
  struct plotter <22> {
    constexpr static const char* name = "Flag/trkPOG_toomanystripclus53X";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.trkPOG_toomanystripclus53X)};
      return output;
    }
  };

  template <>
  struct plotter <23> {
    constexpr static const char* name = "Flag/hcalLaserEventFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.hcalLaserEventFilter)};
      return output;
    }
  };

  template <>
  struct plotter <24> {
    constexpr static const char* name = "Flag/muonBadTrackFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.muonBadTrackFilter)};
      return output;
    }
  };

  template <>
  struct plotter <25> {
    constexpr static const char* name = "Flag/BadChargedCandidateFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.BadChargedCandidateFilter)};
      return output;
    }
  };

  template <>
  struct plotter <26> {
    constexpr static const char* name = "Flag/HcalStripHaloFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.HcalStripHaloFilter)};
      return output;
    }
  };

  template <>
  struct plotter <27> {
    constexpr static const char* name = "Flag/CSCTightHaloFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.CSCTightHaloFilter)};
      return output;
    }
  };

  template <>
  struct plotter <28> {
    constexpr static const char* name = "Flag/CSCTightHalo2015Filter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.CSCTightHalo2015Filter)};
      return output;
    }
  };

  template <>
  struct plotter <29> {
    constexpr static const char* name = "Flag/BadChargedCandidateSummer16Filter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.BadChargedCandidateSummer16Filter)};
      return output;
    }
  };

  template <>
  struct plotter <30> {
    constexpr static const char* name = "Flag/goodVertices";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.goodVertices)};
      return output;
    }
  };

  template <>
  struct plotter <31> {
    constexpr static const char* name = "Flag/eeBadScFilter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.eeBadScFilter)};
      return output;
    }
  };

  template <>
  struct plotter <32> {
    constexpr static const char* name = "Flag/globalTightHalo2016Filter";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Flag.globalTightHalo2016Filter)};
      return output;
    }
  };

  template <>
  struct plotter <33> {
    constexpr static const char* name = "GenPart/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.GenPart.size())};
      return output;
    }
  };

  template <>
  struct plotter <34> {
    constexpr static const char* name = "GenPart/status";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.status);
      return output;
    }
  };

  template <>
  struct plotter <35> {
    constexpr static const char* name = "GenPart/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <36> {
    constexpr static const char* name = "GenPart/statusFlags";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.statusFlags);
      return output;
    }
  };

  template <>
  struct plotter <37> {
    constexpr static const char* name = "GenPart/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <38> {
    constexpr static const char* name = "GenPart/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <39> {
    constexpr static const char* name = "GenPart/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <40> {
    constexpr static const char* name = "GenPart/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <41> {
    constexpr static const char* name = "GenPart/genPartIdxMother";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.genPartIdxMother);
      return output;
    }
  };

  template <>
  struct plotter <42> {
    constexpr static const char* name = "GenPart/genPartFlav";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.genPartFlav);
      return output;
    }
  };

  template <>
  struct plotter <43> {
    constexpr static const char* name = "Electron/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Electron.size())};
      return output;
    }
  };

  template <>
  struct plotter <44> {
    constexpr static const char* name = "Electron/mvaSpring16GP_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16GP_WP90);
      return output;
    }
  };

  template <>
  struct plotter <45> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <46> {
    constexpr static const char* name = "Electron/dr03EcalRecHitSumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03EcalRecHitSumEt);
      return output;
    }
  };

  template <>
  struct plotter <47> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <48> {
    constexpr static const char* name = "Electron/convVeto";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.convVeto);
      return output;
    }
  };

  template <>
  struct plotter <49> {
    constexpr static const char* name = "Electron/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <50> {
    constexpr static const char* name = "Electron/dzErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dzErr);
      return output;
    }
  };

  template <>
  struct plotter <51> {
    constexpr static const char* name = "Electron/pfRelIso03_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pfRelIso03_all);
      return output;
    }
  };

  template <>
  struct plotter <52> {
    constexpr static const char* name = "Electron/photonIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.photonIdx);
      return output;
    }
  };

  template <>
  struct plotter <53> {
    constexpr static const char* name = "Electron/tightCharge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.tightCharge);
      return output;
    }
  };

  template <>
  struct plotter <54> {
    constexpr static const char* name = "Electron/jetRelIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.jetRelIso);
      return output;
    }
  };

  template <>
  struct plotter <55> {
    constexpr static const char* name = "Electron/vidNestedWPBitmapSum16";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.vidNestedWPBitmapSum16);
      return output;
    }
  };

  template <>
  struct plotter <56> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso);
      return output;
    }
  };

  template <>
  struct plotter <57> {
    constexpr static const char* name = "Electron/cutBased_Sum16";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_Sum16);
      return output;
    }
  };

  template <>
  struct plotter <58> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <59> {
    constexpr static const char* name = "Electron/charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.charge);
      return output;
    }
  };

  template <>
  struct plotter <60> {
    constexpr static const char* name = "Electron/cutBased_Spring15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_Spring15);
      return output;
    }
  };

  template <>
  struct plotter <61> {
    constexpr static const char* name = "Electron/dxy";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dxy);
      return output;
    }
  };

  template <>
  struct plotter <62> {
    constexpr static const char* name = "Electron/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <63> {
    constexpr static const char* name = "Electron/cutBased_Fall17_V1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_Fall17_V1);
      return output;
    }
  };

  template <>
  struct plotter <64> {
    constexpr static const char* name = "Electron/mvaSpring16HZZ_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16HZZ_WPL);
      return output;
    }
  };

  template <>
  struct plotter <65> {
    constexpr static const char* name = "Electron/pfRelIso03_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pfRelIso03_chg);
      return output;
    }
  };

  template <>
  struct plotter <66> {
    constexpr static const char* name = "Electron/lostHits";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.lostHits);
      return output;
    }
  };

  template <>
  struct plotter <67> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <68> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <69> {
    constexpr static const char* name = "Electron/dxyErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dxyErr);
      return output;
    }
  };

  template <>
  struct plotter <70> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <71> {
    constexpr static const char* name = "Electron/mvaSpring16HZZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16HZZ);
      return output;
    }
  };

  template <>
  struct plotter <72> {
    constexpr static const char* name = "Electron/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <73> {
    constexpr static const char* name = "Electron/dr03TkSumPt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03TkSumPt);
      return output;
    }
  };

  template <>
  struct plotter <74> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso);
      return output;
    }
  };

  template <>
  struct plotter <75> {
    constexpr static const char* name = "Electron/mvaTTH";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaTTH);
      return output;
    }
  };

  template <>
  struct plotter <76> {
    constexpr static const char* name = "Electron/ip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.ip3d);
      return output;
    }
  };

  template <>
  struct plotter <77> {
    constexpr static const char* name = "Electron/cutBased_HEEP";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_HEEP);
      return output;
    }
  };

  template <>
  struct plotter <78> {
    constexpr static const char* name = "Electron/isPFcand";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.isPFcand);
      return output;
    }
  };

  template <>
  struct plotter <79> {
    constexpr static const char* name = "Electron/dr03TkSumPtHEEP";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03TkSumPtHEEP);
      return output;
    }
  };

  template <>
  struct plotter <80> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <81> {
    constexpr static const char* name = "Electron/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <82> {
    constexpr static const char* name = "Electron/mvaSpring16GP_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16GP_WP80);
      return output;
    }
  };

  template <>
  struct plotter <83> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <84> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso);
      return output;
    }
  };

  template <>
  struct plotter <85> {
    constexpr static const char* name = "Electron/dr03HcalDepth1TowerSumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03HcalDepth1TowerSumEt);
      return output;
    }
  };

  template <>
  struct plotter <86> {
    constexpr static const char* name = "Electron/miniPFRelIso_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.miniPFRelIso_chg);
      return output;
    }
  };

  template <>
  struct plotter <87> {
    constexpr static const char* name = "Electron/dz";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dz);
      return output;
    }
  };

  template <>
  struct plotter <88> {
    constexpr static const char* name = "Electron/sip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.sip3d);
      return output;
    }
  };

  template <>
  struct plotter <89> {
    constexpr static const char* name = "Electron/vidNestedWPBitmapSpring15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.vidNestedWPBitmapSpring15);
      return output;
    }
  };

  template <>
  struct plotter <90> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <91> {
    constexpr static const char* name = "Electron/mvaSpring16GP";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16GP);
      return output;
    }
  };

  template <>
  struct plotter <92> {
    constexpr static const char* name = "Electron/deltaEtaSC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.deltaEtaSC);
      return output;
    }
  };

  template <>
  struct plotter <93> {
    constexpr static const char* name = "Electron/miniPFRelIso_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.miniPFRelIso_all);
      return output;
    }
  };

  template <>
  struct plotter <94> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <95> {
    constexpr static const char* name = "Electron/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <96> {
    constexpr static const char* name = "Electron/cutBased_HLTPreSel";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_HLTPreSel);
      return output;
    }
  };

  template <>
  struct plotter <97> {
    constexpr static const char* name = "Electron/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <98> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <99> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <100> {
    constexpr static const char* name = "Electron/genPartIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.genPartIdx);
      return output;
    }
  };

  template <>
  struct plotter <101> {
    constexpr static const char* name = "Electron/jetIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.jetIdx);
      return output;
    }
  };

  template <>
  struct plotter <102> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso);
      return output;
    }
  };

  template <>
  struct plotter <103> {
    constexpr static const char* name = "Muon/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Muon.size())};
      return output;
    }
  };

  template <>
  struct plotter <104> {
    constexpr static const char* name = "Muon/dzErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dzErr);
      return output;
    }
  };

  template <>
  struct plotter <105> {
    constexpr static const char* name = "Muon/pfIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfIsoId);
      return output;
    }
  };

  template <>
  struct plotter <106> {
    constexpr static const char* name = "Muon/dxy";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dxy);
      return output;
    }
  };

  template <>
  struct plotter <107> {
    constexpr static const char* name = "Muon/softMvaId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.softMvaId);
      return output;
    }
  };

  template <>
  struct plotter <108> {
    constexpr static const char* name = "Muon/nStations";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.nStations);
      return output;
    }
  };

  template <>
  struct plotter <109> {
    constexpr static const char* name = "Muon/isGlobal";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.isGlobal);
      return output;
    }
  };

  template <>
  struct plotter <110> {
    constexpr static const char* name = "Muon/pfRelIso03_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfRelIso03_all);
      return output;
    }
  };

  template <>
  struct plotter <111> {
    constexpr static const char* name = "Muon/miniPFRelIso_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.miniPFRelIso_chg);
      return output;
    }
  };

  template <>
  struct plotter <112> {
    constexpr static const char* name = "Muon/tightCharge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.tightCharge);
      return output;
    }
  };

  template <>
  struct plotter <113> {
    constexpr static const char* name = "Muon/jetRelIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.jetRelIso);
      return output;
    }
  };

  template <>
  struct plotter <114> {
    constexpr static const char* name = "Muon/ip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.ip3d);
      return output;
    }
  };

  template <>
  struct plotter <115> {
    constexpr static const char* name = "Muon/triggerIdLoose";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.triggerIdLoose);
      return output;
    }
  };

  template <>
  struct plotter <116> {
    constexpr static const char* name = "Muon/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <117> {
    constexpr static const char* name = "Muon/highPtId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.highPtId);
      return output;
    }
  };

  template <>
  struct plotter <118> {
    constexpr static const char* name = "Muon/pfRelIso03_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfRelIso03_chg);
      return output;
    }
  };

  template <>
  struct plotter <119> {
    constexpr static const char* name = "Muon/dxyErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dxyErr);
      return output;
    }
  };

  template <>
  struct plotter <120> {
    constexpr static const char* name = "Muon/charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.charge);
      return output;
    }
  };

  template <>
  struct plotter <121> {
    constexpr static const char* name = "Muon/inTimeMuon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.inTimeMuon);
      return output;
    }
  };

  template <>
  struct plotter <122> {
    constexpr static const char* name = "Muon/segmentComp";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.segmentComp);
      return output;
    }
  };

  template <>
  struct plotter <123> {
    constexpr static const char* name = "Muon/mvaTTH";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mvaTTH);
      return output;
    }
  };

  template <>
  struct plotter <124> {
    constexpr static const char* name = "Muon/isPFcand";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.isPFcand);
      return output;
    }
  };

  template <>
  struct plotter <125> {
    constexpr static const char* name = "Muon/mediumPromptId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mediumPromptId);
      return output;
    }
  };

  template <>
  struct plotter <126> {
    constexpr static const char* name = "Muon/softId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.softId);
      return output;
    }
  };

  template <>
  struct plotter <127> {
    constexpr static const char* name = "Muon/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <128> {
    constexpr static const char* name = "Muon/nTrackerLayers";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.nTrackerLayers);
      return output;
    }
  };

  template <>
  struct plotter <129> {
    constexpr static const char* name = "Muon/dz";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dz);
      return output;
    }
  };

  template <>
  struct plotter <130> {
    constexpr static const char* name = "Muon/isTracker";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.isTracker);
      return output;
    }
  };

  template <>
  struct plotter <131> {
    constexpr static const char* name = "Muon/sip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.sip3d);
      return output;
    }
  };

  template <>
  struct plotter <132> {
    constexpr static const char* name = "Muon/multiIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.multiIsoId);
      return output;
    }
  };

  template <>
  struct plotter <133> {
    constexpr static const char* name = "Muon/tightId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.tightId);
      return output;
    }
  };

  template <>
  struct plotter <134> {
    constexpr static const char* name = "Muon/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <135> {
    constexpr static const char* name = "Muon/pfRelIso04_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfRelIso04_all);
      return output;
    }
  };

  template <>
  struct plotter <136> {
    constexpr static const char* name = "Muon/tkIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.tkIsoId);
      return output;
    }
  };

  template <>
  struct plotter <137> {
    constexpr static const char* name = "Muon/jetIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.jetIdx);
      return output;
    }
  };

  template <>
  struct plotter <138> {
    constexpr static const char* name = "Muon/miniIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.miniIsoId);
      return output;
    }
  };

  template <>
  struct plotter <139> {
    constexpr static const char* name = "Muon/miniPFRelIso_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.miniPFRelIso_all);
      return output;
    }
  };

  template <>
  struct plotter <140> {
    constexpr static const char* name = "Muon/ptErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.ptErr);
      return output;
    }
  };

  template <>
  struct plotter <141> {
    constexpr static const char* name = "Muon/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <142> {
    constexpr static const char* name = "Muon/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <143> {
    constexpr static const char* name = "Muon/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <144> {
    constexpr static const char* name = "Muon/mediumId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mediumId);
      return output;
    }
  };

  template <>
  struct plotter <145> {
    constexpr static const char* name = "Muon/genPartIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.genPartIdx);
      return output;
    }
  };

  template <>
  struct plotter <146> {
    constexpr static const char* name = "Muon/mvaId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mvaId);
      return output;
    }
  };

  template <>
  struct plotter <147> {
    constexpr static const char* name = "Jet/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Jet.size())};
      return output;
    }
  };

  template <>
  struct plotter <148> {
    constexpr static const char* name = "Jet/btagCMVA";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagCMVA);
      return output;
    }
  };

  template <>
  struct plotter <149> {
    constexpr static const char* name = "Jet/bRegRes";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.bRegRes);
      return output;
    }
  };

  template <>
  struct plotter <150> {
    constexpr static const char* name = "Jet/btagDeepFlavB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagDeepFlavB);
      return output;
    }
  };

  template <>
  struct plotter <151> {
    constexpr static const char* name = "Jet/area";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.area);
      return output;
    }
  };

  template <>
  struct plotter <152> {
    constexpr static const char* name = "Jet/chEmEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.chEmEF);
      return output;
    }
  };

  template <>
  struct plotter <153> {
    constexpr static const char* name = "Jet/chHEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.chHEF);
      return output;
    }
  };

  template <>
  struct plotter <154> {
    constexpr static const char* name = "Jet/qgl";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.qgl);
      return output;
    }
  };

  template <>
  struct plotter <155> {
    constexpr static const char* name = "Jet/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <156> {
    constexpr static const char* name = "Jet/muEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.muEF);
      return output;
    }
  };

  template <>
  struct plotter <157> {
    constexpr static const char* name = "Jet/electronIdx1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.electronIdx1);
      return output;
    }
  };

  template <>
  struct plotter <158> {
    constexpr static const char* name = "Jet/electronIdx2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.electronIdx2);
      return output;
    }
  };

  template <>
  struct plotter <159> {
    constexpr static const char* name = "Jet/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <160> {
    constexpr static const char* name = "Jet/bRegCorr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.bRegCorr);
      return output;
    }
  };

  template <>
  struct plotter <161> {
    constexpr static const char* name = "Jet/puId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.puId);
      return output;
    }
  };

  template <>
  struct plotter <162> {
    constexpr static const char* name = "Jet/jetId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.jetId);
      return output;
    }
  };

  template <>
  struct plotter <163> {
    constexpr static const char* name = "Jet/neEmEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.neEmEF);
      return output;
    }
  };

  template <>
  struct plotter <164> {
    constexpr static const char* name = "Jet/btagDeepC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagDeepC);
      return output;
    }
  };

  template <>
  struct plotter <165> {
    constexpr static const char* name = "Jet/btagDeepB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagDeepB);
      return output;
    }
  };

  template <>
  struct plotter <166> {
    constexpr static const char* name = "Jet/nElectrons";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.nElectrons);
      return output;
    }
  };

  template <>
  struct plotter <167> {
    constexpr static const char* name = "Jet/neHEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.neHEF);
      return output;
    }
  };

  template <>
  struct plotter <168> {
    constexpr static const char* name = "Jet/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <169> {
    constexpr static const char* name = "Jet/nMuons";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.nMuons);
      return output;
    }
  };

  template <>
  struct plotter <170> {
    constexpr static const char* name = "Jet/btagCSVV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagCSVV2);
      return output;
    }
  };

  template <>
  struct plotter <171> {
    constexpr static const char* name = "Jet/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <172> {
    constexpr static const char* name = "Jet/rawFactor";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.rawFactor);
      return output;
    }
  };

  template <>
  struct plotter <173> {
    constexpr static const char* name = "Jet/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <174> {
    constexpr static const char* name = "Jet/muonIdx2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.muonIdx2);
      return output;
    }
  };

  template <>
  struct plotter <175> {
    constexpr static const char* name = "Jet/muonIdx1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.muonIdx1);
      return output;
    }
  };

  template <>
  struct plotter <176> {
    constexpr static const char* name = "Jet/nConstituents";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.nConstituents);
      return output;
    }
  };

  template <>
  struct plotter <177> {
    constexpr static const char* name = "Photon/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Photon.size())};
      return output;
    }
  };

  template <>
  struct plotter <178> {
    constexpr static const char* name = "Photon/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <179> {
    constexpr static const char* name = "Photon/pfRelIso03_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pfRelIso03_all);
      return output;
    }
  };

  template <>
  struct plotter <180> {
    constexpr static const char* name = "Photon/genPartIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.genPartIdx);
      return output;
    }
  };

  template <>
  struct plotter <181> {
    constexpr static const char* name = "Photon/isScEtaEE";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.isScEtaEE);
      return output;
    }
  };

  template <>
  struct plotter <182> {
    constexpr static const char* name = "Photon/isScEtaEB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.isScEtaEB);
      return output;
    }
  };

  template <>
  struct plotter <183> {
    constexpr static const char* name = "Photon/mvaID17_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID17_WP90);
      return output;
    }
  };

  template <>
  struct plotter <184> {
    constexpr static const char* name = "Photon/mvaID_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID_WP90);
      return output;
    }
  };

  template <>
  struct plotter <185> {
    constexpr static const char* name = "Photon/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <186> {
    constexpr static const char* name = "Photon/pfRelIso03_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pfRelIso03_chg);
      return output;
    }
  };

  template <>
  struct plotter <187> {
    constexpr static const char* name = "Photon/charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.charge);
      return output;
    }
  };

  template <>
  struct plotter <188> {
    constexpr static const char* name = "Photon/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <189> {
    constexpr static const char* name = "Photon/cutBased17Bitmap";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.cutBased17Bitmap);
      return output;
    }
  };

  template <>
  struct plotter <190> {
    constexpr static const char* name = "Photon/mvaID_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID_WP80);
      return output;
    }
  };

  template <>
  struct plotter <191> {
    constexpr static const char* name = "Photon/mvaID";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID);
      return output;
    }
  };

  template <>
  struct plotter <192> {
    constexpr static const char* name = "Photon/mvaID17_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID17_WP80);
      return output;
    }
  };

  template <>
  struct plotter <193> {
    constexpr static const char* name = "Photon/mvaID17";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID17);
      return output;
    }
  };

  template <>
  struct plotter <194> {
    constexpr static const char* name = "Photon/electronIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.electronIdx);
      return output;
    }
  };

  template <>
  struct plotter <195> {
    constexpr static const char* name = "Photon/pixelSeed";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pixelSeed);
      return output;
    }
  };

  template <>
  struct plotter <196> {
    constexpr static const char* name = "Photon/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <197> {
    constexpr static const char* name = "Photon/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <198> {
    constexpr static const char* name = "Photon/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <199> {
    constexpr static const char* name = "Photon/electronVeto";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.electronVeto);
      return output;
    }
  };

  template <>
  struct plotter <200> {
    constexpr static const char* name = "Photon/jetIdx";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.jetIdx);
      return output;
    }
  };

  template <>
  struct plotter <201> {
    constexpr static const char* name = "SV/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.SV.size())};
      return output;
    }
  };

  template <>
  struct plotter <202> {
    constexpr static const char* name = "SV/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <203> {
    constexpr static const char* name = "SV/dlen";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.dlen);
      return output;
    }
  };

  template <>
  struct plotter <204> {
    constexpr static const char* name = "SV/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <205> {
    constexpr static const char* name = "SV/chi2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.chi2);
      return output;
    }
  };

  template <>
  struct plotter <206> {
    constexpr static const char* name = "SV/dlenSig";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.dlenSig);
      return output;
    }
  };

  template <>
  struct plotter <207> {
    constexpr static const char* name = "SV/ndof";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.ndof);
      return output;
    }
  };

  template <>
  struct plotter <208> {
    constexpr static const char* name = "SV/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <209> {
    constexpr static const char* name = "SV/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <210> {
    constexpr static const char* name = "SV/pAngle";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.pAngle);
      return output;
    }
  };

  template <>
  struct plotter <211> {
    constexpr static const char* name = "SV/y";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.y);
      return output;
    }
  };

  template <>
  struct plotter <212> {
    constexpr static const char* name = "SV/x";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.x);
      return output;
    }
  };

  template <>
  struct plotter <213> {
    constexpr static const char* name = "SV/z";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SV)
        output.push_back(i.z);
      return output;
    }
  };

  template <>
  struct plotter <214> {
    constexpr static const char* name = "FatJet/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.FatJet.size())};
      return output;
    }
  };

  template <>
  struct plotter <215> {
    constexpr static const char* name = "FatJet/deepTagMD_ccvsLight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_ccvsLight);
      return output;
    }
  };

  template <>
  struct plotter <216> {
    constexpr static const char* name = "FatJet/deepTag_QCDothers";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_QCDothers);
      return output;
    }
  };

  template <>
  struct plotter <217> {
    constexpr static const char* name = "FatJet/deepTagMD_HbbvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_HbbvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <218> {
    constexpr static const char* name = "FatJet/btagCSVV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagCSVV2);
      return output;
    }
  };

  template <>
  struct plotter <219> {
    constexpr static const char* name = "FatJet/subJetIdx2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.subJetIdx2);
      return output;
    }
  };

  template <>
  struct plotter <220> {
    constexpr static const char* name = "FatJet/subJetIdx1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.subJetIdx1);
      return output;
    }
  };

  template <>
  struct plotter <221> {
    constexpr static const char* name = "FatJet/deepTag_WvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_WvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <222> {
    constexpr static const char* name = "FatJet/btagHbb";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagHbb);
      return output;
    }
  };

  template <>
  struct plotter <223> {
    constexpr static const char* name = "FatJet/deepTagMD_bbvsLight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_bbvsLight);
      return output;
    }
  };

  template <>
  struct plotter <224> {
    constexpr static const char* name = "FatJet/deepTag_ZvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_ZvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <225> {
    constexpr static const char* name = "FatJet/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <226> {
    constexpr static const char* name = "FatJet/area";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.area);
      return output;
    }
  };

  template <>
  struct plotter <227> {
    constexpr static const char* name = "FatJet/n2b1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.n2b1);
      return output;
    }
  };

  template <>
  struct plotter <228> {
    constexpr static const char* name = "FatJet/n3b1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.n3b1);
      return output;
    }
  };

  template <>
  struct plotter <229> {
    constexpr static const char* name = "FatJet/tau2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.tau2);
      return output;
    }
  };

  template <>
  struct plotter <230> {
    constexpr static const char* name = "FatJet/tau3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.tau3);
      return output;
    }
  };

  template <>
  struct plotter <231> {
    constexpr static const char* name = "FatJet/deepTag_H";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_H);
      return output;
    }
  };

  template <>
  struct plotter <232> {
    constexpr static const char* name = "FatJet/tau1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.tau1);
      return output;
    }
  };

  template <>
  struct plotter <233> {
    constexpr static const char* name = "FatJet/deepTagMD_WvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_WvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <234> {
    constexpr static const char* name = "FatJet/btagDDCvB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagDDCvB);
      return output;
    }
  };

  template <>
  struct plotter <235> {
    constexpr static const char* name = "FatJet/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <236> {
    constexpr static const char* name = "FatJet/tau4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.tau4);
      return output;
    }
  };

  template <>
  struct plotter <237> {
    constexpr static const char* name = "FatJet/deepTagMD_H4qvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_H4qvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <238> {
    constexpr static const char* name = "FatJet/btagDDBvL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagDDBvL);
      return output;
    }
  };

  template <>
  struct plotter <239> {
    constexpr static const char* name = "FatJet/btagDDCvL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagDDCvL);
      return output;
    }
  };

  template <>
  struct plotter <240> {
    constexpr static const char* name = "FatJet/deepTagMD_ZHccvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_ZHccvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <241> {
    constexpr static const char* name = "FatJet/jetId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.jetId);
      return output;
    }
  };

  template <>
  struct plotter <242> {
    constexpr static const char* name = "FatJet/btagDeepB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagDeepB);
      return output;
    }
  };

  template <>
  struct plotter <243> {
    constexpr static const char* name = "FatJet/btagCMVA";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.btagCMVA);
      return output;
    }
  };

  template <>
  struct plotter <244> {
    constexpr static const char* name = "FatJet/deepTagMD_ZvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_ZvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <245> {
    constexpr static const char* name = "FatJet/deepTag_QCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_QCD);
      return output;
    }
  };

  template <>
  struct plotter <246> {
    constexpr static const char* name = "FatJet/deepTagMD_ZbbvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_ZbbvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <247> {
    constexpr static const char* name = "FatJet/deepTagMD_ZHbbvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_ZHbbvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <248> {
    constexpr static const char* name = "FatJet/deepTagMD_TvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTagMD_TvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <249> {
    constexpr static const char* name = "FatJet/deepTag_TvsQCD";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.deepTag_TvsQCD);
      return output;
    }
  };

  template <>
  struct plotter <250> {
    constexpr static const char* name = "FatJet/rawFactor";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.rawFactor);
      return output;
    }
  };

  template <>
  struct plotter <251> {
    constexpr static const char* name = "FatJet/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <252> {
    constexpr static const char* name = "FatJet/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <253> {
    constexpr static const char* name = "FatJet/msoftdrop";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.FatJet)
        output.push_back(i.msoftdrop);
      return output;
    }
  };

  template <>
  struct plotter <254> {
    constexpr static const char* name = "SubJet/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.SubJet.size())};
      return output;
    }
  };

  template <>
  struct plotter <255> {
    constexpr static const char* name = "SubJet/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <256> {
    constexpr static const char* name = "SubJet/n2b1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.n2b1);
      return output;
    }
  };

  template <>
  struct plotter <257> {
    constexpr static const char* name = "SubJet/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <258> {
    constexpr static const char* name = "SubJet/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <259> {
    constexpr static const char* name = "SubJet/btagCSVV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.btagCSVV2);
      return output;
    }
  };

  template <>
  struct plotter <260> {
    constexpr static const char* name = "SubJet/n3b1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.n3b1);
      return output;
    }
  };

  template <>
  struct plotter <261> {
    constexpr static const char* name = "SubJet/tau2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.tau2);
      return output;
    }
  };

  template <>
  struct plotter <262> {
    constexpr static const char* name = "SubJet/tau3";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.tau3);
      return output;
    }
  };

  template <>
  struct plotter <263> {
    constexpr static const char* name = "SubJet/rawFactor";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.rawFactor);
      return output;
    }
  };

  template <>
  struct plotter <264> {
    constexpr static const char* name = "SubJet/tau1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.tau1);
      return output;
    }
  };

  template <>
  struct plotter <265> {
    constexpr static const char* name = "SubJet/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <266> {
    constexpr static const char* name = "SubJet/tau4";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.tau4);
      return output;
    }
  };

  template <>
  struct plotter <267> {
    constexpr static const char* name = "SubJet/btagDeepB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.btagDeepB);
      return output;
    }
  };

  template <>
  struct plotter <268> {
    constexpr static const char* name = "SubJet/btagCMVA";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.SubJet)
        output.push_back(i.btagCMVA);
      return output;
    }
  };

  template <>
  struct plotter <269> {
    constexpr static const char* name = "PV/chi2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.chi2)};
      return output;
    }
  };

  template <>
  struct plotter <270> {
    constexpr static const char* name = "PV/ndof";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.ndof)};
      return output;
    }
  };

  template <>
  struct plotter <271> {
    constexpr static const char* name = "PV/score";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.score)};
      return output;
    }
  };

  template <>
  struct plotter <272> {
    constexpr static const char* name = "PV/npvsGood";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.npvsGood)};
      return output;
    }
  };

  template <>
  struct plotter <273> {
    constexpr static const char* name = "PV/y";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.y)};
      return output;
    }
  };

  template <>
  struct plotter <274> {
    constexpr static const char* name = "PV/x";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.x)};
      return output;
    }
  };

  template <>
  struct plotter <275> {
    constexpr static const char* name = "PV/z";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.z)};
      return output;
    }
  };

  template <>
  struct plotter <276> {
    constexpr static const char* name = "PV/npvs";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PV.npvs)};
      return output;
    }
  };

  template <>
  struct plotter <277> {
    constexpr static const char* name = "GenMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.GenMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <278> {
    constexpr static const char* name = "GenMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.GenMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <279> {
    constexpr static const char* name = "CaloMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.CaloMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <280> {
    constexpr static const char* name = "CaloMET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.CaloMET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <281> {
    constexpr static const char* name = "CaloMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.CaloMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <282> {
    constexpr static const char* name = "ChsMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.ChsMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <283> {
    constexpr static const char* name = "ChsMET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.ChsMET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <284> {
    constexpr static const char* name = "ChsMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.ChsMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <285> {
    constexpr static const char* name = "MET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.MET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <286> {
    constexpr static const char* name = "MET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.MET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <287> {
    constexpr static const char* name = "MET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.MET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <288> {
    constexpr static const char* name = "PuppiMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PuppiMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <289> {
    constexpr static const char* name = "PuppiMET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PuppiMET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <290> {
    constexpr static const char* name = "PuppiMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.PuppiMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <291> {
    constexpr static const char* name = "RawMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.RawMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <292> {
    constexpr static const char* name = "RawMET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.RawMET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <293> {
    constexpr static const char* name = "RawMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.RawMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <294> {
    constexpr static const char* name = "TkMET/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.TkMET.phi)};
      return output;
    }
  };

  template <>
  struct plotter <295> {
    constexpr static const char* name = "TkMET/sumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.TkMET.sumEt)};
      return output;
    }
  };

  template <>
  struct plotter <296> {
    constexpr static const char* name = "TkMET/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.TkMET.pt)};
      return output;
    }
  };

  template <>
  struct plotter <297> {
    constexpr static const char* name = "HLT/PFMETNoMu100_PFMHTNoMu100_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETNoMu100_PFMHTNoMu100_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <298> {
    constexpr static const char* name = "HLT/Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL)};
      return output;
    }
  };

  template <>
  struct plotter <299> {
    constexpr static const char* name = "HLT/Mu17_Mu8_SameSign";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_Mu8_SameSign)};
      return output;
    }
  };

  template <>
  struct plotter <300> {
    constexpr static const char* name = "HLT/PFMET170_JetIdCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET170_JetIdCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <301> {
    constexpr static const char* name = "HLT/PFMET170_NotCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET170_NotCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <302> {
    constexpr static const char* name = "HLT/PFMET170_BeamHaloCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET170_BeamHaloCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <303> {
    constexpr static const char* name = "HLT/PFMETNoMu90_PFMHTNoMu90_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETNoMu90_PFMHTNoMu90_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <304> {
    constexpr static const char* name = "HLT/PFMET170_HBHE_BeamHaloCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET170_HBHE_BeamHaloCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <305> {
    constexpr static const char* name = "HLT/Mu17_Mu8_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_Mu8_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <306> {
    constexpr static const char* name = "HLT/Mu20_Mu10";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu20_Mu10)};
      return output;
    }
  };

  template <>
  struct plotter <307> {
    constexpr static const char* name = "HLT/Mu17_TrkIsoVVL_Mu8_TrkIsoVVL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL)};
      return output;
    }
  };

  template <>
  struct plotter <308> {
    constexpr static const char* name = "HLT/Mu20_Mu10_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu20_Mu10_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <309> {
    constexpr static const char* name = "HLT/PFMET170_HBHECleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET170_HBHECleaned)};
      return output;
    }
  };

  template <>
  struct plotter <310> {
    constexpr static const char* name = "HLT/Mu30_TkMu11";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu30_TkMu11)};
      return output;
    }
  };

  template <>
  struct plotter <311> {
    constexpr static const char* name = "HLT/PFMET170_NoiseCleaned";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMET170_NoiseCleaned)};
      return output;
    }
  };

  template <>
  struct plotter <312> {
    constexpr static const char* name = "HLT/Mu20_Mu10_SameSign";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu20_Mu10_SameSign)};
      return output;
    }
  };

  template <>
  struct plotter <313> {
    constexpr static const char* name = "HLT/Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <314> {
    constexpr static const char* name = "HLT/Mu17_Mu8";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_Mu8)};
      return output;
    }
  };

  template <>
  struct plotter <315> {
    constexpr static const char* name = "HLT/Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <316> {
    constexpr static const char* name = "HLT/Mu25_TkMu0_dEta18_Onia";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu25_TkMu0_dEta18_Onia)};
      return output;
    }
  };

  template <>
  struct plotter <317> {
    constexpr static const char* name = "HLT/Mu17_TkMu8_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_TkMu8_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <318> {
    constexpr static const char* name = "HLT/Mu17_Mu8_SameSign_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu17_Mu8_SameSign_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <319> {
    constexpr static const char* name = "HLT/Mu20_Mu10_SameSign_DZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu20_Mu10_SameSign_DZ)};
      return output;
    }
  };

  template <>
  struct plotter <320> {
    constexpr static const char* name = "HLT/Mu27_TkMu8";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.Mu27_TkMu8)};
      return output;
    }
  };

  template <>
  struct plotter <321> {
    constexpr static const char* name = "HLT/PFMETNoMu110_PFMHTNoMu110_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETNoMu110_PFMHTNoMu110_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <322> {
    constexpr static const char* name = "HLT/PFMETNoMu120_PFMHTNoMu120_IDTight";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.HLT.PFMETNoMu120_PFMHTNoMu120_IDTight)};
      return output;
    }
  };

  template <>
  struct plotter <323> {
    constexpr static const char* name = "btagWeight/DeepCSVB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.btagWeight.DeepCSVB)};
      return output;
    }
  };

  template <>
  struct plotter <324> {
    constexpr static const char* name = "btagWeight/CSVV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.btagWeight.CSVV2)};
      return output;
    }
  };

#define NUM_PLOTS 325

};

#endif

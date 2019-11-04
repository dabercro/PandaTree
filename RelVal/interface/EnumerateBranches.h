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
    constexpr static const char* name = "common/luminosityBlock";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.luminosityBlock)};
      return output;
    }
  };

  template <>
  struct plotter <2> {
    constexpr static const char* name = "common/event";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.event)};
      return output;
    }
  };

  template <>
  struct plotter <3> {
    constexpr static const char* name = "GenPart/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.GenPart.size())};
      return output;
    }
  };

  template <>
  struct plotter <4> {
    constexpr static const char* name = "GenPart/status";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.status);
      return output;
    }
  };

  template <>
  struct plotter <5> {
    constexpr static const char* name = "GenPart/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <6> {
    constexpr static const char* name = "GenPart/statusFlags";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.statusFlags);
      return output;
    }
  };

  template <>
  struct plotter <7> {
    constexpr static const char* name = "GenPart/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <8> {
    constexpr static const char* name = "GenPart/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <9> {
    constexpr static const char* name = "GenPart/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <10> {
    constexpr static const char* name = "GenPart/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <11> {
    constexpr static const char* name = "GenPart/genPartFlav";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.GenPart)
        output.push_back(i.genPartFlav);
      return output;
    }
  };

  template <>
  struct plotter <12> {
    constexpr static const char* name = "Electron/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Electron.size())};
      return output;
    }
  };

  template <>
  struct plotter <13> {
    constexpr static const char* name = "Electron/mvaSpring16GP_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16GP_WP90);
      return output;
    }
  };

  template <>
  struct plotter <14> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <15> {
    constexpr static const char* name = "Electron/dr03EcalRecHitSumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03EcalRecHitSumEt);
      return output;
    }
  };

  template <>
  struct plotter <16> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <17> {
    constexpr static const char* name = "Electron/convVeto";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.convVeto);
      return output;
    }
  };

  template <>
  struct plotter <18> {
    constexpr static const char* name = "Electron/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <19> {
    constexpr static const char* name = "Electron/dzErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dzErr);
      return output;
    }
  };

  template <>
  struct plotter <20> {
    constexpr static const char* name = "Electron/pfRelIso03_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pfRelIso03_all);
      return output;
    }
  };

  template <>
  struct plotter <21> {
    constexpr static const char* name = "Electron/miniPFRelIso_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.miniPFRelIso_chg);
      return output;
    }
  };

  template <>
  struct plotter <22> {
    constexpr static const char* name = "Electron/tightCharge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.tightCharge);
      return output;
    }
  };

  template <>
  struct plotter <23> {
    constexpr static const char* name = "Electron/jetRelIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.jetRelIso);
      return output;
    }
  };

  template <>
  struct plotter <24> {
    constexpr static const char* name = "Electron/vidNestedWPBitmapSum16";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.vidNestedWPBitmapSum16);
      return output;
    }
  };

  template <>
  struct plotter <25> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso);
      return output;
    }
  };

  template <>
  struct plotter <26> {
    constexpr static const char* name = "Electron/cutBased_Sum16";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_Sum16);
      return output;
    }
  };

  template <>
  struct plotter <27> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <28> {
    constexpr static const char* name = "Electron/charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.charge);
      return output;
    }
  };

  template <>
  struct plotter <29> {
    constexpr static const char* name = "Electron/cutBased_Spring15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_Spring15);
      return output;
    }
  };

  template <>
  struct plotter <30> {
    constexpr static const char* name = "Electron/dxy";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dxy);
      return output;
    }
  };

  template <>
  struct plotter <31> {
    constexpr static const char* name = "Electron/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <32> {
    constexpr static const char* name = "Electron/cutBased_Fall17_V1";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_Fall17_V1);
      return output;
    }
  };

  template <>
  struct plotter <33> {
    constexpr static const char* name = "Electron/mvaSpring16HZZ_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16HZZ_WPL);
      return output;
    }
  };

  template <>
  struct plotter <34> {
    constexpr static const char* name = "Electron/pfRelIso03_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pfRelIso03_chg);
      return output;
    }
  };

  template <>
  struct plotter <35> {
    constexpr static const char* name = "Electron/lostHits";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.lostHits);
      return output;
    }
  };

  template <>
  struct plotter <36> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <37> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <38> {
    constexpr static const char* name = "Electron/dxyErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dxyErr);
      return output;
    }
  };

  template <>
  struct plotter <39> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <40> {
    constexpr static const char* name = "Electron/mvaSpring16HZZ";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16HZZ);
      return output;
    }
  };

  template <>
  struct plotter <41> {
    constexpr static const char* name = "Electron/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <42> {
    constexpr static const char* name = "Electron/dr03TkSumPt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03TkSumPt);
      return output;
    }
  };

  template <>
  struct plotter <43> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso);
      return output;
    }
  };

  template <>
  struct plotter <44> {
    constexpr static const char* name = "Electron/mvaTTH";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaTTH);
      return output;
    }
  };

  template <>
  struct plotter <45> {
    constexpr static const char* name = "Electron/ip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.ip3d);
      return output;
    }
  };

  template <>
  struct plotter <46> {
    constexpr static const char* name = "Electron/cutBased_HEEP";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_HEEP);
      return output;
    }
  };

  template <>
  struct plotter <47> {
    constexpr static const char* name = "Electron/isPFcand";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.isPFcand);
      return output;
    }
  };

  template <>
  struct plotter <48> {
    constexpr static const char* name = "Electron/dr03TkSumPtHEEP";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03TkSumPtHEEP);
      return output;
    }
  };

  template <>
  struct plotter <49> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <50> {
    constexpr static const char* name = "Electron/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <51> {
    constexpr static const char* name = "Electron/mvaSpring16GP_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16GP_WP80);
      return output;
    }
  };

  template <>
  struct plotter <52> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <53> {
    constexpr static const char* name = "Electron/mvaFall17V2noIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2noIso);
      return output;
    }
  };

  template <>
  struct plotter <54> {
    constexpr static const char* name = "Electron/dr03HcalDepth1TowerSumEt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dr03HcalDepth1TowerSumEt);
      return output;
    }
  };

  template <>
  struct plotter <55> {
    constexpr static const char* name = "Electron/dz";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.dz);
      return output;
    }
  };

  template <>
  struct plotter <56> {
    constexpr static const char* name = "Electron/sip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.sip3d);
      return output;
    }
  };

  template <>
  struct plotter <57> {
    constexpr static const char* name = "Electron/vidNestedWPBitmapSpring15";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.vidNestedWPBitmapSpring15);
      return output;
    }
  };

  template <>
  struct plotter <58> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <59> {
    constexpr static const char* name = "Electron/mvaSpring16GP";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaSpring16GP);
      return output;
    }
  };

  template <>
  struct plotter <60> {
    constexpr static const char* name = "Electron/deltaEtaSC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.deltaEtaSC);
      return output;
    }
  };

  template <>
  struct plotter <61> {
    constexpr static const char* name = "Electron/miniPFRelIso_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.miniPFRelIso_all);
      return output;
    }
  };

  template <>
  struct plotter <62> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso_WP80);
      return output;
    }
  };

  template <>
  struct plotter <63> {
    constexpr static const char* name = "Electron/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <64> {
    constexpr static const char* name = "Electron/cutBased_HLTPreSel";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.cutBased_HLTPreSel);
      return output;
    }
  };

  template <>
  struct plotter <65> {
    constexpr static const char* name = "Electron/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <66> {
    constexpr static const char* name = "Electron/mvaFall17V2Iso_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V2Iso_WP90);
      return output;
    }
  };

  template <>
  struct plotter <67> {
    constexpr static const char* name = "Electron/mvaFall17V1noIso_WPL";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1noIso_WPL);
      return output;
    }
  };

  template <>
  struct plotter <68> {
    constexpr static const char* name = "Electron/mvaFall17V1Iso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mvaFall17V1Iso);
      return output;
    }
  };

  template <>
  struct plotter <69> {
    constexpr static const char* name = "Muon/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Muon.size())};
      return output;
    }
  };

  template <>
  struct plotter <70> {
    constexpr static const char* name = "Muon/dzErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dzErr);
      return output;
    }
  };

  template <>
  struct plotter <71> {
    constexpr static const char* name = "Muon/pfIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfIsoId);
      return output;
    }
  };

  template <>
  struct plotter <72> {
    constexpr static const char* name = "Muon/dxy";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dxy);
      return output;
    }
  };

  template <>
  struct plotter <73> {
    constexpr static const char* name = "Muon/softMvaId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.softMvaId);
      return output;
    }
  };

  template <>
  struct plotter <74> {
    constexpr static const char* name = "Muon/nStations";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.nStations);
      return output;
    }
  };

  template <>
  struct plotter <75> {
    constexpr static const char* name = "Muon/isGlobal";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.isGlobal);
      return output;
    }
  };

  template <>
  struct plotter <76> {
    constexpr static const char* name = "Muon/pfRelIso03_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfRelIso03_all);
      return output;
    }
  };

  template <>
  struct plotter <77> {
    constexpr static const char* name = "Muon/miniPFRelIso_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.miniPFRelIso_chg);
      return output;
    }
  };

  template <>
  struct plotter <78> {
    constexpr static const char* name = "Muon/tightCharge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.tightCharge);
      return output;
    }
  };

  template <>
  struct plotter <79> {
    constexpr static const char* name = "Muon/jetRelIso";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.jetRelIso);
      return output;
    }
  };

  template <>
  struct plotter <80> {
    constexpr static const char* name = "Muon/ip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.ip3d);
      return output;
    }
  };

  template <>
  struct plotter <81> {
    constexpr static const char* name = "Muon/triggerIdLoose";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.triggerIdLoose);
      return output;
    }
  };

  template <>
  struct plotter <82> {
    constexpr static const char* name = "Muon/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <83> {
    constexpr static const char* name = "Muon/highPtId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.highPtId);
      return output;
    }
  };

  template <>
  struct plotter <84> {
    constexpr static const char* name = "Muon/pfRelIso03_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfRelIso03_chg);
      return output;
    }
  };

  template <>
  struct plotter <85> {
    constexpr static const char* name = "Muon/dxyErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dxyErr);
      return output;
    }
  };

  template <>
  struct plotter <86> {
    constexpr static const char* name = "Muon/charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.charge);
      return output;
    }
  };

  template <>
  struct plotter <87> {
    constexpr static const char* name = "Muon/inTimeMuon";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.inTimeMuon);
      return output;
    }
  };

  template <>
  struct plotter <88> {
    constexpr static const char* name = "Muon/segmentComp";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.segmentComp);
      return output;
    }
  };

  template <>
  struct plotter <89> {
    constexpr static const char* name = "Muon/mvaTTH";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mvaTTH);
      return output;
    }
  };

  template <>
  struct plotter <90> {
    constexpr static const char* name = "Muon/isPFcand";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.isPFcand);
      return output;
    }
  };

  template <>
  struct plotter <91> {
    constexpr static const char* name = "Muon/mediumPromptId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mediumPromptId);
      return output;
    }
  };

  template <>
  struct plotter <92> {
    constexpr static const char* name = "Muon/softId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.softId);
      return output;
    }
  };

  template <>
  struct plotter <93> {
    constexpr static const char* name = "Muon/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <94> {
    constexpr static const char* name = "Muon/nTrackerLayers";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.nTrackerLayers);
      return output;
    }
  };

  template <>
  struct plotter <95> {
    constexpr static const char* name = "Muon/dz";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.dz);
      return output;
    }
  };

  template <>
  struct plotter <96> {
    constexpr static const char* name = "Muon/isTracker";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.isTracker);
      return output;
    }
  };

  template <>
  struct plotter <97> {
    constexpr static const char* name = "Muon/sip3d";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.sip3d);
      return output;
    }
  };

  template <>
  struct plotter <98> {
    constexpr static const char* name = "Muon/multiIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.multiIsoId);
      return output;
    }
  };

  template <>
  struct plotter <99> {
    constexpr static const char* name = "Muon/tightId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.tightId);
      return output;
    }
  };

  template <>
  struct plotter <100> {
    constexpr static const char* name = "Muon/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <101> {
    constexpr static const char* name = "Muon/pfRelIso04_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.pfRelIso04_all);
      return output;
    }
  };

  template <>
  struct plotter <102> {
    constexpr static const char* name = "Muon/tkIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.tkIsoId);
      return output;
    }
  };

  template <>
  struct plotter <103> {
    constexpr static const char* name = "Muon/miniIsoId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.miniIsoId);
      return output;
    }
  };

  template <>
  struct plotter <104> {
    constexpr static const char* name = "Muon/miniPFRelIso_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.miniPFRelIso_all);
      return output;
    }
  };

  template <>
  struct plotter <105> {
    constexpr static const char* name = "Muon/ptErr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.ptErr);
      return output;
    }
  };

  template <>
  struct plotter <106> {
    constexpr static const char* name = "Muon/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <107> {
    constexpr static const char* name = "Muon/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <108> {
    constexpr static const char* name = "Muon/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <109> {
    constexpr static const char* name = "Muon/mediumId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mediumId);
      return output;
    }
  };

  template <>
  struct plotter <110> {
    constexpr static const char* name = "Muon/mvaId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Muon)
        output.push_back(i.mvaId);
      return output;
    }
  };

  template <>
  struct plotter <111> {
    constexpr static const char* name = "Jet/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Jet.size())};
      return output;
    }
  };

  template <>
  struct plotter <112> {
    constexpr static const char* name = "Jet/btagCMVA";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagCMVA);
      return output;
    }
  };

  template <>
  struct plotter <113> {
    constexpr static const char* name = "Jet/bRegRes";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.bRegRes);
      return output;
    }
  };

  template <>
  struct plotter <114> {
    constexpr static const char* name = "Jet/btagDeepFlavB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagDeepFlavB);
      return output;
    }
  };

  template <>
  struct plotter <115> {
    constexpr static const char* name = "Jet/area";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.area);
      return output;
    }
  };

  template <>
  struct plotter <116> {
    constexpr static const char* name = "Jet/chEmEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.chEmEF);
      return output;
    }
  };

  template <>
  struct plotter <117> {
    constexpr static const char* name = "Jet/chHEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.chHEF);
      return output;
    }
  };

  template <>
  struct plotter <118> {
    constexpr static const char* name = "Jet/qgl";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.qgl);
      return output;
    }
  };

  template <>
  struct plotter <119> {
    constexpr static const char* name = "Jet/muEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.muEF);
      return output;
    }
  };

  template <>
  struct plotter <120> {
    constexpr static const char* name = "Jet/nMuons";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.nMuons);
      return output;
    }
  };

  template <>
  struct plotter <121> {
    constexpr static const char* name = "Jet/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <122> {
    constexpr static const char* name = "Jet/bRegCorr";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.bRegCorr);
      return output;
    }
  };

  template <>
  struct plotter <123> {
    constexpr static const char* name = "Jet/puId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.puId);
      return output;
    }
  };

  template <>
  struct plotter <124> {
    constexpr static const char* name = "Jet/jetId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.jetId);
      return output;
    }
  };

  template <>
  struct plotter <125> {
    constexpr static const char* name = "Jet/neEmEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.neEmEF);
      return output;
    }
  };

  template <>
  struct plotter <126> {
    constexpr static const char* name = "Jet/btagDeepC";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagDeepC);
      return output;
    }
  };

  template <>
  struct plotter <127> {
    constexpr static const char* name = "Jet/btagDeepB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagDeepB);
      return output;
    }
  };

  template <>
  struct plotter <128> {
    constexpr static const char* name = "Jet/nElectrons";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.nElectrons);
      return output;
    }
  };

  template <>
  struct plotter <129> {
    constexpr static const char* name = "Jet/neHEF";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.neHEF);
      return output;
    }
  };

  template <>
  struct plotter <130> {
    constexpr static const char* name = "Jet/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <131> {
    constexpr static const char* name = "Jet/btagCSVV2";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.btagCSVV2);
      return output;
    }
  };

  template <>
  struct plotter <132> {
    constexpr static const char* name = "Jet/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <133> {
    constexpr static const char* name = "Jet/rawFactor";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.rawFactor);
      return output;
    }
  };

  template <>
  struct plotter <134> {
    constexpr static const char* name = "Jet/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <135> {
    constexpr static const char* name = "Jet/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <136> {
    constexpr static const char* name = "Jet/nConstituents";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Jet)
        output.push_back(i.nConstituents);
      return output;
    }
  };

  template <>
  struct plotter <137> {
    constexpr static const char* name = "Photon/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Photon.size())};
      return output;
    }
  };

  template <>
  struct plotter <138> {
    constexpr static const char* name = "Photon/mvaID17_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID17_WP90);
      return output;
    }
  };

  template <>
  struct plotter <139> {
    constexpr static const char* name = "Photon/mvaID_WP90";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID_WP90);
      return output;
    }
  };

  template <>
  struct plotter <140> {
    constexpr static const char* name = "Photon/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pt);
      return output;
    }
  };

  template <>
  struct plotter <141> {
    constexpr static const char* name = "Photon/pixelSeed";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pixelSeed);
      return output;
    }
  };

  template <>
  struct plotter <142> {
    constexpr static const char* name = "Photon/cutBased17Bitmap";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.cutBased17Bitmap);
      return output;
    }
  };

  template <>
  struct plotter <143> {
    constexpr static const char* name = "Photon/pdgId";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pdgId);
      return output;
    }
  };

  template <>
  struct plotter <144> {
    constexpr static const char* name = "Photon/pfRelIso03_chg";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pfRelIso03_chg);
      return output;
    }
  };

  template <>
  struct plotter <145> {
    constexpr static const char* name = "Photon/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <146> {
    constexpr static const char* name = "Photon/cleanmask";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.cleanmask);
      return output;
    }
  };

  template <>
  struct plotter <147> {
    constexpr static const char* name = "Photon/pfRelIso03_all";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.pfRelIso03_all);
      return output;
    }
  };

  template <>
  struct plotter <148> {
    constexpr static const char* name = "Photon/charge";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.charge);
      return output;
    }
  };

  template <>
  struct plotter <149> {
    constexpr static const char* name = "Photon/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <150> {
    constexpr static const char* name = "Photon/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <151> {
    constexpr static const char* name = "Photon/isScEtaEB";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.isScEtaEB);
      return output;
    }
  };

  template <>
  struct plotter <152> {
    constexpr static const char* name = "Photon/isScEtaEE";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.isScEtaEE);
      return output;
    }
  };

  template <>
  struct plotter <153> {
    constexpr static const char* name = "Photon/electronVeto";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.electronVeto);
      return output;
    }
  };

  template <>
  struct plotter <154> {
    constexpr static const char* name = "Photon/mvaID_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID_WP80);
      return output;
    }
  };

  template <>
  struct plotter <155> {
    constexpr static const char* name = "Photon/mvaID";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID);
      return output;
    }
  };

  template <>
  struct plotter <156> {
    constexpr static const char* name = "Photon/mvaID17_WP80";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID17_WP80);
      return output;
    }
  };

  template <>
  struct plotter <157> {
    constexpr static const char* name = "Photon/mvaID17";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Photon)
        output.push_back(i.mvaID17);
      return output;
    }
  };

#define NUM_PLOTS 158

};

#endif

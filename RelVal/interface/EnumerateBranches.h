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
    constexpr static const char* name = "Electron/size";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output {float(event.Electron.size())};
      return output;
    }
  };

  template <>
  struct plotter <4> {
    constexpr static const char* name = "Electron/phi";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.phi);
      return output;
    }
  };

  template <>
  struct plotter <5> {
    constexpr static const char* name = "Electron/eta";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.eta);
      return output;
    }
  };

  template <>
  struct plotter <6> {
    constexpr static const char* name = "Electron/mass";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.mass);
      return output;
    }
  };

  template <>
  struct plotter <7> {
    constexpr static const char* name = "Electron/pt";
    std::vector<float> operator () (panda::Event& event) {
      std::vector<float> output;
      for (auto& i : event.Electron)
        output.push_back(i.pt);
      return output;
    }
  };

#define NUM_PLOTS 8

};

#endif

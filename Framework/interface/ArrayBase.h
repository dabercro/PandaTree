#ifndef PandaTree_Framework_ArrayBase_h
#define PandaTree_Framework_ArrayBase_h

#include "ContainerBase.h"

namespace panda {

  //! Base class for fixed-size containers.
  /*!
   * Panda containers can be fixed-size (Array) or dynamic-size (Collection). Fixed-size containers
   * are similar to C arrays, and are more light weight and faster to use.
   */
  class ArrayBase : public ContainerBase {
    friend class Element;

  public:
    ArrayBase() = delete;
    ArrayBase(ArrayBase const& src) = delete;
    ~ArrayBase() {}
    ArrayBase& operator=(ArrayBase const&) = delete;

    void init() final;
    UInt_t size() const final { return getData().nmax(); }

  protected:
    ArrayBase(char const* name, UInt_t unitSize, Bool_t dummy) : ContainerBase(name, unitSize) {}

  private:
    void doSetStatus_(TTree&, utils::BranchList const&) final;
    utils::BranchList doGetStatus_(TTree&) const final;
    void doSetAddress_(TTree&, utils::BranchList const&, Bool_t setStatus, Bool_t asInput) final;
    void doBook_(TTree&, utils::BranchList const&) final;

    //! To be called only from Element::setAddress
    UInt_t addInput_(TTree&);
  };

}

#endif

#include "../interface/Weight.h"

/*static*/
panda::utils::BranchList
panda::Weight::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"VAL"};
  return blist;
}

void
panda::Weight::datastore::allocate(UInt_t _nmax)
{
  Element::datastore::allocate(_nmax);

  VAL = new Float_t[nmax_];
}

void
panda::Weight::datastore::deallocate()
{
  Element::datastore::deallocate();

  delete [] VAL;
  VAL = 0;
}

void
panda::Weight::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Element::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "VAL", _branches);
}

panda::utils::BranchList
panda::Weight::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Element::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "VAL"));

  return blist;
}

void
panda::Weight::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Element::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "VAL", VAL, _branches, _setStatus);
}

void
panda::Weight::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Element::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "VAL", size, 'F', VAL, _branches);
}

void
panda::Weight::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Element::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "VAL");
}

void
panda::Weight::datastore::resizeVectors_(UInt_t _size)
{
  Element::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::Weight::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return Weight::getListOfBranches().fullNames(_name);
}

panda::Weight::Weight(char const* _name/* = ""*/) :
  Element(new WeightArray(1, _name)),
  VAL(gStore.getData(this).VAL[0])
{
}

panda::Weight::Weight(Weight const& _src) :
  Element(new WeightArray(1, _src.getName())),
  VAL(gStore.getData(this).VAL[0])
{
  operator=(_src);
}

panda::Weight::Weight(datastore& _data, UInt_t _idx) :
  Element(_data, _idx),
  VAL(_data.VAL[_idx])
{
}

panda::Weight::Weight(ArrayBase* _array) :
  Element(_array),
  VAL(gStore.getData(this).VAL[0])
{
}

panda::Weight::~Weight()
{
  destructor();
}

void
panda::Weight::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM Weight.cc.destructor */
  /* END CUSTOM */
}

panda::Weight&
panda::Weight::operator=(Weight const& _src)
{
  VAL = _src.VAL;

  /* BEGIN CUSTOM Weight.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Weight::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, _name, "VAL", "", 'F', &VAL, _branches);
}

void
panda::Weight::doInit_()
{
  VAL = 0.;

  /* BEGIN CUSTOM Weight.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::Weight::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Weight.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Weight::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "VAL = " << VAL << std::endl;
}

/* BEGIN CUSTOM Weight.cc.global */
/* END CUSTOM */

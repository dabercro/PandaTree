#include "../interface/GenJet.h"

/*static*/
panda::utils::BranchList
panda::GenJet::getListOfBranches()
{
  utils::BranchList blist;
  blist += Particle::getListOfBranches();
  blist += {"partonFlavour", "hadronFlavour"};
  return blist;
}

void
panda::GenJet::datastore::allocate(UInt_t _nmax)
{
  Particle::datastore::allocate(_nmax);

  partonFlavour = new Int_t[nmax_];
  hadronFlavour = new UChar_t[nmax_];
}

void
panda::GenJet::datastore::deallocate()
{
  Particle::datastore::deallocate();

  delete [] partonFlavour;
  partonFlavour = 0;
  delete [] hadronFlavour;
  hadronFlavour = 0;
}

void
panda::GenJet::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Particle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "partonFlavour", _branches);
  utils::setStatus(_tree, _name, "hadronFlavour", _branches);
}

panda::utils::BranchList
panda::GenJet::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Particle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "partonFlavour"));
  blist.push_back(utils::getStatus(_tree, _name, "hadronFlavour"));

  return blist;
}

void
panda::GenJet::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Particle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "partonFlavour", partonFlavour, _branches, _setStatus);
  utils::setAddress(_tree, _name, "hadronFlavour", hadronFlavour, _branches, _setStatus);
}

void
panda::GenJet::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Particle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "partonFlavour", size, 'I', partonFlavour, _branches);
  utils::book(_tree, _name, "hadronFlavour", size, 'b', hadronFlavour, _branches);
}

void
panda::GenJet::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Particle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "partonFlavour");
  utils::resetAddress(_tree, _name, "hadronFlavour");
}

void
panda::GenJet::datastore::resizeVectors_(UInt_t _size)
{
  Particle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::GenJet::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return GenJet::getListOfBranches().fullNames(_name);
}

panda::GenJet::GenJet(char const* _name/* = ""*/) :
  Particle(new GenJetArray(1, _name)),
  partonFlavour(gStore.getData(this).partonFlavour[0]),
  hadronFlavour(gStore.getData(this).hadronFlavour[0])
{
}

panda::GenJet::GenJet(GenJet const& _src) :
  Particle(new GenJetArray(1, _src.getName())),
  partonFlavour(gStore.getData(this).partonFlavour[0]),
  hadronFlavour(gStore.getData(this).hadronFlavour[0])
{
  operator=(_src);
}

panda::GenJet::GenJet(datastore& _data, UInt_t _idx) :
  Particle(_data, _idx),
  partonFlavour(_data.partonFlavour[_idx]),
  hadronFlavour(_data.hadronFlavour[_idx])
{
}

panda::GenJet::GenJet(ArrayBase* _array) :
  Particle(_array),
  partonFlavour(gStore.getData(this).partonFlavour[0]),
  hadronFlavour(gStore.getData(this).hadronFlavour[0])
{
}

panda::GenJet::~GenJet()
{
  destructor();
}

void
panda::GenJet::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM GenJet.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    Particle::destructor(kTRUE);
}

panda::GenJet&
panda::GenJet::operator=(GenJet const& _src)
{
  Particle::operator=(_src);

  partonFlavour = _src.partonFlavour;
  hadronFlavour = _src.hadronFlavour;

  /* BEGIN CUSTOM GenJet.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::GenJet::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  Particle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "partonFlavour", "", 'I', &partonFlavour, _branches);
  utils::book(_tree, _name, "hadronFlavour", "", 'b', &hadronFlavour, _branches);
}

void
panda::GenJet::doInit_()
{
  Particle::doInit_();

  partonFlavour = 0;
  hadronFlavour = 0;

  /* BEGIN CUSTOM GenJet.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::GenJet::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM GenJet.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::GenJet::dump(std::ostream& _out/* = std::cout*/) const
{
  Particle::dump(_out);

  _out << "partonFlavour = " << partonFlavour << std::endl;
  _out << "hadronFlavour = " << static_cast<const UInt_t>(hadronFlavour) << std::endl;
}

/* BEGIN CUSTOM GenJet.cc.global */
/* END CUSTOM */

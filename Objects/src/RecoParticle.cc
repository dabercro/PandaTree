#include "../interface/RecoParticle.h"

/*static*/
panda::utils::BranchList
panda::RecoParticle::getListOfBranches()
{
  utils::BranchList blist;
  blist += Particle::getListOfBranches();
  blist += {"cleanmask"};
  return blist;
}

void
panda::RecoParticle::datastore::allocate(UInt_t _nmax)
{
  Particle::datastore::allocate(_nmax);

  cleanmask = new UChar_t[nmax_];
}

void
panda::RecoParticle::datastore::deallocate()
{
  Particle::datastore::deallocate();

  delete [] cleanmask;
  cleanmask = 0;
}

void
panda::RecoParticle::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Particle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "cleanmask", _branches);
}

panda::utils::BranchList
panda::RecoParticle::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Particle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "cleanmask"));

  return blist;
}

void
panda::RecoParticle::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Particle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "cleanmask", cleanmask, _branches, _setStatus);
}

void
panda::RecoParticle::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Particle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "cleanmask", size, 'b', cleanmask, _branches);
}

void
panda::RecoParticle::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Particle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "cleanmask");
}

void
panda::RecoParticle::datastore::resizeVectors_(UInt_t _size)
{
  Particle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::RecoParticle::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return RecoParticle::getListOfBranches().fullNames(_name);
}

panda::RecoParticle::RecoParticle(char const* _name/* = ""*/) :
  Particle(new RecoParticleArray(1, _name)),
  cleanmask(gStore.getData(this).cleanmask[0])
{
}

panda::RecoParticle::RecoParticle(RecoParticle const& _src) :
  Particle(new RecoParticleArray(1, _src.getName())),
  cleanmask(gStore.getData(this).cleanmask[0])
{
  operator=(_src);
}

panda::RecoParticle::RecoParticle(datastore& _data, UInt_t _idx) :
  Particle(_data, _idx),
  cleanmask(_data.cleanmask[_idx])
{
}

panda::RecoParticle::RecoParticle(ArrayBase* _array) :
  Particle(_array),
  cleanmask(gStore.getData(this).cleanmask[0])
{
}

panda::RecoParticle::~RecoParticle()
{
  destructor();
}

void
panda::RecoParticle::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM RecoParticle.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    Particle::destructor(kTRUE);
}

panda::RecoParticle&
panda::RecoParticle::operator=(RecoParticle const& _src)
{
  Particle::operator=(_src);

  cleanmask = _src.cleanmask;

  /* BEGIN CUSTOM RecoParticle.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::RecoParticle::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  Particle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "cleanmask", "", 'b', &cleanmask, _branches);
}

void
panda::RecoParticle::doInit_()
{
  Particle::doInit_();

  cleanmask = 0;

  /* BEGIN CUSTOM RecoParticle.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::RecoParticle::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM RecoParticle.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::RecoParticle::dump(std::ostream& _out/* = std::cout*/) const
{
  Particle::dump(_out);

  _out << "cleanmask = " << static_cast<const UInt_t>(cleanmask) << std::endl;
}

/* BEGIN CUSTOM RecoParticle.cc.global */
/* END CUSTOM */

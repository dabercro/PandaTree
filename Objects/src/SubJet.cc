#include "../interface/SubJet.h"

/*static*/
panda::utils::BranchList
panda::SubJet::getListOfBranches()
{
  utils::BranchList blist;
  blist += Particle::getListOfBranches();
  blist += {"btagCMVA", "btagCSVV2", "btagDeepB", "n2b1", "n3b1", "rawFactor", "tau1", "tau2", "tau3", "tau4"};
  return blist;
}

void
panda::SubJet::datastore::allocate(UInt_t _nmax)
{
  Particle::datastore::allocate(_nmax);

  btagCMVA = new Float_t[nmax_];
  btagCSVV2 = new Float_t[nmax_];
  btagDeepB = new Float_t[nmax_];
  n2b1 = new Float_t[nmax_];
  n3b1 = new Float_t[nmax_];
  rawFactor = new Float_t[nmax_];
  tau1 = new Float_t[nmax_];
  tau2 = new Float_t[nmax_];
  tau3 = new Float_t[nmax_];
  tau4 = new Float_t[nmax_];
}

void
panda::SubJet::datastore::deallocate()
{
  Particle::datastore::deallocate();

  delete [] btagCMVA;
  btagCMVA = 0;
  delete [] btagCSVV2;
  btagCSVV2 = 0;
  delete [] btagDeepB;
  btagDeepB = 0;
  delete [] n2b1;
  n2b1 = 0;
  delete [] n3b1;
  n3b1 = 0;
  delete [] rawFactor;
  rawFactor = 0;
  delete [] tau1;
  tau1 = 0;
  delete [] tau2;
  tau2 = 0;
  delete [] tau3;
  tau3 = 0;
  delete [] tau4;
  tau4 = 0;
}

void
panda::SubJet::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Particle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "btagCMVA", _branches);
  utils::setStatus(_tree, _name, "btagCSVV2", _branches);
  utils::setStatus(_tree, _name, "btagDeepB", _branches);
  utils::setStatus(_tree, _name, "n2b1", _branches);
  utils::setStatus(_tree, _name, "n3b1", _branches);
  utils::setStatus(_tree, _name, "rawFactor", _branches);
  utils::setStatus(_tree, _name, "tau1", _branches);
  utils::setStatus(_tree, _name, "tau2", _branches);
  utils::setStatus(_tree, _name, "tau3", _branches);
  utils::setStatus(_tree, _name, "tau4", _branches);
}

panda::utils::BranchList
panda::SubJet::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Particle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "btagCMVA"));
  blist.push_back(utils::getStatus(_tree, _name, "btagCSVV2"));
  blist.push_back(utils::getStatus(_tree, _name, "btagDeepB"));
  blist.push_back(utils::getStatus(_tree, _name, "n2b1"));
  blist.push_back(utils::getStatus(_tree, _name, "n3b1"));
  blist.push_back(utils::getStatus(_tree, _name, "rawFactor"));
  blist.push_back(utils::getStatus(_tree, _name, "tau1"));
  blist.push_back(utils::getStatus(_tree, _name, "tau2"));
  blist.push_back(utils::getStatus(_tree, _name, "tau3"));
  blist.push_back(utils::getStatus(_tree, _name, "tau4"));

  return blist;
}

void
panda::SubJet::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Particle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "btagCMVA", btagCMVA, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagCSVV2", btagCSVV2, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagDeepB", btagDeepB, _branches, _setStatus);
  utils::setAddress(_tree, _name, "n2b1", n2b1, _branches, _setStatus);
  utils::setAddress(_tree, _name, "n3b1", n3b1, _branches, _setStatus);
  utils::setAddress(_tree, _name, "rawFactor", rawFactor, _branches, _setStatus);
  utils::setAddress(_tree, _name, "tau1", tau1, _branches, _setStatus);
  utils::setAddress(_tree, _name, "tau2", tau2, _branches, _setStatus);
  utils::setAddress(_tree, _name, "tau3", tau3, _branches, _setStatus);
  utils::setAddress(_tree, _name, "tau4", tau4, _branches, _setStatus);
}

void
panda::SubJet::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Particle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "btagCMVA", size, 'F', btagCMVA, _branches);
  utils::book(_tree, _name, "btagCSVV2", size, 'F', btagCSVV2, _branches);
  utils::book(_tree, _name, "btagDeepB", size, 'F', btagDeepB, _branches);
  utils::book(_tree, _name, "n2b1", size, 'F', n2b1, _branches);
  utils::book(_tree, _name, "n3b1", size, 'F', n3b1, _branches);
  utils::book(_tree, _name, "rawFactor", size, 'F', rawFactor, _branches);
  utils::book(_tree, _name, "tau1", size, 'F', tau1, _branches);
  utils::book(_tree, _name, "tau2", size, 'F', tau2, _branches);
  utils::book(_tree, _name, "tau3", size, 'F', tau3, _branches);
  utils::book(_tree, _name, "tau4", size, 'F', tau4, _branches);
}

void
panda::SubJet::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Particle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "btagCMVA");
  utils::resetAddress(_tree, _name, "btagCSVV2");
  utils::resetAddress(_tree, _name, "btagDeepB");
  utils::resetAddress(_tree, _name, "n2b1");
  utils::resetAddress(_tree, _name, "n3b1");
  utils::resetAddress(_tree, _name, "rawFactor");
  utils::resetAddress(_tree, _name, "tau1");
  utils::resetAddress(_tree, _name, "tau2");
  utils::resetAddress(_tree, _name, "tau3");
  utils::resetAddress(_tree, _name, "tau4");
}

void
panda::SubJet::datastore::resizeVectors_(UInt_t _size)
{
  Particle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::SubJet::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return SubJet::getListOfBranches().fullNames(_name);
}

panda::SubJet::SubJet(char const* _name/* = ""*/) :
  Particle(new SubJetArray(1, _name)),
  btagCMVA(gStore.getData(this).btagCMVA[0]),
  btagCSVV2(gStore.getData(this).btagCSVV2[0]),
  btagDeepB(gStore.getData(this).btagDeepB[0]),
  n2b1(gStore.getData(this).n2b1[0]),
  n3b1(gStore.getData(this).n3b1[0]),
  rawFactor(gStore.getData(this).rawFactor[0]),
  tau1(gStore.getData(this).tau1[0]),
  tau2(gStore.getData(this).tau2[0]),
  tau3(gStore.getData(this).tau3[0]),
  tau4(gStore.getData(this).tau4[0])
{
}

panda::SubJet::SubJet(SubJet const& _src) :
  Particle(new SubJetArray(1, _src.getName())),
  btagCMVA(gStore.getData(this).btagCMVA[0]),
  btagCSVV2(gStore.getData(this).btagCSVV2[0]),
  btagDeepB(gStore.getData(this).btagDeepB[0]),
  n2b1(gStore.getData(this).n2b1[0]),
  n3b1(gStore.getData(this).n3b1[0]),
  rawFactor(gStore.getData(this).rawFactor[0]),
  tau1(gStore.getData(this).tau1[0]),
  tau2(gStore.getData(this).tau2[0]),
  tau3(gStore.getData(this).tau3[0]),
  tau4(gStore.getData(this).tau4[0])
{
  operator=(_src);
}

panda::SubJet::SubJet(datastore& _data, UInt_t _idx) :
  Particle(_data, _idx),
  btagCMVA(_data.btagCMVA[_idx]),
  btagCSVV2(_data.btagCSVV2[_idx]),
  btagDeepB(_data.btagDeepB[_idx]),
  n2b1(_data.n2b1[_idx]),
  n3b1(_data.n3b1[_idx]),
  rawFactor(_data.rawFactor[_idx]),
  tau1(_data.tau1[_idx]),
  tau2(_data.tau2[_idx]),
  tau3(_data.tau3[_idx]),
  tau4(_data.tau4[_idx])
{
}

panda::SubJet::SubJet(ArrayBase* _array) :
  Particle(_array),
  btagCMVA(gStore.getData(this).btagCMVA[0]),
  btagCSVV2(gStore.getData(this).btagCSVV2[0]),
  btagDeepB(gStore.getData(this).btagDeepB[0]),
  n2b1(gStore.getData(this).n2b1[0]),
  n3b1(gStore.getData(this).n3b1[0]),
  rawFactor(gStore.getData(this).rawFactor[0]),
  tau1(gStore.getData(this).tau1[0]),
  tau2(gStore.getData(this).tau2[0]),
  tau3(gStore.getData(this).tau3[0]),
  tau4(gStore.getData(this).tau4[0])
{
}

panda::SubJet::~SubJet()
{
  destructor();
}

void
panda::SubJet::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM SubJet.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    Particle::destructor(kTRUE);
}

panda::SubJet&
panda::SubJet::operator=(SubJet const& _src)
{
  Particle::operator=(_src);

  btagCMVA = _src.btagCMVA;
  btagCSVV2 = _src.btagCSVV2;
  btagDeepB = _src.btagDeepB;
  n2b1 = _src.n2b1;
  n3b1 = _src.n3b1;
  rawFactor = _src.rawFactor;
  tau1 = _src.tau1;
  tau2 = _src.tau2;
  tau3 = _src.tau3;
  tau4 = _src.tau4;

  /* BEGIN CUSTOM SubJet.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::SubJet::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  Particle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "btagCMVA", "", 'F', &btagCMVA, _branches);
  utils::book(_tree, _name, "btagCSVV2", "", 'F', &btagCSVV2, _branches);
  utils::book(_tree, _name, "btagDeepB", "", 'F', &btagDeepB, _branches);
  utils::book(_tree, _name, "n2b1", "", 'F', &n2b1, _branches);
  utils::book(_tree, _name, "n3b1", "", 'F', &n3b1, _branches);
  utils::book(_tree, _name, "rawFactor", "", 'F', &rawFactor, _branches);
  utils::book(_tree, _name, "tau1", "", 'F', &tau1, _branches);
  utils::book(_tree, _name, "tau2", "", 'F', &tau2, _branches);
  utils::book(_tree, _name, "tau3", "", 'F', &tau3, _branches);
  utils::book(_tree, _name, "tau4", "", 'F', &tau4, _branches);
}

void
panda::SubJet::doInit_()
{
  Particle::doInit_();

  btagCMVA = 0.;
  btagCSVV2 = 0.;
  btagDeepB = 0.;
  n2b1 = 0.;
  n3b1 = 0.;
  rawFactor = 0.;
  tau1 = 0.;
  tau2 = 0.;
  tau3 = 0.;
  tau4 = 0.;

  /* BEGIN CUSTOM SubJet.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::SubJet::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM SubJet.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::SubJet::dump(std::ostream& _out/* = std::cout*/) const
{
  Particle::dump(_out);

  _out << "btagCMVA = " << btagCMVA << std::endl;
  _out << "btagCSVV2 = " << btagCSVV2 << std::endl;
  _out << "btagDeepB = " << btagDeepB << std::endl;
  _out << "n2b1 = " << n2b1 << std::endl;
  _out << "n3b1 = " << n3b1 << std::endl;
  _out << "rawFactor = " << rawFactor << std::endl;
  _out << "tau1 = " << tau1 << std::endl;
  _out << "tau2 = " << tau2 << std::endl;
  _out << "tau3 = " << tau3 << std::endl;
  _out << "tau4 = " << tau4 << std::endl;
}

/* BEGIN CUSTOM SubJet.cc.global */
/* END CUSTOM */

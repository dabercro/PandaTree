#include "../interface/SecondaryVertex.h"

/*static*/
panda::utils::BranchList
panda::SecondaryVertex::getListOfBranches()
{
  utils::BranchList blist;
  blist += Particle::getListOfBranches();
  blist += {"dlen", "dlenSig", "pAngle", "chi2", "ndof", "x", "y", "z"};
  return blist;
}

void
panda::SecondaryVertex::datastore::allocate(UInt_t _nmax)
{
  Particle::datastore::allocate(_nmax);

  dlen = new Float_t[nmax_];
  dlenSig = new Float_t[nmax_];
  pAngle = new Float_t[nmax_];
  chi2 = new Float_t[nmax_];
  ndof = new Float_t[nmax_];
  x = new Float_t[nmax_];
  y = new Float_t[nmax_];
  z = new Float_t[nmax_];
}

void
panda::SecondaryVertex::datastore::deallocate()
{
  Particle::datastore::deallocate();

  delete [] dlen;
  dlen = 0;
  delete [] dlenSig;
  dlenSig = 0;
  delete [] pAngle;
  pAngle = 0;
  delete [] chi2;
  chi2 = 0;
  delete [] ndof;
  ndof = 0;
  delete [] x;
  x = 0;
  delete [] y;
  y = 0;
  delete [] z;
  z = 0;
}

void
panda::SecondaryVertex::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  Particle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "dlen", _branches);
  utils::setStatus(_tree, _name, "dlenSig", _branches);
  utils::setStatus(_tree, _name, "pAngle", _branches);
  utils::setStatus(_tree, _name, "chi2", _branches);
  utils::setStatus(_tree, _name, "ndof", _branches);
  utils::setStatus(_tree, _name, "x", _branches);
  utils::setStatus(_tree, _name, "y", _branches);
  utils::setStatus(_tree, _name, "z", _branches);
}

panda::utils::BranchList
panda::SecondaryVertex::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(Particle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "dlen"));
  blist.push_back(utils::getStatus(_tree, _name, "dlenSig"));
  blist.push_back(utils::getStatus(_tree, _name, "pAngle"));
  blist.push_back(utils::getStatus(_tree, _name, "chi2"));
  blist.push_back(utils::getStatus(_tree, _name, "ndof"));
  blist.push_back(utils::getStatus(_tree, _name, "x"));
  blist.push_back(utils::getStatus(_tree, _name, "y"));
  blist.push_back(utils::getStatus(_tree, _name, "z"));

  return blist;
}

void
panda::SecondaryVertex::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  Particle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "dlen", dlen, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dlenSig", dlenSig, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pAngle", pAngle, _branches, _setStatus);
  utils::setAddress(_tree, _name, "chi2", chi2, _branches, _setStatus);
  utils::setAddress(_tree, _name, "ndof", ndof, _branches, _setStatus);
  utils::setAddress(_tree, _name, "x", x, _branches, _setStatus);
  utils::setAddress(_tree, _name, "y", y, _branches, _setStatus);
  utils::setAddress(_tree, _name, "z", z, _branches, _setStatus);
}

void
panda::SecondaryVertex::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  Particle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "dlen", size, 'F', dlen, _branches);
  utils::book(_tree, _name, "dlenSig", size, 'F', dlenSig, _branches);
  utils::book(_tree, _name, "pAngle", size, 'F', pAngle, _branches);
  utils::book(_tree, _name, "chi2", size, 'F', chi2, _branches);
  utils::book(_tree, _name, "ndof", size, 'F', ndof, _branches);
  utils::book(_tree, _name, "x", size, 'F', x, _branches);
  utils::book(_tree, _name, "y", size, 'F', y, _branches);
  utils::book(_tree, _name, "z", size, 'F', z, _branches);
}

void
panda::SecondaryVertex::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  Particle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "dlen");
  utils::resetAddress(_tree, _name, "dlenSig");
  utils::resetAddress(_tree, _name, "pAngle");
  utils::resetAddress(_tree, _name, "chi2");
  utils::resetAddress(_tree, _name, "ndof");
  utils::resetAddress(_tree, _name, "x");
  utils::resetAddress(_tree, _name, "y");
  utils::resetAddress(_tree, _name, "z");
}

void
panda::SecondaryVertex::datastore::resizeVectors_(UInt_t _size)
{
  Particle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::SecondaryVertex::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return SecondaryVertex::getListOfBranches().fullNames(_name);
}

panda::SecondaryVertex::SecondaryVertex(char const* _name/* = ""*/) :
  Particle(new SecondaryVertexArray(1, _name)),
  dlen(gStore.getData(this).dlen[0]),
  dlenSig(gStore.getData(this).dlenSig[0]),
  pAngle(gStore.getData(this).pAngle[0]),
  chi2(gStore.getData(this).chi2[0]),
  ndof(gStore.getData(this).ndof[0]),
  x(gStore.getData(this).x[0]),
  y(gStore.getData(this).y[0]),
  z(gStore.getData(this).z[0])
{
}

panda::SecondaryVertex::SecondaryVertex(SecondaryVertex const& _src) :
  Particle(new SecondaryVertexArray(1, _src.getName())),
  dlen(gStore.getData(this).dlen[0]),
  dlenSig(gStore.getData(this).dlenSig[0]),
  pAngle(gStore.getData(this).pAngle[0]),
  chi2(gStore.getData(this).chi2[0]),
  ndof(gStore.getData(this).ndof[0]),
  x(gStore.getData(this).x[0]),
  y(gStore.getData(this).y[0]),
  z(gStore.getData(this).z[0])
{
  operator=(_src);
}

panda::SecondaryVertex::SecondaryVertex(datastore& _data, UInt_t _idx) :
  Particle(_data, _idx),
  dlen(_data.dlen[_idx]),
  dlenSig(_data.dlenSig[_idx]),
  pAngle(_data.pAngle[_idx]),
  chi2(_data.chi2[_idx]),
  ndof(_data.ndof[_idx]),
  x(_data.x[_idx]),
  y(_data.y[_idx]),
  z(_data.z[_idx])
{
}

panda::SecondaryVertex::SecondaryVertex(ArrayBase* _array) :
  Particle(_array),
  dlen(gStore.getData(this).dlen[0]),
  dlenSig(gStore.getData(this).dlenSig[0]),
  pAngle(gStore.getData(this).pAngle[0]),
  chi2(gStore.getData(this).chi2[0]),
  ndof(gStore.getData(this).ndof[0]),
  x(gStore.getData(this).x[0]),
  y(gStore.getData(this).y[0]),
  z(gStore.getData(this).z[0])
{
}

panda::SecondaryVertex::~SecondaryVertex()
{
  destructor();
}

void
panda::SecondaryVertex::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM SecondaryVertex.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    Particle::destructor(kTRUE);
}

panda::SecondaryVertex&
panda::SecondaryVertex::operator=(SecondaryVertex const& _src)
{
  Particle::operator=(_src);

  dlen = _src.dlen;
  dlenSig = _src.dlenSig;
  pAngle = _src.pAngle;
  chi2 = _src.chi2;
  ndof = _src.ndof;
  x = _src.x;
  y = _src.y;
  z = _src.z;

  /* BEGIN CUSTOM SecondaryVertex.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::SecondaryVertex::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  Particle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "dlen", "", 'F', &dlen, _branches);
  utils::book(_tree, _name, "dlenSig", "", 'F', &dlenSig, _branches);
  utils::book(_tree, _name, "pAngle", "", 'F', &pAngle, _branches);
  utils::book(_tree, _name, "chi2", "", 'F', &chi2, _branches);
  utils::book(_tree, _name, "ndof", "", 'F', &ndof, _branches);
  utils::book(_tree, _name, "x", "", 'F', &x, _branches);
  utils::book(_tree, _name, "y", "", 'F', &y, _branches);
  utils::book(_tree, _name, "z", "", 'F', &z, _branches);
}

void
panda::SecondaryVertex::doInit_()
{
  Particle::doInit_();

  dlen = 0.;
  dlenSig = 0.;
  pAngle = 0.;
  chi2 = 0.;
  ndof = 0.;
  x = 0.;
  y = 0.;
  z = 0.;

  /* BEGIN CUSTOM SecondaryVertex.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::SecondaryVertex::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM SecondaryVertex.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::SecondaryVertex::dump(std::ostream& _out/* = std::cout*/) const
{
  Particle::dump(_out);

  _out << "dlen = " << dlen << std::endl;
  _out << "dlenSig = " << dlenSig << std::endl;
  _out << "pAngle = " << pAngle << std::endl;
  _out << "chi2 = " << chi2 << std::endl;
  _out << "ndof = " << ndof << std::endl;
  _out << "x = " << x << std::endl;
  _out << "y = " << y << std::endl;
  _out << "z = " << z << std::endl;
}

/* BEGIN CUSTOM SecondaryVertex.cc.global */
/* END CUSTOM */

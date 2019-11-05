#include "../interface/PFParticle.h"

/*static*/
panda::utils::BranchList
panda::PFParticle::getListOfBranches()
{
  utils::BranchList blist;
  blist += RecoParticle::getListOfBranches();
  blist += {"charge", "pdgId", "jetIdx", "genPartIdx"};
  return blist;
}

void
panda::PFParticle::datastore::allocate(UInt_t _nmax)
{
  RecoParticle::datastore::allocate(_nmax);

  charge = new Int_t[nmax_];
  pdgId = new Int_t[nmax_];
  jetIdx = new Int_t[nmax_];
  genPartIdx = new Int_t[nmax_];
}

void
panda::PFParticle::datastore::deallocate()
{
  RecoParticle::datastore::deallocate();

  delete [] charge;
  charge = 0;
  delete [] pdgId;
  pdgId = 0;
  delete [] jetIdx;
  jetIdx = 0;
  delete [] genPartIdx;
  genPartIdx = 0;
}

void
panda::PFParticle::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  RecoParticle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "charge", _branches);
  utils::setStatus(_tree, _name, "pdgId", _branches);
  utils::setStatus(_tree, _name, "jetIdx", _branches);
  utils::setStatus(_tree, _name, "genPartIdx", _branches);
}

panda::utils::BranchList
panda::PFParticle::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(RecoParticle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "charge"));
  blist.push_back(utils::getStatus(_tree, _name, "pdgId"));
  blist.push_back(utils::getStatus(_tree, _name, "jetIdx"));
  blist.push_back(utils::getStatus(_tree, _name, "genPartIdx"));

  return blist;
}

void
panda::PFParticle::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  RecoParticle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "charge", charge, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pdgId", pdgId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "jetIdx", jetIdx, _branches, _setStatus);
  utils::setAddress(_tree, _name, "genPartIdx", genPartIdx, _branches, _setStatus);
}

void
panda::PFParticle::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  RecoParticle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "charge", size, 'I', charge, _branches);
  utils::book(_tree, _name, "pdgId", size, 'I', pdgId, _branches);
  utils::book(_tree, _name, "jetIdx", size, 'I', jetIdx, _branches);
  utils::book(_tree, _name, "genPartIdx", size, 'I', genPartIdx, _branches);
}

void
panda::PFParticle::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  RecoParticle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "charge");
  utils::resetAddress(_tree, _name, "pdgId");
  utils::resetAddress(_tree, _name, "jetIdx");
  utils::resetAddress(_tree, _name, "genPartIdx");
}

void
panda::PFParticle::datastore::resizeVectors_(UInt_t _size)
{
  RecoParticle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::PFParticle::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return PFParticle::getListOfBranches().fullNames(_name);
}

panda::PFParticle::PFParticle(char const* _name/* = ""*/) :
  RecoParticle(new PFParticleArray(1, _name)),
  charge(gStore.getData(this).charge[0]),
  pdgId(gStore.getData(this).pdgId[0]),
  jetIdx(gStore.getData(this).jetIdx[0]),
  genPartIdx(gStore.getData(this).genPartIdx[0])
{
}

panda::PFParticle::PFParticle(PFParticle const& _src) :
  RecoParticle(new PFParticleArray(1, _src.getName())),
  charge(gStore.getData(this).charge[0]),
  pdgId(gStore.getData(this).pdgId[0]),
  jetIdx(gStore.getData(this).jetIdx[0]),
  genPartIdx(gStore.getData(this).genPartIdx[0])
{
  operator=(_src);
}

panda::PFParticle::PFParticle(datastore& _data, UInt_t _idx) :
  RecoParticle(_data, _idx),
  charge(_data.charge[_idx]),
  pdgId(_data.pdgId[_idx]),
  jetIdx(_data.jetIdx[_idx]),
  genPartIdx(_data.genPartIdx[_idx])
{
}

panda::PFParticle::PFParticle(ArrayBase* _array) :
  RecoParticle(_array),
  charge(gStore.getData(this).charge[0]),
  pdgId(gStore.getData(this).pdgId[0]),
  jetIdx(gStore.getData(this).jetIdx[0]),
  genPartIdx(gStore.getData(this).genPartIdx[0])
{
}

panda::PFParticle::~PFParticle()
{
  destructor();
}

void
panda::PFParticle::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM PFParticle.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    RecoParticle::destructor(kTRUE);
}

panda::PFParticle&
panda::PFParticle::operator=(PFParticle const& _src)
{
  RecoParticle::operator=(_src);

  charge = _src.charge;
  pdgId = _src.pdgId;
  jetIdx = _src.jetIdx;
  genPartIdx = _src.genPartIdx;

  /* BEGIN CUSTOM PFParticle.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::PFParticle::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  RecoParticle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "charge", "", 'I', &charge, _branches);
  utils::book(_tree, _name, "pdgId", "", 'I', &pdgId, _branches);
  utils::book(_tree, _name, "jetIdx", "", 'I', &jetIdx, _branches);
  utils::book(_tree, _name, "genPartIdx", "", 'I', &genPartIdx, _branches);
}

void
panda::PFParticle::doInit_()
{
  RecoParticle::doInit_();

  charge = 0;
  pdgId = 0;
  jetIdx = 0;
  genPartIdx = 0;

  /* BEGIN CUSTOM PFParticle.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::PFParticle::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM PFParticle.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::PFParticle::dump(std::ostream& _out/* = std::cout*/) const
{
  RecoParticle::dump(_out);

  _out << "charge = " << charge << std::endl;
  _out << "pdgId = " << pdgId << std::endl;
  _out << "jetIdx = " << jetIdx << std::endl;
  _out << "genPartIdx = " << genPartIdx << std::endl;
}

/* BEGIN CUSTOM PFParticle.cc.global */
/* END CUSTOM */

#include "../interface/Lepton.h"

/*static*/
panda::utils::BranchList
panda::Lepton::getListOfBranches()
{
  utils::BranchList blist;
  blist += PFParticle::getListOfBranches();
  blist += {"ip3d", "sip3d", "dxy", "dxyErr", "dz", "dzErr", "jetRelIso", "miniPFRelIso_all", "miniPFRelIso_chg", "pfRelIso03_all", "pfRelIso03_chg", "mvaTTH", "tightCharge", "isPFcand"};
  return blist;
}

void
panda::Lepton::datastore::allocate(UInt_t _nmax)
{
  PFParticle::datastore::allocate(_nmax);

  ip3d = new Float_t[nmax_];
  sip3d = new Float_t[nmax_];
  dxy = new Float_t[nmax_];
  dxyErr = new Float_t[nmax_];
  dz = new Float_t[nmax_];
  dzErr = new Float_t[nmax_];
  jetRelIso = new Float_t[nmax_];
  miniPFRelIso_all = new Float_t[nmax_];
  miniPFRelIso_chg = new Float_t[nmax_];
  pfRelIso03_all = new Float_t[nmax_];
  pfRelIso03_chg = new Float_t[nmax_];
  mvaTTH = new Float_t[nmax_];
  tightCharge = new Int_t[nmax_];
  isPFcand = new Bool_t[nmax_];
}

void
panda::Lepton::datastore::deallocate()
{
  PFParticle::datastore::deallocate();

  delete [] ip3d;
  ip3d = 0;
  delete [] sip3d;
  sip3d = 0;
  delete [] dxy;
  dxy = 0;
  delete [] dxyErr;
  dxyErr = 0;
  delete [] dz;
  dz = 0;
  delete [] dzErr;
  dzErr = 0;
  delete [] jetRelIso;
  jetRelIso = 0;
  delete [] miniPFRelIso_all;
  miniPFRelIso_all = 0;
  delete [] miniPFRelIso_chg;
  miniPFRelIso_chg = 0;
  delete [] pfRelIso03_all;
  pfRelIso03_all = 0;
  delete [] pfRelIso03_chg;
  pfRelIso03_chg = 0;
  delete [] mvaTTH;
  mvaTTH = 0;
  delete [] tightCharge;
  tightCharge = 0;
  delete [] isPFcand;
  isPFcand = 0;
}

void
panda::Lepton::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  PFParticle::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "ip3d", _branches);
  utils::setStatus(_tree, _name, "sip3d", _branches);
  utils::setStatus(_tree, _name, "dxy", _branches);
  utils::setStatus(_tree, _name, "dxyErr", _branches);
  utils::setStatus(_tree, _name, "dz", _branches);
  utils::setStatus(_tree, _name, "dzErr", _branches);
  utils::setStatus(_tree, _name, "jetRelIso", _branches);
  utils::setStatus(_tree, _name, "miniPFRelIso_all", _branches);
  utils::setStatus(_tree, _name, "miniPFRelIso_chg", _branches);
  utils::setStatus(_tree, _name, "pfRelIso03_all", _branches);
  utils::setStatus(_tree, _name, "pfRelIso03_chg", _branches);
  utils::setStatus(_tree, _name, "mvaTTH", _branches);
  utils::setStatus(_tree, _name, "tightCharge", _branches);
  utils::setStatus(_tree, _name, "isPFcand", _branches);
}

panda::utils::BranchList
panda::Lepton::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(PFParticle::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "ip3d"));
  blist.push_back(utils::getStatus(_tree, _name, "sip3d"));
  blist.push_back(utils::getStatus(_tree, _name, "dxy"));
  blist.push_back(utils::getStatus(_tree, _name, "dxyErr"));
  blist.push_back(utils::getStatus(_tree, _name, "dz"));
  blist.push_back(utils::getStatus(_tree, _name, "dzErr"));
  blist.push_back(utils::getStatus(_tree, _name, "jetRelIso"));
  blist.push_back(utils::getStatus(_tree, _name, "miniPFRelIso_all"));
  blist.push_back(utils::getStatus(_tree, _name, "miniPFRelIso_chg"));
  blist.push_back(utils::getStatus(_tree, _name, "pfRelIso03_all"));
  blist.push_back(utils::getStatus(_tree, _name, "pfRelIso03_chg"));
  blist.push_back(utils::getStatus(_tree, _name, "mvaTTH"));
  blist.push_back(utils::getStatus(_tree, _name, "tightCharge"));
  blist.push_back(utils::getStatus(_tree, _name, "isPFcand"));

  return blist;
}

void
panda::Lepton::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  PFParticle::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "ip3d", ip3d, _branches, _setStatus);
  utils::setAddress(_tree, _name, "sip3d", sip3d, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dxy", dxy, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dxyErr", dxyErr, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dz", dz, _branches, _setStatus);
  utils::setAddress(_tree, _name, "dzErr", dzErr, _branches, _setStatus);
  utils::setAddress(_tree, _name, "jetRelIso", jetRelIso, _branches, _setStatus);
  utils::setAddress(_tree, _name, "miniPFRelIso_all", miniPFRelIso_all, _branches, _setStatus);
  utils::setAddress(_tree, _name, "miniPFRelIso_chg", miniPFRelIso_chg, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pfRelIso03_all", pfRelIso03_all, _branches, _setStatus);
  utils::setAddress(_tree, _name, "pfRelIso03_chg", pfRelIso03_chg, _branches, _setStatus);
  utils::setAddress(_tree, _name, "mvaTTH", mvaTTH, _branches, _setStatus);
  utils::setAddress(_tree, _name, "tightCharge", tightCharge, _branches, _setStatus);
  utils::setAddress(_tree, _name, "isPFcand", isPFcand, _branches, _setStatus);
}

void
panda::Lepton::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  PFParticle::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "ip3d", size, 'F', ip3d, _branches);
  utils::book(_tree, _name, "sip3d", size, 'F', sip3d, _branches);
  utils::book(_tree, _name, "dxy", size, 'F', dxy, _branches);
  utils::book(_tree, _name, "dxyErr", size, 'F', dxyErr, _branches);
  utils::book(_tree, _name, "dz", size, 'F', dz, _branches);
  utils::book(_tree, _name, "dzErr", size, 'F', dzErr, _branches);
  utils::book(_tree, _name, "jetRelIso", size, 'F', jetRelIso, _branches);
  utils::book(_tree, _name, "miniPFRelIso_all", size, 'F', miniPFRelIso_all, _branches);
  utils::book(_tree, _name, "miniPFRelIso_chg", size, 'F', miniPFRelIso_chg, _branches);
  utils::book(_tree, _name, "pfRelIso03_all", size, 'F', pfRelIso03_all, _branches);
  utils::book(_tree, _name, "pfRelIso03_chg", size, 'F', pfRelIso03_chg, _branches);
  utils::book(_tree, _name, "mvaTTH", size, 'F', mvaTTH, _branches);
  utils::book(_tree, _name, "tightCharge", size, 'I', tightCharge, _branches);
  utils::book(_tree, _name, "isPFcand", size, 'O', isPFcand, _branches);
}

void
panda::Lepton::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  PFParticle::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "ip3d");
  utils::resetAddress(_tree, _name, "sip3d");
  utils::resetAddress(_tree, _name, "dxy");
  utils::resetAddress(_tree, _name, "dxyErr");
  utils::resetAddress(_tree, _name, "dz");
  utils::resetAddress(_tree, _name, "dzErr");
  utils::resetAddress(_tree, _name, "jetRelIso");
  utils::resetAddress(_tree, _name, "miniPFRelIso_all");
  utils::resetAddress(_tree, _name, "miniPFRelIso_chg");
  utils::resetAddress(_tree, _name, "pfRelIso03_all");
  utils::resetAddress(_tree, _name, "pfRelIso03_chg");
  utils::resetAddress(_tree, _name, "mvaTTH");
  utils::resetAddress(_tree, _name, "tightCharge");
  utils::resetAddress(_tree, _name, "isPFcand");
}

void
panda::Lepton::datastore::resizeVectors_(UInt_t _size)
{
  PFParticle::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::Lepton::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return Lepton::getListOfBranches().fullNames(_name);
}

panda::Lepton::Lepton(char const* _name/* = ""*/) :
  PFParticle(new LeptonArray(1, _name)),
  ip3d(gStore.getData(this).ip3d[0]),
  sip3d(gStore.getData(this).sip3d[0]),
  dxy(gStore.getData(this).dxy[0]),
  dxyErr(gStore.getData(this).dxyErr[0]),
  dz(gStore.getData(this).dz[0]),
  dzErr(gStore.getData(this).dzErr[0]),
  jetRelIso(gStore.getData(this).jetRelIso[0]),
  miniPFRelIso_all(gStore.getData(this).miniPFRelIso_all[0]),
  miniPFRelIso_chg(gStore.getData(this).miniPFRelIso_chg[0]),
  pfRelIso03_all(gStore.getData(this).pfRelIso03_all[0]),
  pfRelIso03_chg(gStore.getData(this).pfRelIso03_chg[0]),
  mvaTTH(gStore.getData(this).mvaTTH[0]),
  tightCharge(gStore.getData(this).tightCharge[0]),
  isPFcand(gStore.getData(this).isPFcand[0])
{
}

panda::Lepton::Lepton(Lepton const& _src) :
  PFParticle(new LeptonArray(1, _src.getName())),
  ip3d(gStore.getData(this).ip3d[0]),
  sip3d(gStore.getData(this).sip3d[0]),
  dxy(gStore.getData(this).dxy[0]),
  dxyErr(gStore.getData(this).dxyErr[0]),
  dz(gStore.getData(this).dz[0]),
  dzErr(gStore.getData(this).dzErr[0]),
  jetRelIso(gStore.getData(this).jetRelIso[0]),
  miniPFRelIso_all(gStore.getData(this).miniPFRelIso_all[0]),
  miniPFRelIso_chg(gStore.getData(this).miniPFRelIso_chg[0]),
  pfRelIso03_all(gStore.getData(this).pfRelIso03_all[0]),
  pfRelIso03_chg(gStore.getData(this).pfRelIso03_chg[0]),
  mvaTTH(gStore.getData(this).mvaTTH[0]),
  tightCharge(gStore.getData(this).tightCharge[0]),
  isPFcand(gStore.getData(this).isPFcand[0])
{
  operator=(_src);
}

panda::Lepton::Lepton(datastore& _data, UInt_t _idx) :
  PFParticle(_data, _idx),
  ip3d(_data.ip3d[_idx]),
  sip3d(_data.sip3d[_idx]),
  dxy(_data.dxy[_idx]),
  dxyErr(_data.dxyErr[_idx]),
  dz(_data.dz[_idx]),
  dzErr(_data.dzErr[_idx]),
  jetRelIso(_data.jetRelIso[_idx]),
  miniPFRelIso_all(_data.miniPFRelIso_all[_idx]),
  miniPFRelIso_chg(_data.miniPFRelIso_chg[_idx]),
  pfRelIso03_all(_data.pfRelIso03_all[_idx]),
  pfRelIso03_chg(_data.pfRelIso03_chg[_idx]),
  mvaTTH(_data.mvaTTH[_idx]),
  tightCharge(_data.tightCharge[_idx]),
  isPFcand(_data.isPFcand[_idx])
{
}

panda::Lepton::Lepton(ArrayBase* _array) :
  PFParticle(_array),
  ip3d(gStore.getData(this).ip3d[0]),
  sip3d(gStore.getData(this).sip3d[0]),
  dxy(gStore.getData(this).dxy[0]),
  dxyErr(gStore.getData(this).dxyErr[0]),
  dz(gStore.getData(this).dz[0]),
  dzErr(gStore.getData(this).dzErr[0]),
  jetRelIso(gStore.getData(this).jetRelIso[0]),
  miniPFRelIso_all(gStore.getData(this).miniPFRelIso_all[0]),
  miniPFRelIso_chg(gStore.getData(this).miniPFRelIso_chg[0]),
  pfRelIso03_all(gStore.getData(this).pfRelIso03_all[0]),
  pfRelIso03_chg(gStore.getData(this).pfRelIso03_chg[0]),
  mvaTTH(gStore.getData(this).mvaTTH[0]),
  tightCharge(gStore.getData(this).tightCharge[0]),
  isPFcand(gStore.getData(this).isPFcand[0])
{
}

panda::Lepton::~Lepton()
{
  destructor();
}

void
panda::Lepton::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM Lepton.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    PFParticle::destructor(kTRUE);
}

panda::Lepton&
panda::Lepton::operator=(Lepton const& _src)
{
  PFParticle::operator=(_src);

  ip3d = _src.ip3d;
  sip3d = _src.sip3d;
  dxy = _src.dxy;
  dxyErr = _src.dxyErr;
  dz = _src.dz;
  dzErr = _src.dzErr;
  jetRelIso = _src.jetRelIso;
  miniPFRelIso_all = _src.miniPFRelIso_all;
  miniPFRelIso_chg = _src.miniPFRelIso_chg;
  pfRelIso03_all = _src.pfRelIso03_all;
  pfRelIso03_chg = _src.pfRelIso03_chg;
  mvaTTH = _src.mvaTTH;
  tightCharge = _src.tightCharge;
  isPFcand = _src.isPFcand;

  /* BEGIN CUSTOM Lepton.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Lepton::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  PFParticle::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "ip3d", "", 'F', &ip3d, _branches);
  utils::book(_tree, _name, "sip3d", "", 'F', &sip3d, _branches);
  utils::book(_tree, _name, "dxy", "", 'F', &dxy, _branches);
  utils::book(_tree, _name, "dxyErr", "", 'F', &dxyErr, _branches);
  utils::book(_tree, _name, "dz", "", 'F', &dz, _branches);
  utils::book(_tree, _name, "dzErr", "", 'F', &dzErr, _branches);
  utils::book(_tree, _name, "jetRelIso", "", 'F', &jetRelIso, _branches);
  utils::book(_tree, _name, "miniPFRelIso_all", "", 'F', &miniPFRelIso_all, _branches);
  utils::book(_tree, _name, "miniPFRelIso_chg", "", 'F', &miniPFRelIso_chg, _branches);
  utils::book(_tree, _name, "pfRelIso03_all", "", 'F', &pfRelIso03_all, _branches);
  utils::book(_tree, _name, "pfRelIso03_chg", "", 'F', &pfRelIso03_chg, _branches);
  utils::book(_tree, _name, "mvaTTH", "", 'F', &mvaTTH, _branches);
  utils::book(_tree, _name, "tightCharge", "", 'I', &tightCharge, _branches);
  utils::book(_tree, _name, "isPFcand", "", 'O', &isPFcand, _branches);
}

void
panda::Lepton::doInit_()
{
  PFParticle::doInit_();

  ip3d = 0.;
  sip3d = 0.;
  dxy = 0.;
  dxyErr = 0.;
  dz = 0.;
  dzErr = 0.;
  jetRelIso = 0.;
  miniPFRelIso_all = 0.;
  miniPFRelIso_chg = 0.;
  pfRelIso03_all = 0.;
  pfRelIso03_chg = 0.;
  mvaTTH = 0.;
  tightCharge = 0;
  isPFcand = false;

  /* BEGIN CUSTOM Lepton.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::Lepton::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Lepton.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Lepton::dump(std::ostream& _out/* = std::cout*/) const
{
  PFParticle::dump(_out);

  _out << "ip3d = " << ip3d << std::endl;
  _out << "sip3d = " << sip3d << std::endl;
  _out << "dxy = " << dxy << std::endl;
  _out << "dxyErr = " << dxyErr << std::endl;
  _out << "dz = " << dz << std::endl;
  _out << "dzErr = " << dzErr << std::endl;
  _out << "jetRelIso = " << jetRelIso << std::endl;
  _out << "miniPFRelIso_all = " << miniPFRelIso_all << std::endl;
  _out << "miniPFRelIso_chg = " << miniPFRelIso_chg << std::endl;
  _out << "pfRelIso03_all = " << pfRelIso03_all << std::endl;
  _out << "pfRelIso03_chg = " << pfRelIso03_chg << std::endl;
  _out << "mvaTTH = " << mvaTTH << std::endl;
  _out << "tightCharge = " << tightCharge << std::endl;
  _out << "isPFcand = " << isPFcand << std::endl;
}

/* BEGIN CUSTOM Lepton.cc.global */
/* END CUSTOM */

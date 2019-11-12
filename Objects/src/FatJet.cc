#include "../interface/FatJet.h"

/*static*/
panda::utils::BranchList
panda::FatJet::getListOfBranches()
{
  utils::BranchList blist;
  blist += SubJet::getListOfBranches();
  blist += {"area", "btagDDBvL", "btagDDCvB", "btagDDCvL", "btagHbb", "deepTagMD_H4qvsQCD", "deepTagMD_HbbvsQCD", "deepTagMD_TvsQCD", "deepTagMD_WvsQCD", "deepTagMD_ZHbbvsQCD", "deepTagMD_ZHccvsQCD", "deepTagMD_ZbbvsQCD", "deepTagMD_ZvsQCD", "deepTagMD_bbvsLight", "deepTagMD_ccvsLight", "deepTag_H", "deepTag_QCD", "deepTag_QCDothers", "deepTag_TvsQCD", "deepTag_WvsQCD", "deepTag_ZvsQCD", "msoftdrop", "jetId", "subJetIdx1", "subJetIdx2"};
  return blist;
}

void
panda::FatJet::datastore::allocate(UInt_t _nmax)
{
  SubJet::datastore::allocate(_nmax);

  area = new Float_t[nmax_];
  btagDDBvL = new Float_t[nmax_];
  btagDDCvB = new Float_t[nmax_];
  btagDDCvL = new Float_t[nmax_];
  btagHbb = new Float_t[nmax_];
  deepTagMD_H4qvsQCD = new Float_t[nmax_];
  deepTagMD_HbbvsQCD = new Float_t[nmax_];
  deepTagMD_TvsQCD = new Float_t[nmax_];
  deepTagMD_WvsQCD = new Float_t[nmax_];
  deepTagMD_ZHbbvsQCD = new Float_t[nmax_];
  deepTagMD_ZHccvsQCD = new Float_t[nmax_];
  deepTagMD_ZbbvsQCD = new Float_t[nmax_];
  deepTagMD_ZvsQCD = new Float_t[nmax_];
  deepTagMD_bbvsLight = new Float_t[nmax_];
  deepTagMD_ccvsLight = new Float_t[nmax_];
  deepTag_H = new Float_t[nmax_];
  deepTag_QCD = new Float_t[nmax_];
  deepTag_QCDothers = new Float_t[nmax_];
  deepTag_TvsQCD = new Float_t[nmax_];
  deepTag_WvsQCD = new Float_t[nmax_];
  deepTag_ZvsQCD = new Float_t[nmax_];
  msoftdrop = new Float_t[nmax_];
  jetId = new Int_t[nmax_];
  subJetIdx1 = new Int_t[nmax_];
  subJetIdx2 = new Int_t[nmax_];
}

void
panda::FatJet::datastore::deallocate()
{
  SubJet::datastore::deallocate();

  delete [] area;
  area = 0;
  delete [] btagDDBvL;
  btagDDBvL = 0;
  delete [] btagDDCvB;
  btagDDCvB = 0;
  delete [] btagDDCvL;
  btagDDCvL = 0;
  delete [] btagHbb;
  btagHbb = 0;
  delete [] deepTagMD_H4qvsQCD;
  deepTagMD_H4qvsQCD = 0;
  delete [] deepTagMD_HbbvsQCD;
  deepTagMD_HbbvsQCD = 0;
  delete [] deepTagMD_TvsQCD;
  deepTagMD_TvsQCD = 0;
  delete [] deepTagMD_WvsQCD;
  deepTagMD_WvsQCD = 0;
  delete [] deepTagMD_ZHbbvsQCD;
  deepTagMD_ZHbbvsQCD = 0;
  delete [] deepTagMD_ZHccvsQCD;
  deepTagMD_ZHccvsQCD = 0;
  delete [] deepTagMD_ZbbvsQCD;
  deepTagMD_ZbbvsQCD = 0;
  delete [] deepTagMD_ZvsQCD;
  deepTagMD_ZvsQCD = 0;
  delete [] deepTagMD_bbvsLight;
  deepTagMD_bbvsLight = 0;
  delete [] deepTagMD_ccvsLight;
  deepTagMD_ccvsLight = 0;
  delete [] deepTag_H;
  deepTag_H = 0;
  delete [] deepTag_QCD;
  deepTag_QCD = 0;
  delete [] deepTag_QCDothers;
  deepTag_QCDothers = 0;
  delete [] deepTag_TvsQCD;
  deepTag_TvsQCD = 0;
  delete [] deepTag_WvsQCD;
  deepTag_WvsQCD = 0;
  delete [] deepTag_ZvsQCD;
  deepTag_ZvsQCD = 0;
  delete [] msoftdrop;
  msoftdrop = 0;
  delete [] jetId;
  jetId = 0;
  delete [] subJetIdx1;
  subJetIdx1 = 0;
  delete [] subJetIdx2;
  subJetIdx2 = 0;
}

void
panda::FatJet::datastore::setStatus(TTree& _tree, TString const& _name, utils::BranchList const& _branches)
{
  SubJet::datastore::setStatus(_tree, _name, _branches);

  utils::setStatus(_tree, _name, "area", _branches);
  utils::setStatus(_tree, _name, "btagDDBvL", _branches);
  utils::setStatus(_tree, _name, "btagDDCvB", _branches);
  utils::setStatus(_tree, _name, "btagDDCvL", _branches);
  utils::setStatus(_tree, _name, "btagHbb", _branches);
  utils::setStatus(_tree, _name, "deepTagMD_H4qvsQCD", _branches);
  utils::setStatus(_tree, _name, "deepTagMD_HbbvsQCD", _branches);
  utils::setStatus(_tree, _name, "deepTagMD_TvsQCD", _branches);
  utils::setStatus(_tree, _name, "deepTagMD_WvsQCD", _branches);
  utils::setStatus(_tree, _name, "deepTagMD_ZHbbvsQCD", _branches);
  utils::setStatus(_tree, _name, "deepTagMD_ZHccvsQCD", _branches);
  utils::setStatus(_tree, _name, "deepTagMD_ZbbvsQCD", _branches);
  utils::setStatus(_tree, _name, "deepTagMD_ZvsQCD", _branches);
  utils::setStatus(_tree, _name, "deepTagMD_bbvsLight", _branches);
  utils::setStatus(_tree, _name, "deepTagMD_ccvsLight", _branches);
  utils::setStatus(_tree, _name, "deepTag_H", _branches);
  utils::setStatus(_tree, _name, "deepTag_QCD", _branches);
  utils::setStatus(_tree, _name, "deepTag_QCDothers", _branches);
  utils::setStatus(_tree, _name, "deepTag_TvsQCD", _branches);
  utils::setStatus(_tree, _name, "deepTag_WvsQCD", _branches);
  utils::setStatus(_tree, _name, "deepTag_ZvsQCD", _branches);
  utils::setStatus(_tree, _name, "msoftdrop", _branches);
  utils::setStatus(_tree, _name, "jetId", _branches);
  utils::setStatus(_tree, _name, "subJetIdx1", _branches);
  utils::setStatus(_tree, _name, "subJetIdx2", _branches);
}

panda::utils::BranchList
panda::FatJet::datastore::getStatus(TTree& _tree, TString const& _name) const
{
  utils::BranchList blist(SubJet::datastore::getStatus(_tree, _name));

  blist.push_back(utils::getStatus(_tree, _name, "area"));
  blist.push_back(utils::getStatus(_tree, _name, "btagDDBvL"));
  blist.push_back(utils::getStatus(_tree, _name, "btagDDCvB"));
  blist.push_back(utils::getStatus(_tree, _name, "btagDDCvL"));
  blist.push_back(utils::getStatus(_tree, _name, "btagHbb"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTagMD_H4qvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTagMD_HbbvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTagMD_TvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTagMD_WvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTagMD_ZHbbvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTagMD_ZHccvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTagMD_ZbbvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTagMD_ZvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTagMD_bbvsLight"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTagMD_ccvsLight"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTag_H"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTag_QCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTag_QCDothers"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTag_TvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTag_WvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "deepTag_ZvsQCD"));
  blist.push_back(utils::getStatus(_tree, _name, "msoftdrop"));
  blist.push_back(utils::getStatus(_tree, _name, "jetId"));
  blist.push_back(utils::getStatus(_tree, _name, "subJetIdx1"));
  blist.push_back(utils::getStatus(_tree, _name, "subJetIdx2"));

  return blist;
}

void
panda::FatJet::datastore::setAddress(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  SubJet::datastore::setAddress(_tree, _name, _branches, _setStatus);

  utils::setAddress(_tree, _name, "area", area, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagDDBvL", btagDDBvL, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagDDCvB", btagDDCvB, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagDDCvL", btagDDCvL, _branches, _setStatus);
  utils::setAddress(_tree, _name, "btagHbb", btagHbb, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTagMD_H4qvsQCD", deepTagMD_H4qvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTagMD_HbbvsQCD", deepTagMD_HbbvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTagMD_TvsQCD", deepTagMD_TvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTagMD_WvsQCD", deepTagMD_WvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTagMD_ZHbbvsQCD", deepTagMD_ZHbbvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTagMD_ZHccvsQCD", deepTagMD_ZHccvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTagMD_ZbbvsQCD", deepTagMD_ZbbvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTagMD_ZvsQCD", deepTagMD_ZvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTagMD_bbvsLight", deepTagMD_bbvsLight, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTagMD_ccvsLight", deepTagMD_ccvsLight, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTag_H", deepTag_H, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTag_QCD", deepTag_QCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTag_QCDothers", deepTag_QCDothers, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTag_TvsQCD", deepTag_TvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTag_WvsQCD", deepTag_WvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "deepTag_ZvsQCD", deepTag_ZvsQCD, _branches, _setStatus);
  utils::setAddress(_tree, _name, "msoftdrop", msoftdrop, _branches, _setStatus);
  utils::setAddress(_tree, _name, "jetId", jetId, _branches, _setStatus);
  utils::setAddress(_tree, _name, "subJetIdx1", subJetIdx1, _branches, _setStatus);
  utils::setAddress(_tree, _name, "subJetIdx2", subJetIdx2, _branches, _setStatus);
}

void
panda::FatJet::datastore::book(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _dynamic/* = kTRUE*/)
{
  SubJet::datastore::book(_tree, _name, _branches, _dynamic);

  TString size(_dynamic ? "[" + _name + ".size]" : TString::Format("[%d]", nmax_));

  utils::book(_tree, _name, "area", size, 'F', area, _branches);
  utils::book(_tree, _name, "btagDDBvL", size, 'F', btagDDBvL, _branches);
  utils::book(_tree, _name, "btagDDCvB", size, 'F', btagDDCvB, _branches);
  utils::book(_tree, _name, "btagDDCvL", size, 'F', btagDDCvL, _branches);
  utils::book(_tree, _name, "btagHbb", size, 'F', btagHbb, _branches);
  utils::book(_tree, _name, "deepTagMD_H4qvsQCD", size, 'F', deepTagMD_H4qvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_HbbvsQCD", size, 'F', deepTagMD_HbbvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_TvsQCD", size, 'F', deepTagMD_TvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_WvsQCD", size, 'F', deepTagMD_WvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_ZHbbvsQCD", size, 'F', deepTagMD_ZHbbvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_ZHccvsQCD", size, 'F', deepTagMD_ZHccvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_ZbbvsQCD", size, 'F', deepTagMD_ZbbvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_ZvsQCD", size, 'F', deepTagMD_ZvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_bbvsLight", size, 'F', deepTagMD_bbvsLight, _branches);
  utils::book(_tree, _name, "deepTagMD_ccvsLight", size, 'F', deepTagMD_ccvsLight, _branches);
  utils::book(_tree, _name, "deepTag_H", size, 'F', deepTag_H, _branches);
  utils::book(_tree, _name, "deepTag_QCD", size, 'F', deepTag_QCD, _branches);
  utils::book(_tree, _name, "deepTag_QCDothers", size, 'F', deepTag_QCDothers, _branches);
  utils::book(_tree, _name, "deepTag_TvsQCD", size, 'F', deepTag_TvsQCD, _branches);
  utils::book(_tree, _name, "deepTag_WvsQCD", size, 'F', deepTag_WvsQCD, _branches);
  utils::book(_tree, _name, "deepTag_ZvsQCD", size, 'F', deepTag_ZvsQCD, _branches);
  utils::book(_tree, _name, "msoftdrop", size, 'F', msoftdrop, _branches);
  utils::book(_tree, _name, "jetId", size, 'I', jetId, _branches);
  utils::book(_tree, _name, "subJetIdx1", size, 'I', subJetIdx1, _branches);
  utils::book(_tree, _name, "subJetIdx2", size, 'I', subJetIdx2, _branches);
}

void
panda::FatJet::datastore::releaseTree(TTree& _tree, TString const& _name)
{
  SubJet::datastore::releaseTree(_tree, _name);

  utils::resetAddress(_tree, _name, "area");
  utils::resetAddress(_tree, _name, "btagDDBvL");
  utils::resetAddress(_tree, _name, "btagDDCvB");
  utils::resetAddress(_tree, _name, "btagDDCvL");
  utils::resetAddress(_tree, _name, "btagHbb");
  utils::resetAddress(_tree, _name, "deepTagMD_H4qvsQCD");
  utils::resetAddress(_tree, _name, "deepTagMD_HbbvsQCD");
  utils::resetAddress(_tree, _name, "deepTagMD_TvsQCD");
  utils::resetAddress(_tree, _name, "deepTagMD_WvsQCD");
  utils::resetAddress(_tree, _name, "deepTagMD_ZHbbvsQCD");
  utils::resetAddress(_tree, _name, "deepTagMD_ZHccvsQCD");
  utils::resetAddress(_tree, _name, "deepTagMD_ZbbvsQCD");
  utils::resetAddress(_tree, _name, "deepTagMD_ZvsQCD");
  utils::resetAddress(_tree, _name, "deepTagMD_bbvsLight");
  utils::resetAddress(_tree, _name, "deepTagMD_ccvsLight");
  utils::resetAddress(_tree, _name, "deepTag_H");
  utils::resetAddress(_tree, _name, "deepTag_QCD");
  utils::resetAddress(_tree, _name, "deepTag_QCDothers");
  utils::resetAddress(_tree, _name, "deepTag_TvsQCD");
  utils::resetAddress(_tree, _name, "deepTag_WvsQCD");
  utils::resetAddress(_tree, _name, "deepTag_ZvsQCD");
  utils::resetAddress(_tree, _name, "msoftdrop");
  utils::resetAddress(_tree, _name, "jetId");
  utils::resetAddress(_tree, _name, "subJetIdx1");
  utils::resetAddress(_tree, _name, "subJetIdx2");
}

void
panda::FatJet::datastore::resizeVectors_(UInt_t _size)
{
  SubJet::datastore::resizeVectors_(_size);

}


panda::utils::BranchList
panda::FatJet::datastore::getBranchNames(TString const& _name/* = ""*/) const
{
  return FatJet::getListOfBranches().fullNames(_name);
}

panda::FatJet::FatJet(char const* _name/* = ""*/) :
  SubJet(new FatJetArray(1, _name)),
  area(gStore.getData(this).area[0]),
  btagDDBvL(gStore.getData(this).btagDDBvL[0]),
  btagDDCvB(gStore.getData(this).btagDDCvB[0]),
  btagDDCvL(gStore.getData(this).btagDDCvL[0]),
  btagHbb(gStore.getData(this).btagHbb[0]),
  deepTagMD_H4qvsQCD(gStore.getData(this).deepTagMD_H4qvsQCD[0]),
  deepTagMD_HbbvsQCD(gStore.getData(this).deepTagMD_HbbvsQCD[0]),
  deepTagMD_TvsQCD(gStore.getData(this).deepTagMD_TvsQCD[0]),
  deepTagMD_WvsQCD(gStore.getData(this).deepTagMD_WvsQCD[0]),
  deepTagMD_ZHbbvsQCD(gStore.getData(this).deepTagMD_ZHbbvsQCD[0]),
  deepTagMD_ZHccvsQCD(gStore.getData(this).deepTagMD_ZHccvsQCD[0]),
  deepTagMD_ZbbvsQCD(gStore.getData(this).deepTagMD_ZbbvsQCD[0]),
  deepTagMD_ZvsQCD(gStore.getData(this).deepTagMD_ZvsQCD[0]),
  deepTagMD_bbvsLight(gStore.getData(this).deepTagMD_bbvsLight[0]),
  deepTagMD_ccvsLight(gStore.getData(this).deepTagMD_ccvsLight[0]),
  deepTag_H(gStore.getData(this).deepTag_H[0]),
  deepTag_QCD(gStore.getData(this).deepTag_QCD[0]),
  deepTag_QCDothers(gStore.getData(this).deepTag_QCDothers[0]),
  deepTag_TvsQCD(gStore.getData(this).deepTag_TvsQCD[0]),
  deepTag_WvsQCD(gStore.getData(this).deepTag_WvsQCD[0]),
  deepTag_ZvsQCD(gStore.getData(this).deepTag_ZvsQCD[0]),
  msoftdrop(gStore.getData(this).msoftdrop[0]),
  jetId(gStore.getData(this).jetId[0]),
  subJetIdx1(gStore.getData(this).subJetIdx1[0]),
  subJetIdx2(gStore.getData(this).subJetIdx2[0])
{
}

panda::FatJet::FatJet(FatJet const& _src) :
  SubJet(new FatJetArray(1, _src.getName())),
  area(gStore.getData(this).area[0]),
  btagDDBvL(gStore.getData(this).btagDDBvL[0]),
  btagDDCvB(gStore.getData(this).btagDDCvB[0]),
  btagDDCvL(gStore.getData(this).btagDDCvL[0]),
  btagHbb(gStore.getData(this).btagHbb[0]),
  deepTagMD_H4qvsQCD(gStore.getData(this).deepTagMD_H4qvsQCD[0]),
  deepTagMD_HbbvsQCD(gStore.getData(this).deepTagMD_HbbvsQCD[0]),
  deepTagMD_TvsQCD(gStore.getData(this).deepTagMD_TvsQCD[0]),
  deepTagMD_WvsQCD(gStore.getData(this).deepTagMD_WvsQCD[0]),
  deepTagMD_ZHbbvsQCD(gStore.getData(this).deepTagMD_ZHbbvsQCD[0]),
  deepTagMD_ZHccvsQCD(gStore.getData(this).deepTagMD_ZHccvsQCD[0]),
  deepTagMD_ZbbvsQCD(gStore.getData(this).deepTagMD_ZbbvsQCD[0]),
  deepTagMD_ZvsQCD(gStore.getData(this).deepTagMD_ZvsQCD[0]),
  deepTagMD_bbvsLight(gStore.getData(this).deepTagMD_bbvsLight[0]),
  deepTagMD_ccvsLight(gStore.getData(this).deepTagMD_ccvsLight[0]),
  deepTag_H(gStore.getData(this).deepTag_H[0]),
  deepTag_QCD(gStore.getData(this).deepTag_QCD[0]),
  deepTag_QCDothers(gStore.getData(this).deepTag_QCDothers[0]),
  deepTag_TvsQCD(gStore.getData(this).deepTag_TvsQCD[0]),
  deepTag_WvsQCD(gStore.getData(this).deepTag_WvsQCD[0]),
  deepTag_ZvsQCD(gStore.getData(this).deepTag_ZvsQCD[0]),
  msoftdrop(gStore.getData(this).msoftdrop[0]),
  jetId(gStore.getData(this).jetId[0]),
  subJetIdx1(gStore.getData(this).subJetIdx1[0]),
  subJetIdx2(gStore.getData(this).subJetIdx2[0])
{
  operator=(_src);
}

panda::FatJet::FatJet(datastore& _data, UInt_t _idx) :
  SubJet(_data, _idx),
  area(_data.area[_idx]),
  btagDDBvL(_data.btagDDBvL[_idx]),
  btagDDCvB(_data.btagDDCvB[_idx]),
  btagDDCvL(_data.btagDDCvL[_idx]),
  btagHbb(_data.btagHbb[_idx]),
  deepTagMD_H4qvsQCD(_data.deepTagMD_H4qvsQCD[_idx]),
  deepTagMD_HbbvsQCD(_data.deepTagMD_HbbvsQCD[_idx]),
  deepTagMD_TvsQCD(_data.deepTagMD_TvsQCD[_idx]),
  deepTagMD_WvsQCD(_data.deepTagMD_WvsQCD[_idx]),
  deepTagMD_ZHbbvsQCD(_data.deepTagMD_ZHbbvsQCD[_idx]),
  deepTagMD_ZHccvsQCD(_data.deepTagMD_ZHccvsQCD[_idx]),
  deepTagMD_ZbbvsQCD(_data.deepTagMD_ZbbvsQCD[_idx]),
  deepTagMD_ZvsQCD(_data.deepTagMD_ZvsQCD[_idx]),
  deepTagMD_bbvsLight(_data.deepTagMD_bbvsLight[_idx]),
  deepTagMD_ccvsLight(_data.deepTagMD_ccvsLight[_idx]),
  deepTag_H(_data.deepTag_H[_idx]),
  deepTag_QCD(_data.deepTag_QCD[_idx]),
  deepTag_QCDothers(_data.deepTag_QCDothers[_idx]),
  deepTag_TvsQCD(_data.deepTag_TvsQCD[_idx]),
  deepTag_WvsQCD(_data.deepTag_WvsQCD[_idx]),
  deepTag_ZvsQCD(_data.deepTag_ZvsQCD[_idx]),
  msoftdrop(_data.msoftdrop[_idx]),
  jetId(_data.jetId[_idx]),
  subJetIdx1(_data.subJetIdx1[_idx]),
  subJetIdx2(_data.subJetIdx2[_idx])
{
}

panda::FatJet::FatJet(ArrayBase* _array) :
  SubJet(_array),
  area(gStore.getData(this).area[0]),
  btagDDBvL(gStore.getData(this).btagDDBvL[0]),
  btagDDCvB(gStore.getData(this).btagDDCvB[0]),
  btagDDCvL(gStore.getData(this).btagDDCvL[0]),
  btagHbb(gStore.getData(this).btagHbb[0]),
  deepTagMD_H4qvsQCD(gStore.getData(this).deepTagMD_H4qvsQCD[0]),
  deepTagMD_HbbvsQCD(gStore.getData(this).deepTagMD_HbbvsQCD[0]),
  deepTagMD_TvsQCD(gStore.getData(this).deepTagMD_TvsQCD[0]),
  deepTagMD_WvsQCD(gStore.getData(this).deepTagMD_WvsQCD[0]),
  deepTagMD_ZHbbvsQCD(gStore.getData(this).deepTagMD_ZHbbvsQCD[0]),
  deepTagMD_ZHccvsQCD(gStore.getData(this).deepTagMD_ZHccvsQCD[0]),
  deepTagMD_ZbbvsQCD(gStore.getData(this).deepTagMD_ZbbvsQCD[0]),
  deepTagMD_ZvsQCD(gStore.getData(this).deepTagMD_ZvsQCD[0]),
  deepTagMD_bbvsLight(gStore.getData(this).deepTagMD_bbvsLight[0]),
  deepTagMD_ccvsLight(gStore.getData(this).deepTagMD_ccvsLight[0]),
  deepTag_H(gStore.getData(this).deepTag_H[0]),
  deepTag_QCD(gStore.getData(this).deepTag_QCD[0]),
  deepTag_QCDothers(gStore.getData(this).deepTag_QCDothers[0]),
  deepTag_TvsQCD(gStore.getData(this).deepTag_TvsQCD[0]),
  deepTag_WvsQCD(gStore.getData(this).deepTag_WvsQCD[0]),
  deepTag_ZvsQCD(gStore.getData(this).deepTag_ZvsQCD[0]),
  msoftdrop(gStore.getData(this).msoftdrop[0]),
  jetId(gStore.getData(this).jetId[0]),
  subJetIdx1(gStore.getData(this).subJetIdx1[0]),
  subJetIdx2(gStore.getData(this).subJetIdx2[0])
{
}

panda::FatJet::~FatJet()
{
  destructor();
}

void
panda::FatJet::destructor(Bool_t _recursive/* = kFALSE*/)
{
  /* BEGIN CUSTOM FatJet.cc.destructor */
  /* END CUSTOM */

  if (_recursive)
    SubJet::destructor(kTRUE);
}

panda::FatJet&
panda::FatJet::operator=(FatJet const& _src)
{
  SubJet::operator=(_src);

  area = _src.area;
  btagDDBvL = _src.btagDDBvL;
  btagDDCvB = _src.btagDDCvB;
  btagDDCvL = _src.btagDDCvL;
  btagHbb = _src.btagHbb;
  deepTagMD_H4qvsQCD = _src.deepTagMD_H4qvsQCD;
  deepTagMD_HbbvsQCD = _src.deepTagMD_HbbvsQCD;
  deepTagMD_TvsQCD = _src.deepTagMD_TvsQCD;
  deepTagMD_WvsQCD = _src.deepTagMD_WvsQCD;
  deepTagMD_ZHbbvsQCD = _src.deepTagMD_ZHbbvsQCD;
  deepTagMD_ZHccvsQCD = _src.deepTagMD_ZHccvsQCD;
  deepTagMD_ZbbvsQCD = _src.deepTagMD_ZbbvsQCD;
  deepTagMD_ZvsQCD = _src.deepTagMD_ZvsQCD;
  deepTagMD_bbvsLight = _src.deepTagMD_bbvsLight;
  deepTagMD_ccvsLight = _src.deepTagMD_ccvsLight;
  deepTag_H = _src.deepTag_H;
  deepTag_QCD = _src.deepTag_QCD;
  deepTag_QCDothers = _src.deepTag_QCDothers;
  deepTag_TvsQCD = _src.deepTag_TvsQCD;
  deepTag_WvsQCD = _src.deepTag_WvsQCD;
  deepTag_ZvsQCD = _src.deepTag_ZvsQCD;
  msoftdrop = _src.msoftdrop;
  jetId = _src.jetId;
  subJetIdx1 = _src.subJetIdx1;
  subJetIdx2 = _src.subJetIdx2;

  /* BEGIN CUSTOM FatJet.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::FatJet::doBook_(TTree& _tree, TString const& _name, utils::BranchList const& _branches/* = {"*"}*/)
{
  SubJet::doBook_(_tree, _name, _branches);

  utils::book(_tree, _name, "area", "", 'F', &area, _branches);
  utils::book(_tree, _name, "btagDDBvL", "", 'F', &btagDDBvL, _branches);
  utils::book(_tree, _name, "btagDDCvB", "", 'F', &btagDDCvB, _branches);
  utils::book(_tree, _name, "btagDDCvL", "", 'F', &btagDDCvL, _branches);
  utils::book(_tree, _name, "btagHbb", "", 'F', &btagHbb, _branches);
  utils::book(_tree, _name, "deepTagMD_H4qvsQCD", "", 'F', &deepTagMD_H4qvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_HbbvsQCD", "", 'F', &deepTagMD_HbbvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_TvsQCD", "", 'F', &deepTagMD_TvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_WvsQCD", "", 'F', &deepTagMD_WvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_ZHbbvsQCD", "", 'F', &deepTagMD_ZHbbvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_ZHccvsQCD", "", 'F', &deepTagMD_ZHccvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_ZbbvsQCD", "", 'F', &deepTagMD_ZbbvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_ZvsQCD", "", 'F', &deepTagMD_ZvsQCD, _branches);
  utils::book(_tree, _name, "deepTagMD_bbvsLight", "", 'F', &deepTagMD_bbvsLight, _branches);
  utils::book(_tree, _name, "deepTagMD_ccvsLight", "", 'F', &deepTagMD_ccvsLight, _branches);
  utils::book(_tree, _name, "deepTag_H", "", 'F', &deepTag_H, _branches);
  utils::book(_tree, _name, "deepTag_QCD", "", 'F', &deepTag_QCD, _branches);
  utils::book(_tree, _name, "deepTag_QCDothers", "", 'F', &deepTag_QCDothers, _branches);
  utils::book(_tree, _name, "deepTag_TvsQCD", "", 'F', &deepTag_TvsQCD, _branches);
  utils::book(_tree, _name, "deepTag_WvsQCD", "", 'F', &deepTag_WvsQCD, _branches);
  utils::book(_tree, _name, "deepTag_ZvsQCD", "", 'F', &deepTag_ZvsQCD, _branches);
  utils::book(_tree, _name, "msoftdrop", "", 'F', &msoftdrop, _branches);
  utils::book(_tree, _name, "jetId", "", 'I', &jetId, _branches);
  utils::book(_tree, _name, "subJetIdx1", "", 'I', &subJetIdx1, _branches);
  utils::book(_tree, _name, "subJetIdx2", "", 'I', &subJetIdx2, _branches);
}

void
panda::FatJet::doInit_()
{
  SubJet::doInit_();

  area = 0.;
  btagDDBvL = 0.;
  btagDDCvB = 0.;
  btagDDCvL = 0.;
  btagHbb = 0.;
  deepTagMD_H4qvsQCD = 0.;
  deepTagMD_HbbvsQCD = 0.;
  deepTagMD_TvsQCD = 0.;
  deepTagMD_WvsQCD = 0.;
  deepTagMD_ZHbbvsQCD = 0.;
  deepTagMD_ZHccvsQCD = 0.;
  deepTagMD_ZbbvsQCD = 0.;
  deepTagMD_ZvsQCD = 0.;
  deepTagMD_bbvsLight = 0.;
  deepTagMD_ccvsLight = 0.;
  deepTag_H = 0.;
  deepTag_QCD = 0.;
  deepTag_QCDothers = 0.;
  deepTag_TvsQCD = 0.;
  deepTag_WvsQCD = 0.;
  deepTag_ZvsQCD = 0.;
  msoftdrop = 0.;
  jetId = 0;
  subJetIdx1 = 0;
  subJetIdx2 = 0;

  /* BEGIN CUSTOM FatJet.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::FatJet::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM FatJet.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::FatJet::dump(std::ostream& _out/* = std::cout*/) const
{
  SubJet::dump(_out);

  _out << "area = " << area << std::endl;
  _out << "btagDDBvL = " << btagDDBvL << std::endl;
  _out << "btagDDCvB = " << btagDDCvB << std::endl;
  _out << "btagDDCvL = " << btagDDCvL << std::endl;
  _out << "btagHbb = " << btagHbb << std::endl;
  _out << "deepTagMD_H4qvsQCD = " << deepTagMD_H4qvsQCD << std::endl;
  _out << "deepTagMD_HbbvsQCD = " << deepTagMD_HbbvsQCD << std::endl;
  _out << "deepTagMD_TvsQCD = " << deepTagMD_TvsQCD << std::endl;
  _out << "deepTagMD_WvsQCD = " << deepTagMD_WvsQCD << std::endl;
  _out << "deepTagMD_ZHbbvsQCD = " << deepTagMD_ZHbbvsQCD << std::endl;
  _out << "deepTagMD_ZHccvsQCD = " << deepTagMD_ZHccvsQCD << std::endl;
  _out << "deepTagMD_ZbbvsQCD = " << deepTagMD_ZbbvsQCD << std::endl;
  _out << "deepTagMD_ZvsQCD = " << deepTagMD_ZvsQCD << std::endl;
  _out << "deepTagMD_bbvsLight = " << deepTagMD_bbvsLight << std::endl;
  _out << "deepTagMD_ccvsLight = " << deepTagMD_ccvsLight << std::endl;
  _out << "deepTag_H = " << deepTag_H << std::endl;
  _out << "deepTag_QCD = " << deepTag_QCD << std::endl;
  _out << "deepTag_QCDothers = " << deepTag_QCDothers << std::endl;
  _out << "deepTag_TvsQCD = " << deepTag_TvsQCD << std::endl;
  _out << "deepTag_WvsQCD = " << deepTag_WvsQCD << std::endl;
  _out << "deepTag_ZvsQCD = " << deepTag_ZvsQCD << std::endl;
  _out << "msoftdrop = " << msoftdrop << std::endl;
  _out << "jetId = " << jetId << std::endl;
  _out << "subJetIdx1 = " << subJetIdx1 << std::endl;
  _out << "subJetIdx2 = " << subJetIdx2 << std::endl;
}

/* BEGIN CUSTOM FatJet.cc.global */
/* END CUSTOM */

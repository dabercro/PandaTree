#include "../interface/Event.h"

panda::Event::Event() :
  TreeEntry()
{
  std::vector<Object*> myObjects{{&Flag, &GenPart, &Electron, &Muon, &Jet, &Photon, &GenMET, &CaloMET, &ChsMET, &MET, &PuppiMET, &RawMET, &TkMET}};
  objects_.insert(objects_.end(), myObjects.begin(), myObjects.end());
  std::vector<CollectionBase*> myCollections{{&GenPart, &Electron, &Muon, &Jet, &Photon}};
  collections_.insert(collections_.end(), myCollections.begin(), myCollections.end());
  /* BEGIN CUSTOM Event.cc.ctor */
  /* END CUSTOM */
}

panda::Event::Event(Event const& _src) :
  TreeEntry(_src),
  Flag(_src.Flag),
  GenPart(_src.GenPart),
  Electron(_src.Electron),
  Muon(_src.Muon),
  Jet(_src.Jet),
  Photon(_src.Photon),
  GenMET(_src.GenMET),
  CaloMET(_src.CaloMET),
  ChsMET(_src.ChsMET),
  MET(_src.MET),
  PuppiMET(_src.PuppiMET),
  RawMET(_src.RawMET),
  TkMET(_src.TkMET),
  run(_src.run),
  luminosityBlock(_src.luminosityBlock),
  event(_src.event)
{
  std::vector<Object*> myObjects{{&Flag, &GenPart, &Electron, &Muon, &Jet, &Photon, &GenMET, &CaloMET, &ChsMET, &MET, &PuppiMET, &RawMET, &TkMET}};
  objects_.insert(objects_.end(), myObjects.begin(), myObjects.end());
  std::vector<CollectionBase*> myCollections{{&GenPart, &Electron, &Muon, &Jet, &Photon}};
  collections_.insert(collections_.end(), myCollections.begin(), myCollections.end());

  /* BEGIN CUSTOM Event.cc.copy_ctor */
  /* END CUSTOM */
}

panda::Event::~Event()
{
  /* BEGIN CUSTOM Event.cc.dtor */
  /* END CUSTOM */
}

panda::Event&
panda::Event::operator=(Event const& _src)
{
  TreeEntry::operator=(_src);

  /* BEGIN CUSTOM Event.cc.operator= */
  /* END CUSTOM */

  run = _src.run;
  luminosityBlock = _src.luminosityBlock;
  event = _src.event;

  Flag = _src.Flag;
  GenPart = _src.GenPart;
  Electron = _src.Electron;
  Muon = _src.Muon;
  Jet = _src.Jet;
  Photon = _src.Photon;
  GenMET = _src.GenMET;
  CaloMET = _src.CaloMET;
  ChsMET = _src.ChsMET;
  MET = _src.MET;
  PuppiMET = _src.PuppiMET;
  RawMET = _src.RawMET;
  TkMET = _src.TkMET;

  return *this;
}

void
panda::Event::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Event.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Event::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "run = " << run << std::endl;
  _out << "luminosityBlock = " << luminosityBlock << std::endl;
  _out << "event = " << event << std::endl;

  Flag.dump(_out);
  GenPart.dump(_out);
  Electron.dump(_out);
  Muon.dump(_out);
  Jet.dump(_out);
  Photon.dump(_out);
  GenMET.dump(_out);
  CaloMET.dump(_out);
  ChsMET.dump(_out);
  MET.dump(_out);
  PuppiMET.dump(_out);
  RawMET.dump(_out);
  TkMET.dump(_out);

}
/*static*/
panda::utils::BranchList
panda::Event::getListOfBranches(Bool_t _direct/* = kFALSE*/)
{
  utils::BranchList blist;
  blist += {"run", "luminosityBlock", "event"};
  if (!_direct) {
    blist += Flags::getListOfBranches().fullNames("Flag");
    blist += GenPart::getListOfBranches().fullNames("GenPart");
    blist += Electron::getListOfBranches().fullNames("Electron");
    blist += Muon::getListOfBranches().fullNames("Muon");
    blist += Jet::getListOfBranches().fullNames("Jet");
    blist += Photon::getListOfBranches().fullNames("Photon");
    blist += Met::getListOfBranches().fullNames("GenMET");
    blist += RecoMet::getListOfBranches().fullNames("CaloMET");
    blist += RecoMet::getListOfBranches().fullNames("ChsMET");
    blist += RecoMet::getListOfBranches().fullNames("MET");
    blist += RecoMet::getListOfBranches().fullNames("PuppiMET");
    blist += RecoMet::getListOfBranches().fullNames("RawMET");
    blist += RecoMet::getListOfBranches().fullNames("TkMET");
  }
  /* BEGIN CUSTOM Event.cc.getListOfBranches_ */
  /* END CUSTOM */
  return blist;
}

/*protected*/
void
panda::Event::doSetStatus_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::setStatus(_tree, "", "run", _branches);
  utils::setStatus(_tree, "", "luminosityBlock", _branches);
  utils::setStatus(_tree, "", "event", _branches);
}

/*protected*/
panda::utils::BranchList
panda::Event::doGetStatus_(TTree& _tree) const
{
  utils::BranchList blist;

  blist.push_back(utils::getStatus(_tree, "", "run"));
  blist.push_back(utils::getStatus(_tree, "", "luminosityBlock"));
  blist.push_back(utils::getStatus(_tree, "", "event"));
  return blist;
}

/*protected*/
panda::utils::BranchList
panda::Event::doGetBranchNames_() const
{
  return getListOfBranches(true);
}

/*protected*/
void
panda::Event::doSetAddress_(TTree& _tree, utils::BranchList const& _branches, Bool_t _setStatus)
{
  utils::setAddress(_tree, "", "run", &run, _branches, _setStatus);
  utils::setAddress(_tree, "", "luminosityBlock", &luminosityBlock, _branches, _setStatus);
  utils::setAddress(_tree, "", "event", &event, _branches, _setStatus);
}

/*protected*/
void
panda::Event::doBook_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::book(_tree, "", "run", "", 'i', &run, _branches);
  utils::book(_tree, "", "luminosityBlock", "", 'i', &luminosityBlock, _branches);
  utils::book(_tree, "", "event", "", 'l', &event, _branches);
}

/*protected*/
void
panda::Event::doGetEntry_(TTree& _tree)
{
  /* BEGIN CUSTOM Event.cc.doGetEntry_ */
  /* END CUSTOM */
}

void
panda::Event::doInit_()
{
  run = 0;
  luminosityBlock = 0;
  event = 0;
  /* BEGIN CUSTOM Event.cc.doInit_ */
  /* END CUSTOM */
}

void
panda::Event::doUnlink_(TTree& _tree)
{
  /* BEGIN CUSTOM Event.cc.doUnlink_ */
  /* END CUSTOM */
}


/* BEGIN CUSTOM Event.cc.global */
/* END CUSTOM */

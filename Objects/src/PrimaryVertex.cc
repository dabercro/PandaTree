#include "../interface/PrimaryVertex.h"

/*static*/
panda::utils::BranchList
panda::PrimaryVertex::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"ndof", "x", "y", "z", "chi2", "score", "npvs", "npvsGood"};
  return blist;
}

panda::PrimaryVertex::PrimaryVertex(char const* _name/* = ""*/) :
  Singlet(_name)
{
}

panda::PrimaryVertex::PrimaryVertex(PrimaryVertex const& _src) :
  Singlet(_src),
  ndof(_src.ndof),
  x(_src.x),
  y(_src.y),
  z(_src.z),
  chi2(_src.chi2),
  score(_src.score),
  npvs(_src.npvs),
  npvsGood(_src.npvsGood)
{
  ndof = _src.ndof;
  x = _src.x;
  y = _src.y;
  z = _src.z;
  chi2 = _src.chi2;
  score = _src.score;
  npvs = _src.npvs;
  npvsGood = _src.npvsGood;
}

panda::PrimaryVertex::~PrimaryVertex()
{
}

panda::PrimaryVertex&
panda::PrimaryVertex::operator=(PrimaryVertex const& _src)
{
  ndof = _src.ndof;
  x = _src.x;
  y = _src.y;
  z = _src.z;
  chi2 = _src.chi2;
  score = _src.score;
  npvs = _src.npvs;
  npvsGood = _src.npvsGood;

  /* BEGIN CUSTOM PrimaryVertex.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::PrimaryVertex::doSetStatus_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::setStatus(_tree, name_, "ndof", _branches);
  utils::setStatus(_tree, name_, "x", _branches);
  utils::setStatus(_tree, name_, "y", _branches);
  utils::setStatus(_tree, name_, "z", _branches);
  utils::setStatus(_tree, name_, "chi2", _branches);
  utils::setStatus(_tree, name_, "score", _branches);
  utils::setStatus(_tree, name_, "npvs", _branches);
  utils::setStatus(_tree, name_, "npvsGood", _branches);
}

panda::utils::BranchList
panda::PrimaryVertex::doGetStatus_(TTree& _tree) const
{
  utils::BranchList blist;

  blist.push_back(utils::getStatus(_tree, name_, "ndof"));
  blist.push_back(utils::getStatus(_tree, name_, "x"));
  blist.push_back(utils::getStatus(_tree, name_, "y"));
  blist.push_back(utils::getStatus(_tree, name_, "z"));
  blist.push_back(utils::getStatus(_tree, name_, "chi2"));
  blist.push_back(utils::getStatus(_tree, name_, "score"));
  blist.push_back(utils::getStatus(_tree, name_, "npvs"));
  blist.push_back(utils::getStatus(_tree, name_, "npvsGood"));

  return blist;
}

void
panda::PrimaryVertex::doSetAddress_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  utils::setAddress(_tree, name_, "ndof", &ndof, _branches, _setStatus);
  utils::setAddress(_tree, name_, "x", &x, _branches, _setStatus);
  utils::setAddress(_tree, name_, "y", &y, _branches, _setStatus);
  utils::setAddress(_tree, name_, "z", &z, _branches, _setStatus);
  utils::setAddress(_tree, name_, "chi2", &chi2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "score", &score, _branches, _setStatus);
  utils::setAddress(_tree, name_, "npvs", &npvs, _branches, _setStatus);
  utils::setAddress(_tree, name_, "npvsGood", &npvsGood, _branches, _setStatus);
}

void
panda::PrimaryVertex::doBook_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, name_, "ndof", "", 'F', &ndof, _branches);
  utils::book(_tree, name_, "x", "", 'F', &x, _branches);
  utils::book(_tree, name_, "y", "", 'F', &y, _branches);
  utils::book(_tree, name_, "z", "", 'F', &z, _branches);
  utils::book(_tree, name_, "chi2", "", 'F', &chi2, _branches);
  utils::book(_tree, name_, "score", "", 'F', &score, _branches);
  utils::book(_tree, name_, "npvs", "", 'I', &npvs, _branches);
  utils::book(_tree, name_, "npvsGood", "", 'I', &npvsGood, _branches);
}

void
panda::PrimaryVertex::doInit_()
{
  ndof = 0.;
  x = 0.;
  y = 0.;
  z = 0.;
  chi2 = 0.;
  score = 0.;
  npvs = 0;
  npvsGood = 0;

  /* BEGIN CUSTOM PrimaryVertex.cc.doInit_ */
  /* END CUSTOM */
}

panda::utils::BranchList
panda::PrimaryVertex::doGetBranchNames_(Bool_t _fullName) const
{
  if (_fullName)
    return getListOfBranches().fullNames(name_);
  else
    return getListOfBranches().fullNames();
}

void
panda::PrimaryVertex::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM PrimaryVertex.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::PrimaryVertex::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "ndof = " << ndof << std::endl;
  _out << "x = " << x << std::endl;
  _out << "y = " << y << std::endl;
  _out << "z = " << z << std::endl;
  _out << "chi2 = " << chi2 << std::endl;
  _out << "score = " << score << std::endl;
  _out << "npvs = " << npvs << std::endl;
  _out << "npvsGood = " << npvsGood << std::endl;
}

/* BEGIN CUSTOM PrimaryVertex.cc.global */
/* END CUSTOM */

#include "../interface/BReweight.h"

/*static*/
panda::utils::BranchList
panda::BReweight::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"CSVV2", "DeepCSVB"};
  return blist;
}

panda::BReweight::BReweight(char const* _name/* = ""*/) :
  Singlet(_name)
{
}

panda::BReweight::BReweight(BReweight const& _src) :
  Singlet(_src),
  CSVV2(_src.CSVV2),
  DeepCSVB(_src.DeepCSVB)
{
  CSVV2 = _src.CSVV2;
  DeepCSVB = _src.DeepCSVB;
}

panda::BReweight::~BReweight()
{
}

panda::BReweight&
panda::BReweight::operator=(BReweight const& _src)
{
  CSVV2 = _src.CSVV2;
  DeepCSVB = _src.DeepCSVB;

  /* BEGIN CUSTOM BReweight.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::BReweight::doSetStatus_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::setStatus(_tree, name_, "CSVV2", _branches);
  utils::setStatus(_tree, name_, "DeepCSVB", _branches);
}

panda::utils::BranchList
panda::BReweight::doGetStatus_(TTree& _tree) const
{
  utils::BranchList blist;

  blist.push_back(utils::getStatus(_tree, name_, "CSVV2"));
  blist.push_back(utils::getStatus(_tree, name_, "DeepCSVB"));

  return blist;
}

void
panda::BReweight::doSetAddress_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  utils::setAddress(_tree, name_, "CSVV2", &CSVV2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DeepCSVB", &DeepCSVB, _branches, _setStatus);
}

void
panda::BReweight::doBook_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, name_, "CSVV2", "", 'F', &CSVV2, _branches);
  utils::book(_tree, name_, "DeepCSVB", "", 'F', &DeepCSVB, _branches);
}

void
panda::BReweight::doInit_()
{
  CSVV2 = 0.;
  DeepCSVB = 0.;

  /* BEGIN CUSTOM BReweight.cc.doInit_ */
  /* END CUSTOM */
}

panda::utils::BranchList
panda::BReweight::doGetBranchNames_(Bool_t _fullName) const
{
  if (_fullName)
    return getListOfBranches().fullNames(name_);
  else
    return getListOfBranches().fullNames();
}

void
panda::BReweight::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM BReweight.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::BReweight::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "CSVV2 = " << CSVV2 << std::endl;
  _out << "DeepCSVB = " << DeepCSVB << std::endl;
}

/* BEGIN CUSTOM BReweight.cc.global */
/* END CUSTOM */

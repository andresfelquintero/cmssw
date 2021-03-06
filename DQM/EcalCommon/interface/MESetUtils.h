#ifndef MESetUtils_H
#define MESetUtils_H

#include "DQM/EcalCommon/interface/MESet.h"

#include <map>
#include <string>

namespace edm {
class ParameterSet;
class ParameterSetDescription;
} // namespace edm

namespace ecaldqm {
MESet *createMESet(edm::ParameterSet const &);
void fillMESetDescriptions(edm::ParameterSetDescription &);
} // namespace ecaldqm

#endif

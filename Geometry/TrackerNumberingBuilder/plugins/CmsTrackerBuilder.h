#ifndef Geometry_TrackerNumberingBuilder_CmsTrackerBuilder_H
#define Geometry_TrackerNumberingBuilder_CmsTrackerBuilder_H

#include "Geometry/TrackerNumberingBuilder/plugins/CmsTrackerLevelBuilder.h"
#include "FWCore/ParameterSet/interface/types.h"
#include <string>

/**
 * Abstract Class to construct a Level in the hierarchy
 */
class CmsTrackerBuilder : public CmsTrackerLevelBuilder {
public:
  CmsTrackerBuilder();

private:
  void sortNS(DDFilteredView&, GeometricDet*) override;
  void buildComponent(DDFilteredView&, GeometricDet*, std::string) override;
};

#endif

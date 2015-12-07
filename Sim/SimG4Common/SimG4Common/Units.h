#ifndef SIMG4COMMON_UNITS_H
#define SIMG4COMMON_UNITS_H

// Geant4
#include "G4SystemOfUnits.hh"

/** Conversion between units.
 *
 *  Contains conversions between default units used by EDM and by Geant.
 *  Default units in FCC-EDM are (as initially discussed on FCCSoftware Meeting on 14/10/15) GeV and cm.
 *  Geant4 default units are MeV and mm.
 *
 *  @author Anna Zaborowska
 */

namespace sim {
namespace edmdefault {
constexpr double length = CLHEP::cm;
constexpr double energy = CLHEP::GeV;
}
namespace edm2g4 {
constexpr double length = edmdefault::length/CLHEP::mm;
constexpr double energy = edmdefault::energy/CLHEP::MeV;
}
namespace g42edm {
constexpr double length = CLHEP::mm/edmdefault::length;
constexpr double energy = CLHEP::MeV/edmdefault::energy;
}
}
#endif /* SIMG4COMMON_UNITS_H */

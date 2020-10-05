#include <boost/python.hpp>
#include "G4PhysListFactory.hh"

using namespace boost::python;

// ====================================================================
// module definition
// ====================================================================
void export_PhysListFactory()
{
class_<G4PhysListFactory, G4PhysListFactory*>
    ("G4PhysListFactory", "phys list factory")
    .def("GetReferencePhysList", &G4PhysListFactory::GetReferencePhysList,
        return_internal_reference<>())
    .def("ReferencePhysList", &G4PhysListFactory::ReferencePhysList,
        return_internal_reference<>())
    .def("IsReferencePhysList", &G4PhysListFactory::IsReferencePhysList)
    .def("AvailablePhysLists", &G4PhysListFactory::AvailablePhysLists,
    return_value_policy<reference_existing_object>())
    .def("AvailablePhysListsEM", &G4PhysListFactory::AvailablePhysListsEM,
    return_value_policy<reference_existing_object>())
    ;
}

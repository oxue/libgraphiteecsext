#ifndef INCLUDED_graphite_std_StdComp
#define INCLUDED_graphite_std_StdComp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(graphite,std,StdComp)
namespace graphite{
namespace std{


class StdComp_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef StdComp_obj OBJ_;

	public:
		StdComp_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("graphite.std.StdComp"); }
		::String __ToString() const { return HX_CSTRING("StdComp.") + tag; }

		static ::graphite::std::StdComp CIRCLE;
		static inline ::graphite::std::StdComp CIRCLE_dyn() { return CIRCLE; }
		static ::graphite::std::StdComp CIRCLECOLLISION;
		static inline ::graphite::std::StdComp CIRCLECOLLISION_dyn() { return CIRCLECOLLISION; }
		static ::graphite::std::StdComp COORDINATES;
		static inline ::graphite::std::StdComp COORDINATES_dyn() { return COORDINATES; }
		static ::graphite::std::StdComp LERP;
		static inline ::graphite::std::StdComp LERP_dyn() { return LERP; }
		static ::graphite::std::StdComp MOUSECOORDS;
		static inline ::graphite::std::StdComp MOUSECOORDS_dyn() { return MOUSECOORDS; }
		static ::graphite::std::StdComp POSITION;
		static inline ::graphite::std::StdComp POSITION_dyn() { return POSITION; }
		static ::graphite::std::StdComp RANDOMCOORDS;
		static inline ::graphite::std::StdComp RANDOMCOORDS_dyn() { return RANDOMCOORDS; }
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_StdComp */ 

#ifndef INCLUDED_graphite_std_MouseCoordComp
#define INCLUDED_graphite_std_MouseCoordComp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Comp.h>
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS2(graphite,std,CoordinateComp)
HX_DECLARE_CLASS2(graphite,std,MouseCoordComp)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  MouseCoordComp_obj : public ::graphite::Comp_obj{
	public:
		typedef ::graphite::Comp_obj super;
		typedef MouseCoordComp_obj OBJ_;
		MouseCoordComp_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MouseCoordComp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MouseCoordComp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MouseCoordComp"); }

		virtual Void cache( );

		::graphite::std::CoordinateComp coordinates;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_MouseCoordComp */ 

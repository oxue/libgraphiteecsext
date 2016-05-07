#ifndef INCLUDED_graphite_std_RandomCoordComp
#define INCLUDED_graphite_std_RandomCoordComp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Comp.h>
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS2(graphite,std,CoordinateComp)
HX_DECLARE_CLASS2(graphite,std,RandomCoordComp)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  RandomCoordComp_obj : public ::graphite::Comp_obj{
	public:
		typedef ::graphite::Comp_obj super;
		typedef RandomCoordComp_obj OBJ_;
		RandomCoordComp_obj();
		Void __construct(::flash::geom::Rectangle _dimensions,hx::Null< int >  __o__timer);

	public:
		static hx::ObjectPtr< RandomCoordComp_obj > __new(::flash::geom::Rectangle _dimensions,hx::Null< int >  __o__timer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RandomCoordComp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RandomCoordComp"); }

		virtual Void cache( );

		::graphite::std::CoordinateComp coordinates;
		int t;
		int timer;
		::flash::geom::Rectangle dimensions;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_RandomCoordComp */ 

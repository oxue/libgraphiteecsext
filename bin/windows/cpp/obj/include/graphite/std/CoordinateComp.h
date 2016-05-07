#ifndef INCLUDED_graphite_std_CoordinateComp
#define INCLUDED_graphite_std_CoordinateComp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Comp.h>
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS2(graphite,std,CoordinateComp)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  CoordinateComp_obj : public ::graphite::Comp_obj{
	public:
		typedef ::graphite::Comp_obj super;
		typedef CoordinateComp_obj OBJ_;
		CoordinateComp_obj();
		Void __construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y);

	public:
		static hx::ObjectPtr< CoordinateComp_obj > __new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CoordinateComp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CoordinateComp"); }

		Float y;
		Float x;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_CoordinateComp */ 

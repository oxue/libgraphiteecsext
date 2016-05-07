#ifndef INCLUDED_graphite_std_PositionComp
#define INCLUDED_graphite_std_PositionComp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Comp.h>
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS2(graphite,std,PositionComp)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  PositionComp_obj : public ::graphite::Comp_obj{
	public:
		typedef ::graphite::Comp_obj super;
		typedef PositionComp_obj OBJ_;
		PositionComp_obj();
		Void __construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y);

	public:
		static hx::ObjectPtr< PositionComp_obj > __new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PositionComp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PositionComp"); }

		Float dampY;
		Float dampX;
		Float accY;
		Float accX;
		Float velY;
		Float velX;
		Float y;
		Float x;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_PositionComp */ 

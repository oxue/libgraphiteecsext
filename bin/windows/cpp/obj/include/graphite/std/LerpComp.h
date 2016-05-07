#ifndef INCLUDED_graphite_std_LerpComp
#define INCLUDED_graphite_std_LerpComp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Comp.h>
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS2(graphite,std,CoordinateComp)
HX_DECLARE_CLASS2(graphite,std,LerpComp)
HX_DECLARE_CLASS2(graphite,std,PositionComp)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  LerpComp_obj : public ::graphite::Comp_obj{
	public:
		typedef ::graphite::Comp_obj super;
		typedef LerpComp_obj OBJ_;
		LerpComp_obj();
		Void __construct(hx::Null< Float >  __o__factor);

	public:
		static hx::ObjectPtr< LerpComp_obj > __new(hx::Null< Float >  __o__factor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LerpComp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LerpComp"); }

		virtual Void load( );

		virtual Void cache( );

		::graphite::std::CoordinateComp destination;
		::graphite::std::PositionComp position;
		Float factor;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_LerpComp */ 

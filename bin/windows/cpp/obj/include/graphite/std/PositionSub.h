#ifndef INCLUDED_graphite_std_PositionSub
#define INCLUDED_graphite_std_PositionSub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Sub.h>
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS1(graphite,Sub)
HX_DECLARE_CLASS2(graphite,collections,ObjectPool)
HX_DECLARE_CLASS2(graphite,std,PositionComp)
HX_DECLARE_CLASS2(graphite,std,PositionSub)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  PositionSub_obj : public ::graphite::Sub_obj{
	public:
		typedef ::graphite::Sub_obj super;
		typedef PositionSub_obj OBJ_;
		PositionSub_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PositionSub_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PositionSub_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PositionSub"); }

		virtual Void update( );

		virtual ::graphite::Comp get( );

		::graphite::collections::ObjectPool pool;
		Array< ::Dynamic > positions;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_PositionSub */ 

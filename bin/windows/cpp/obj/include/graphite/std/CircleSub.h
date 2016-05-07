#ifndef INCLUDED_graphite_std_CircleSub
#define INCLUDED_graphite_std_CircleSub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Sub.h>
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS1(graphite,Sub)
HX_DECLARE_CLASS2(graphite,collections,ObjectPool)
HX_DECLARE_CLASS2(graphite,std,CircleComp)
HX_DECLARE_CLASS2(graphite,std,CircleSub)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  CircleSub_obj : public ::graphite::Sub_obj{
	public:
		typedef ::graphite::Sub_obj super;
		typedef CircleSub_obj OBJ_;
		CircleSub_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CircleSub_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CircleSub_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CircleSub"); }

		virtual Void update( );

		virtual ::graphite::Comp get( );

		::graphite::collections::ObjectPool pool;
		Array< ::Dynamic > circles;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_CircleSub */ 

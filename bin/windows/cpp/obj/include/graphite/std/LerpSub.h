#ifndef INCLUDED_graphite_std_LerpSub
#define INCLUDED_graphite_std_LerpSub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Sub.h>
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS1(graphite,Sub)
HX_DECLARE_CLASS2(graphite,collections,ObjectPool)
HX_DECLARE_CLASS2(graphite,std,LerpComp)
HX_DECLARE_CLASS2(graphite,std,LerpSub)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  LerpSub_obj : public ::graphite::Sub_obj{
	public:
		typedef ::graphite::Sub_obj super;
		typedef LerpSub_obj OBJ_;
		LerpSub_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LerpSub_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LerpSub_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LerpSub"); }

		virtual Void update( );

		virtual ::graphite::Comp get( );

		::graphite::collections::ObjectPool pool;
		Array< ::Dynamic > lerps;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_LerpSub */ 

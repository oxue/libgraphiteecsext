#ifndef INCLUDED_graphite_SubManager
#define INCLUDED_graphite_SubManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(graphite,Sub)
HX_DECLARE_CLASS1(graphite,SubManager)
HX_DECLARE_CLASS2(graphite,collections,Cons)
HX_DECLARE_CLASS2(graphite,std,StdComp)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
namespace graphite{


class HXCPP_CLASS_ATTRIBUTES  SubManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SubManager_obj OBJ_;
		SubManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SubManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SubManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SubManager"); }

		virtual ::graphite::collections::Cons update_h( ::graphite::collections::Cons _lst);
		Dynamic update_h_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual ::graphite::collections::Cons addsub_h( ::graphite::Sub _sub,::graphite::collections::Cons _lst);
		Dynamic addsub_h_dyn();

		virtual Void addSub( ::graphite::Sub _sub);
		Dynamic addSub_dyn();

		virtual ::graphite::Sub get( ::graphite::std::StdComp _id);
		Dynamic get_dyn();

		::graphite::collections::Cons subs;
		::haxe::ds::EnumValueMap subHash;
};

} // end namespace graphite

#endif /* INCLUDED_graphite_SubManager */ 

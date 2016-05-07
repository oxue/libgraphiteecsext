#ifndef INCLUDED_graphite_Ent
#define INCLUDED_graphite_Ent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS1(graphite,Ent)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
namespace graphite{


class HXCPP_CLASS_ATTRIBUTES  Ent_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Ent_obj OBJ_;
		Ent_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Ent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Ent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ent"); }

		virtual Void remove( );
		Dynamic remove_dyn();

		virtual Void swap( ::graphite::Comp _component);
		Dynamic swap_dyn();

		virtual ::graphite::Comp add( ::graphite::Comp _component);
		Dynamic add_dyn();

		::haxe::ds::EnumValueMap componentHash;
};

} // end namespace graphite

#endif /* INCLUDED_graphite_Ent */ 

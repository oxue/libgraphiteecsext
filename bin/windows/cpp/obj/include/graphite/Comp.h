#ifndef INCLUDED_graphite_Comp
#define INCLUDED_graphite_Comp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS1(graphite,Ent)
HX_DECLARE_CLASS2(graphite,std,StdComp)
namespace graphite{


class HXCPP_CLASS_ATTRIBUTES  Comp_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Comp_obj OBJ_;
		Comp_obj();
		Void __construct(::graphite::std::StdComp _id);

	public:
		static hx::ObjectPtr< Comp_obj > __new(::graphite::std::StdComp _id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Comp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Comp"); }

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void cache( );
		Dynamic cache_dyn();

		virtual Void load( );
		Dynamic load_dyn();

		virtual ::graphite::Comp getComponentCache( ::graphite::std::StdComp _id);
		Dynamic getComponentCache_dyn();

		Array< ::Dynamic > dependencies;
		bool remove;
		::graphite::std::StdComp id;
		::graphite::Ent entity;
};

} // end namespace graphite

#endif /* INCLUDED_graphite_Comp */ 

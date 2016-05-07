#ifndef INCLUDED_Factory
#define INCLUDED_Factory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Factory)
HX_DECLARE_CLASS1(graphite,Ent)


class HXCPP_CLASS_ATTRIBUTES  Factory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Factory_obj OBJ_;
		Factory_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Factory_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Factory_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Factory"); }

		static ::graphite::Ent createCircle( hx::Null< Float >  _x,hx::Null< Float >  _y,hx::Null< int >  _radius,hx::Null< int >  _color);
		static Dynamic createCircle_dyn();

};


#endif /* INCLUDED_Factory */ 

#ifndef INCLUDED_graphite_collections_Cons
#define INCLUDED_graphite_collections_Cons

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(graphite,collections,Cons)
namespace graphite{
namespace collections{


class HXCPP_CLASS_ATTRIBUTES  Cons_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Cons_obj OBJ_;
		Cons_obj();
		Void __construct(Dynamic _first,::graphite::collections::Cons _rest);

	public:
		static hx::ObjectPtr< Cons_obj > __new(Dynamic _first,::graphite::collections::Cons _rest);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Cons_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Cons"); }

		virtual Dynamic eight( );
		Dynamic eight_dyn();

		virtual Dynamic seventh( );
		Dynamic seventh_dyn();

		virtual Dynamic sixth( );
		Dynamic sixth_dyn();

		virtual Dynamic fifth( );
		Dynamic fifth_dyn();

		virtual Dynamic fourth( );
		Dynamic fourth_dyn();

		virtual Dynamic third( );
		Dynamic third_dyn();

		virtual Dynamic second( );
		Dynamic second_dyn();

		::graphite::collections::Cons rest;
		Dynamic first;
		static ::graphite::collections::Cons list( Dynamic _values);
		static Dynamic list_dyn();

};

} // end namespace graphite
} // end namespace collections

#endif /* INCLUDED_graphite_collections_Cons */ 

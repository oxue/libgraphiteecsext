#ifndef INCLUDED_graphite_KC8
#define INCLUDED_graphite_KC8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS1(graphite,KC8)
HX_DECLARE_CLASS1(graphite,State)
HX_DECLARE_CLASS1(graphite,StateManager)
HX_DECLARE_CLASS1(graphite,SubManager)
namespace graphite{


class HXCPP_CLASS_ATTRIBUTES  KC8_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KC8_obj OBJ_;
		KC8_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< KC8_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~KC8_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("KC8"); }

		static ::graphite::SubManager subManager;
		static ::graphite::StateManager stateManager;
		static Void init( ::graphite::State _state);
		static Dynamic init_dyn();

		static Void update( ::flash::events::Event e);
		static Dynamic update_dyn();

};

} // end namespace graphite

#endif /* INCLUDED_graphite_KC8 */ 

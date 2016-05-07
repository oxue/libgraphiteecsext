#ifndef INCLUDED_graphite_State
#define INCLUDED_graphite_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(graphite,State)
namespace graphite{


class HXCPP_CLASS_ATTRIBUTES  State_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef State_obj OBJ_;
		State_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< State_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~State_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("State"); }

		virtual Void requestChange( ::graphite::State _state);
		Dynamic requestChange_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void load( );
		Dynamic load_dyn();

		::graphite::State targetState;
};

} // end namespace graphite

#endif /* INCLUDED_graphite_State */ 

#ifndef INCLUDED_graphite_ui_KC8Object
#define INCLUDED_graphite_ui_KC8Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(graphite,ui,KC8Object)
namespace graphite{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  KC8Object_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef KC8Object_obj OBJ_;
		KC8Object_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< KC8Object_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~KC8Object_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("KC8Object"); }

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void load( );
		Dynamic load_dyn();

};

} // end namespace graphite
} // end namespace ui

#endif /* INCLUDED_graphite_ui_KC8Object */ 

#ifndef INCLUDED_graphite_ui_KC8ObjectContainer
#define INCLUDED_graphite_ui_KC8ObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/ui/KC8Object.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(graphite,ui,KC8Object)
HX_DECLARE_CLASS2(graphite,ui,KC8ObjectContainer)
namespace graphite{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  KC8ObjectContainer_obj : public ::graphite::ui::KC8Object_obj{
	public:
		typedef ::graphite::ui::KC8Object_obj super;
		typedef KC8ObjectContainer_obj OBJ_;
		KC8ObjectContainer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< KC8ObjectContainer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~KC8ObjectContainer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("KC8ObjectContainer"); }

		virtual Void unload( );

		virtual ::graphite::ui::KC8Object addKC8Object( ::graphite::ui::KC8Object _o,hx::Null< int >  _x,hx::Null< int >  _y);
		Dynamic addKC8Object_dyn();

		virtual Void load( );

		Array< ::Dynamic > children;
};

} // end namespace graphite
} // end namespace ui

#endif /* INCLUDED_graphite_ui_KC8ObjectContainer */ 

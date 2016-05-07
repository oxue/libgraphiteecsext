#ifndef INCLUDED_DebugMenu
#define INCLUDED_DebugMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/ui/KC8Pane.h>
HX_DECLARE_CLASS0(DebugMenu)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(graphite,ui,KC8Frame)
HX_DECLARE_CLASS2(graphite,ui,KC8Object)
HX_DECLARE_CLASS2(graphite,ui,KC8ObjectContainer)
HX_DECLARE_CLASS2(graphite,ui,KC8Pane)


class HXCPP_CLASS_ATTRIBUTES  DebugMenu_obj : public ::graphite::ui::KC8Pane_obj{
	public:
		typedef ::graphite::ui::KC8Pane_obj super;
		typedef DebugMenu_obj OBJ_;
		DebugMenu_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DebugMenu_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DebugMenu_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DebugMenu"); }

		virtual Void reAdd( );
		Dynamic reAdd_dyn();

};


#endif /* INCLUDED_DebugMenu */ 

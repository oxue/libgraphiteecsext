#ifndef INCLUDED_graphite_ui_KC8Pane
#define INCLUDED_graphite_ui_KC8Pane

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/ui/KC8Frame.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(graphite,ui,KC8Button)
HX_DECLARE_CLASS2(graphite,ui,KC8Frame)
HX_DECLARE_CLASS2(graphite,ui,KC8Object)
HX_DECLARE_CLASS2(graphite,ui,KC8ObjectContainer)
HX_DECLARE_CLASS2(graphite,ui,KC8Pane)
namespace graphite{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  KC8Pane_obj : public ::graphite::ui::KC8Frame_obj{
	public:
		typedef ::graphite::ui::KC8Frame_obj super;
		typedef KC8Pane_obj OBJ_;
		KC8Pane_obj();
		Void __construct(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height,hx::Null< bool >  __o__closeButton);

	public:
		static hx::ObjectPtr< KC8Pane_obj > __new(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height,hx::Null< bool >  __o__closeButton);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~KC8Pane_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("KC8Pane"); }

		virtual Void mouseDown( ::flash::events::MouseEvent e);
		Dynamic mouseDown_dyn();

		virtual Void mouseUp( ::flash::events::MouseEvent e);
		Dynamic mouseUp_dyn();

		virtual Void unload( );

		virtual Void KC8PaneUnload( ::graphite::ui::KC8Button b);
		Dynamic KC8PaneUnload_dyn();

};

} // end namespace graphite
} // end namespace ui

#endif /* INCLUDED_graphite_ui_KC8Pane */ 

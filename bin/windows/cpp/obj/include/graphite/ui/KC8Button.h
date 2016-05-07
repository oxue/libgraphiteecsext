#ifndef INCLUDED_graphite_ui_KC8Button
#define INCLUDED_graphite_ui_KC8Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/ui/KC8Object.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(graphite,ui,KC8Button)
HX_DECLARE_CLASS2(graphite,ui,KC8Object)
namespace graphite{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  KC8Button_obj : public ::graphite::ui::KC8Object_obj{
	public:
		typedef ::graphite::ui::KC8Object_obj super;
		typedef KC8Button_obj OBJ_;
		KC8Button_obj();
		Void __construct(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height,Dynamic m__callback);

	public:
		static hx::ObjectPtr< KC8Button_obj > __new(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height,Dynamic m__callback);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~KC8Button_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("KC8Button"); }

		virtual Void release( ::flash::events::MouseEvent e);
		Dynamic release_dyn();

		virtual Void down( ::flash::events::MouseEvent e);
		Dynamic down_dyn();

		virtual Void unload( );

		virtual Void load( );

		virtual Void rollOver( ::flash::events::MouseEvent e);
		Dynamic rollOver_dyn();

		virtual Void rollOut( ::flash::events::MouseEvent e);
		Dynamic rollOut_dyn();

		virtual ::String get_label( );
		Dynamic get_label_dyn();

		bool over;
		::flash::display::Shape darken;
		Dynamic mcallback;
		Dynamic &mcallback_dyn() { return mcallback;}
		::flash::display::Shape background;
		::flash::text::TextField label;
};

} // end namespace graphite
} // end namespace ui

#endif /* INCLUDED_graphite_ui_KC8Button */ 

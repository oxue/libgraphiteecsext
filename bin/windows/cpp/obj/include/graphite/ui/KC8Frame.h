#ifndef INCLUDED_graphite_ui_KC8Frame
#define INCLUDED_graphite_ui_KC8Frame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/ui/KC8ObjectContainer.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(graphite,ui,KC8Frame)
HX_DECLARE_CLASS2(graphite,ui,KC8Object)
HX_DECLARE_CLASS2(graphite,ui,KC8ObjectContainer)
namespace graphite{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  KC8Frame_obj : public ::graphite::ui::KC8ObjectContainer_obj{
	public:
		typedef ::graphite::ui::KC8ObjectContainer_obj super;
		typedef KC8Frame_obj OBJ_;
		KC8Frame_obj();
		Void __construct(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height);

	public:
		static hx::ObjectPtr< KC8Frame_obj > __new(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~KC8Frame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("KC8Frame"); }

		::flash::text::TextField label;
		::flash::display::Sprite background;
};

} // end namespace graphite
} // end namespace ui

#endif /* INCLUDED_graphite_ui_KC8Frame */ 

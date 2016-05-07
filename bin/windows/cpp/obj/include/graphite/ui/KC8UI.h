#ifndef INCLUDED_graphite_ui_KC8UI
#define INCLUDED_graphite_ui_KC8UI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,filters,BitmapFilter)
HX_DECLARE_CLASS2(flash,filters,DropShadowFilter)
HX_DECLARE_CLASS2(flash,filters,GlowFilter)
HX_DECLARE_CLASS2(flash,text,TextFormat)
HX_DECLARE_CLASS2(graphite,io,BinaryLoader)
HX_DECLARE_CLASS2(graphite,ui,KC8UI)
namespace graphite{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  KC8UI_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KC8UI_obj OBJ_;
		KC8UI_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< KC8UI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~KC8UI_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("KC8UI"); }

		static Dynamic configOptions;
		static ::flash::text::TextFormat textFormat;
		static ::flash::text::TextFormat textFormatLeft;
		static ::flash::filters::GlowFilter glowFilter;
		static Dynamic mcallback;
		static Dynamic &mcallback_dyn() { return mcallback;}
		static ::graphite::io::BinaryLoader binloader;
		static Void init( Dynamic m__callback);
		static Dynamic init_dyn();

		static Void configReady( );
		static Dynamic configReady_dyn();

};

} // end namespace graphite
} // end namespace ui

#endif /* INCLUDED_graphite_ui_KC8UI */ 

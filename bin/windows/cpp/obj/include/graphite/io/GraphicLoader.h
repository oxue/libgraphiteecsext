#ifndef INCLUDED_graphite_io_GraphicLoader
#define INCLUDED_graphite_io_GraphicLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Loader)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,net,URLRequest)
HX_DECLARE_CLASS2(graphite,io,GraphicLoader)
namespace graphite{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  GraphicLoader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicLoader_obj OBJ_;
		GraphicLoader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GraphicLoader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GraphicLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GraphicLoader"); }

		virtual Void done( ::flash::events::Event e);
		Dynamic done_dyn();

		virtual Void load( ::String _url,Dynamic m__callback);
		Dynamic load_dyn();

		::flash::display::BitmapData data;
		Dynamic mcallback;
		Dynamic &mcallback_dyn() { return mcallback;}
		::flash::display::Loader loader;
		::flash::net::URLRequest req;
};

} // end namespace graphite
} // end namespace io

#endif /* INCLUDED_graphite_io_GraphicLoader */ 

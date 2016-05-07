#ifndef INCLUDED_graphite_io_BinaryLoader
#define INCLUDED_graphite_io_BinaryLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,net,URLLoader)
HX_DECLARE_CLASS2(flash,net,URLRequest)
HX_DECLARE_CLASS2(graphite,io,BinaryLoader)
namespace graphite{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  BinaryLoader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BinaryLoader_obj OBJ_;
		BinaryLoader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BinaryLoader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BinaryLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BinaryLoader"); }

		virtual Void loadComplete( ::flash::events::Event e);
		Dynamic loadComplete_dyn();

		virtual Void load( ::String _url,Dynamic m__callback);
		Dynamic load_dyn();

		::String data;
		Dynamic m_callback;
		Dynamic &m_callback_dyn() { return m_callback;}
		::flash::net::URLRequest request;
		::flash::net::URLLoader loader;
};

} // end namespace graphite
} // end namespace io

#endif /* INCLUDED_graphite_io_BinaryLoader */ 

#include <hxcpp.h>

#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Loader
#include <flash/display/Loader.h>
#endif
#ifndef INCLUDED_flash_display_LoaderInfo
#include <flash/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_net_URLLoader
#include <flash/net/URLLoader.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_system_LoaderContext
#include <flash/system/LoaderContext.h>
#endif
#ifndef INCLUDED_graphite_io_GraphicLoader
#include <graphite/io/GraphicLoader.h>
#endif
namespace graphite{
namespace io{

Void GraphicLoader_obj::__construct()
{
HX_STACK_PUSH("GraphicLoader::new","graphite/io/GraphicLoader.hx",24);
{
	HX_STACK_LINE(25)
	this->req = ::flash::net::URLRequest_obj::__new(null());
	HX_STACK_LINE(26)
	this->loader = ::flash::display::Loader_obj::__new();
}
;
	return null();
}

GraphicLoader_obj::~GraphicLoader_obj() { }

Dynamic GraphicLoader_obj::__CreateEmpty() { return  new GraphicLoader_obj; }
hx::ObjectPtr< GraphicLoader_obj > GraphicLoader_obj::__new()
{  hx::ObjectPtr< GraphicLoader_obj > result = new GraphicLoader_obj();
	result->__construct();
	return result;}

Dynamic GraphicLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicLoader_obj > result = new GraphicLoader_obj();
	result->__construct();
	return result;}

Void GraphicLoader_obj::done( ::flash::events::Event e){
{
		HX_STACK_PUSH("GraphicLoader::done","graphite/io/GraphicLoader.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(39)
		this->data = (hx::TCast< flash::display::Bitmap >::cast(this->loader->content))->bitmapData;
		HX_STACK_LINE(40)
		this->mcallback();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GraphicLoader_obj,done,(void))

Void GraphicLoader_obj::load( ::String _url,Dynamic m__callback){
{
		HX_STACK_PUSH("GraphicLoader::load","graphite/io/GraphicLoader.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_url,"_url");
		HX_STACK_ARG(m__callback,"m__callback");
		HX_STACK_LINE(31)
		this->req->url = _url;
		HX_STACK_LINE(32)
		this->mcallback = m__callback;
		HX_STACK_LINE(33)
		this->loader->contentLoaderInfo->addEventListener(::flash::events::Event_obj::COMPLETE,this->done_dyn(),null(),null(),null());
		HX_STACK_LINE(34)
		this->loader->load(this->req,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicLoader_obj,load,(void))


GraphicLoader_obj::GraphicLoader_obj()
{
}

void GraphicLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicLoader);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(mcallback,"mcallback");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_MEMBER_NAME(req,"req");
	HX_MARK_END_CLASS();
}

void GraphicLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(mcallback,"mcallback");
	HX_VISIT_MEMBER_NAME(loader,"loader");
	HX_VISIT_MEMBER_NAME(req,"req");
}

Dynamic GraphicLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"req") ) { return req; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return done_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mcallback") ) { return mcallback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"req") ) { req=inValue.Cast< ::flash::net::URLRequest >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::flash::display::Loader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mcallback") ) { mcallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("loader"));
	outFields->push(HX_CSTRING("req"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("done"),
	HX_CSTRING("load"),
	HX_CSTRING("data"),
	HX_CSTRING("mcallback"),
	HX_CSTRING("loader"),
	HX_CSTRING("req"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicLoader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicLoader_obj::__mClass,"__mClass");
};

Class GraphicLoader_obj::__mClass;

void GraphicLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.io.GraphicLoader"), hx::TCanCast< GraphicLoader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GraphicLoader_obj::__boot()
{
}

} // end namespace graphite
} // end namespace io

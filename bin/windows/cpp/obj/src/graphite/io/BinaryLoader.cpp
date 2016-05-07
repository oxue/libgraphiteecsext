#include <hxcpp.h>

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
#ifndef INCLUDED_graphite_io_BinaryLoader
#include <graphite/io/BinaryLoader.h>
#endif
namespace graphite{
namespace io{

Void BinaryLoader_obj::__construct()
{
HX_STACK_PUSH("BinaryLoader::new","graphite/io/BinaryLoader.hx",21);
{
	HX_STACK_LINE(22)
	this->data = ::String(HX_CSTRING(""));
	HX_STACK_LINE(23)
	this->loader = ::flash::net::URLLoader_obj::__new(null());
}
;
	return null();
}

BinaryLoader_obj::~BinaryLoader_obj() { }

Dynamic BinaryLoader_obj::__CreateEmpty() { return  new BinaryLoader_obj; }
hx::ObjectPtr< BinaryLoader_obj > BinaryLoader_obj::__new()
{  hx::ObjectPtr< BinaryLoader_obj > result = new BinaryLoader_obj();
	result->__construct();
	return result;}

Dynamic BinaryLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BinaryLoader_obj > result = new BinaryLoader_obj();
	result->__construct();
	return result;}

Void BinaryLoader_obj::loadComplete( ::flash::events::Event e){
{
		HX_STACK_PUSH("BinaryLoader::loadComplete","graphite/io/BinaryLoader.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(36)
		this->data = this->loader->data;
		HX_STACK_LINE(37)
		this->m_callback();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BinaryLoader_obj,loadComplete,(void))

Void BinaryLoader_obj::load( ::String _url,Dynamic m__callback){
{
		HX_STACK_PUSH("BinaryLoader::load","graphite/io/BinaryLoader.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_url,"_url");
		HX_STACK_ARG(m__callback,"m__callback");
		HX_STACK_LINE(28)
		this->m_callback = m__callback;
		HX_STACK_LINE(29)
		this->request = ::flash::net::URLRequest_obj::__new(_url);
		HX_STACK_LINE(30)
		this->loader->addEventListener(::flash::events::Event_obj::COMPLETE,this->loadComplete_dyn(),null(),null(),null());
		HX_STACK_LINE(31)
		this->loader->load(this->request);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BinaryLoader_obj,load,(void))


BinaryLoader_obj::BinaryLoader_obj()
{
}

void BinaryLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BinaryLoader);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(m_callback,"m_callback");
	HX_MARK_MEMBER_NAME(request,"request");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_END_CLASS();
}

void BinaryLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(m_callback,"m_callback");
	HX_VISIT_MEMBER_NAME(request,"request");
	HX_VISIT_MEMBER_NAME(loader,"loader");
}

Dynamic BinaryLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return request; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_callback") ) { return m_callback; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadComplete") ) { return loadComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BinaryLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::flash::net::URLLoader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { request=inValue.Cast< ::flash::net::URLRequest >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_callback") ) { m_callback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BinaryLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("request"));
	outFields->push(HX_CSTRING("loader"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadComplete"),
	HX_CSTRING("load"),
	HX_CSTRING("data"),
	HX_CSTRING("m_callback"),
	HX_CSTRING("request"),
	HX_CSTRING("loader"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BinaryLoader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BinaryLoader_obj::__mClass,"__mClass");
};

Class BinaryLoader_obj::__mClass;

void BinaryLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.io.BinaryLoader"), hx::TCanCast< BinaryLoader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BinaryLoader_obj::__boot()
{
}

} // end namespace graphite
} // end namespace io

#include <hxcpp.h>

#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_filters_DropShadowFilter
#include <flash/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_flash_filters_GlowFilter
#include <flash/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_graphite_io_BinaryLoader
#include <graphite/io/BinaryLoader.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8UI
#include <graphite/ui/KC8UI.h>
#endif
#ifndef INCLUDED_haxe_Json
#include <haxe/Json.h>
#endif
namespace graphite{
namespace ui{

Void KC8UI_obj::__construct()
{
	return null();
}

KC8UI_obj::~KC8UI_obj() { }

Dynamic KC8UI_obj::__CreateEmpty() { return  new KC8UI_obj; }
hx::ObjectPtr< KC8UI_obj > KC8UI_obj::__new()
{  hx::ObjectPtr< KC8UI_obj > result = new KC8UI_obj();
	result->__construct();
	return result;}

Dynamic KC8UI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KC8UI_obj > result = new KC8UI_obj();
	result->__construct();
	return result;}

Dynamic KC8UI_obj::configOptions;

::flash::text::TextFormat KC8UI_obj::textFormat;

::flash::text::TextFormat KC8UI_obj::textFormatLeft;

::flash::filters::GlowFilter KC8UI_obj::glowFilter;

Dynamic KC8UI_obj::mcallback;

::graphite::io::BinaryLoader KC8UI_obj::binloader;

Void KC8UI_obj::init( Dynamic m__callback){
{
		HX_STACK_PUSH("KC8UI::init","graphite/ui/KC8UI.hx",26);
		HX_STACK_ARG(m__callback,"m__callback");
		HX_STACK_LINE(27)
		::graphite::ui::KC8UI_obj::mcallback = m__callback;
		HX_STACK_LINE(28)
		::graphite::ui::KC8UI_obj::binloader = ::graphite::io::BinaryLoader_obj::__new();
		HX_STACK_LINE(29)
		::graphite::ui::KC8UI_obj::binloader->load(HX_CSTRING("config.json"),::graphite::ui::KC8UI_obj::configReady_dyn());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KC8UI_obj,init,(void))

Void KC8UI_obj::configReady( ){
{
		HX_STACK_PUSH("KC8UI::configReady","graphite/ui/KC8UI.hx",33);
		HX_STACK_LINE(34)
		::graphite::ui::KC8UI_obj::configOptions = ::haxe::Json_obj::parse(::graphite::ui::KC8UI_obj::binloader->data);
		HX_STACK_LINE(35)
		::graphite::ui::KC8UI_obj::textFormat = ::flash::text::TextFormat_obj::__new(HX_CSTRING("verdana"),(int)12,::graphite::ui::KC8UI_obj::configOptions->__Field(HX_CSTRING("text_color"),true),null(),null(),null(),null(),null(),::flash::text::TextFormatAlign_obj::CENTER,null(),null(),null(),null());
		HX_STACK_LINE(36)
		::graphite::ui::KC8UI_obj::textFormatLeft = ::flash::text::TextFormat_obj::__new(HX_CSTRING("verdana"),(int)12,::graphite::ui::KC8UI_obj::configOptions->__Field(HX_CSTRING("text_color"),true),null(),null(),null(),null(),null(),::flash::text::TextFormatAlign_obj::LEFT,null(),null(),null(),null());
		HX_STACK_LINE(37)
		::graphite::ui::KC8UI_obj::glowFilter = ::flash::filters::GlowFilter_obj::__new((int)0,0.7,(int)10,(int)10,(int)1,(int)5,null(),null());
		HX_STACK_LINE(38)
		::graphite::ui::KC8UI_obj::mcallback();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(KC8UI_obj,configReady,(void))


KC8UI_obj::KC8UI_obj()
{
}

void KC8UI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KC8UI);
	HX_MARK_END_CLASS();
}

void KC8UI_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic KC8UI_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mcallback") ) { return mcallback; }
		if (HX_FIELD_EQ(inName,"binloader") ) { return binloader; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { return textFormat; }
		if (HX_FIELD_EQ(inName,"glowFilter") ) { return glowFilter; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"configReady") ) { return configReady_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"configOptions") ) { return configOptions; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"textFormatLeft") ) { return textFormatLeft; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KC8UI_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"mcallback") ) { mcallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"binloader") ) { binloader=inValue.Cast< ::graphite::io::BinaryLoader >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { textFormat=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glowFilter") ) { glowFilter=inValue.Cast< ::flash::filters::GlowFilter >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"configOptions") ) { configOptions=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"textFormatLeft") ) { textFormatLeft=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KC8UI_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("configOptions"),
	HX_CSTRING("textFormat"),
	HX_CSTRING("textFormatLeft"),
	HX_CSTRING("glowFilter"),
	HX_CSTRING("mcallback"),
	HX_CSTRING("binloader"),
	HX_CSTRING("init"),
	HX_CSTRING("configReady"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KC8UI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KC8UI_obj::configOptions,"configOptions");
	HX_MARK_MEMBER_NAME(KC8UI_obj::textFormat,"textFormat");
	HX_MARK_MEMBER_NAME(KC8UI_obj::textFormatLeft,"textFormatLeft");
	HX_MARK_MEMBER_NAME(KC8UI_obj::glowFilter,"glowFilter");
	HX_MARK_MEMBER_NAME(KC8UI_obj::mcallback,"mcallback");
	HX_MARK_MEMBER_NAME(KC8UI_obj::binloader,"binloader");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KC8UI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KC8UI_obj::configOptions,"configOptions");
	HX_VISIT_MEMBER_NAME(KC8UI_obj::textFormat,"textFormat");
	HX_VISIT_MEMBER_NAME(KC8UI_obj::textFormatLeft,"textFormatLeft");
	HX_VISIT_MEMBER_NAME(KC8UI_obj::glowFilter,"glowFilter");
	HX_VISIT_MEMBER_NAME(KC8UI_obj::mcallback,"mcallback");
	HX_VISIT_MEMBER_NAME(KC8UI_obj::binloader,"binloader");
};

Class KC8UI_obj::__mClass;

void KC8UI_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.ui.KC8UI"), hx::TCanCast< KC8UI_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void KC8UI_obj::__boot()
{
}

} // end namespace graphite
} // end namespace ui

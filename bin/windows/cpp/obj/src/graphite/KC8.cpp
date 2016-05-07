#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
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
#ifndef INCLUDED_graphite_KC8
#include <graphite/KC8.h>
#endif
#ifndef INCLUDED_graphite_State
#include <graphite/State.h>
#endif
#ifndef INCLUDED_graphite_StateManager
#include <graphite/StateManager.h>
#endif
#ifndef INCLUDED_graphite_SubManager
#include <graphite/SubManager.h>
#endif
namespace graphite{

Void KC8_obj::__construct()
{
	return null();
}

KC8_obj::~KC8_obj() { }

Dynamic KC8_obj::__CreateEmpty() { return  new KC8_obj; }
hx::ObjectPtr< KC8_obj > KC8_obj::__new()
{  hx::ObjectPtr< KC8_obj > result = new KC8_obj();
	result->__construct();
	return result;}

Dynamic KC8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KC8_obj > result = new KC8_obj();
	result->__construct();
	return result;}

::graphite::SubManager KC8_obj::subManager;

::graphite::StateManager KC8_obj::stateManager;

Void KC8_obj::init( ::graphite::State _state){
{
		HX_STACK_PUSH("KC8::init","graphite/KC8.hx",17);
		HX_STACK_ARG(_state,"_state");
		HX_STACK_LINE(18)
		::graphite::KC8_obj::subManager = ::graphite::SubManager_obj::__new();
		HX_STACK_LINE(19)
		::graphite::KC8_obj::stateManager = ::graphite::StateManager_obj::__new(_state);
		HX_STACK_LINE(20)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::Event_obj::ENTER_FRAME,::graphite::KC8_obj::update_dyn(),null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KC8_obj,init,(void))

Void KC8_obj::update( ::flash::events::Event e){
{
		HX_STACK_PUSH("KC8::update","graphite/KC8.hx",24);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(25)
		::graphite::KC8_obj::subManager->update();
		HX_STACK_LINE(26)
		::graphite::KC8_obj::stateManager->currentState->update();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(KC8_obj,update,(void))


KC8_obj::KC8_obj()
{
}

void KC8_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KC8);
	HX_MARK_END_CLASS();
}

void KC8_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic KC8_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"subManager") ) { return subManager; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stateManager") ) { return stateManager; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KC8_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"subManager") ) { subManager=inValue.Cast< ::graphite::SubManager >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stateManager") ) { stateManager=inValue.Cast< ::graphite::StateManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KC8_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("subManager"),
	HX_CSTRING("stateManager"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KC8_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KC8_obj::subManager,"subManager");
	HX_MARK_MEMBER_NAME(KC8_obj::stateManager,"stateManager");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KC8_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KC8_obj::subManager,"subManager");
	HX_VISIT_MEMBER_NAME(KC8_obj::stateManager,"stateManager");
};

Class KC8_obj::__mClass;

void KC8_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.KC8"), hx::TCanCast< KC8_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void KC8_obj::__boot()
{
}

} // end namespace graphite

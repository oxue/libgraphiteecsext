#include <hxcpp.h>

#ifndef INCLUDED_DebugMenu
#include <DebugMenu.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8Frame
#include <graphite/ui/KC8Frame.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8Object
#include <graphite/ui/KC8Object.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8ObjectContainer
#include <graphite/ui/KC8ObjectContainer.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8Pane
#include <graphite/ui/KC8Pane.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif

Void DebugMenu_obj::__construct()
{
HX_STACK_PUSH("DebugMenu::new","DebugMenu.hx",14);
{
	HX_STACK_LINE(15)
	super::__construct(HX_CSTRING("debug"),(int)400,(int)300,false);
	HX_STACK_LINE(16)
	::haxe::Timer_obj::delay(this->reAdd_dyn(),(int)1000);
}
;
	return null();
}

DebugMenu_obj::~DebugMenu_obj() { }

Dynamic DebugMenu_obj::__CreateEmpty() { return  new DebugMenu_obj; }
hx::ObjectPtr< DebugMenu_obj > DebugMenu_obj::__new()
{  hx::ObjectPtr< DebugMenu_obj > result = new DebugMenu_obj();
	result->__construct();
	return result;}

Dynamic DebugMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebugMenu_obj > result = new DebugMenu_obj();
	result->__construct();
	return result;}

Void DebugMenu_obj::reAdd( ){
{
		HX_STACK_PUSH("DebugMenu::reAdd","DebugMenu.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		this->get_parent()->addChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(22)
		::haxe::Timer_obj::delay(this->reAdd_dyn(),(int)1000);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebugMenu_obj,reAdd,(void))


DebugMenu_obj::DebugMenu_obj()
{
}

void DebugMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebugMenu);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DebugMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DebugMenu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reAdd") ) { return reAdd_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DebugMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DebugMenu_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("reAdd"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebugMenu_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebugMenu_obj::__mClass,"__mClass");
};

Class DebugMenu_obj::__mClass;

void DebugMenu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DebugMenu"), hx::TCanCast< DebugMenu_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DebugMenu_obj::__boot()
{
}


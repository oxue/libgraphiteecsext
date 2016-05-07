#include <hxcpp.h>

#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
#ifndef INCLUDED_graphite_ui_KC8Object
#include <graphite/ui/KC8Object.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8ObjectContainer
#include <graphite/ui/KC8ObjectContainer.h>
#endif
namespace graphite{
namespace ui{

Void KC8Object_obj::__construct()
{
HX_STACK_PUSH("KC8Object::new","graphite/ui/KC8Object.hx",13);
{
	HX_STACK_LINE(13)
	super::__construct();
}
;
	return null();
}

KC8Object_obj::~KC8Object_obj() { }

Dynamic KC8Object_obj::__CreateEmpty() { return  new KC8Object_obj; }
hx::ObjectPtr< KC8Object_obj > KC8Object_obj::__new()
{  hx::ObjectPtr< KC8Object_obj > result = new KC8Object_obj();
	result->__construct();
	return result;}

Dynamic KC8Object_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KC8Object_obj > result = new KC8Object_obj();
	result->__construct();
	return result;}

Void KC8Object_obj::unload( ){
{
		HX_STACK_PUSH("KC8Object::unload","graphite/ui/KC8Object.hx",23);
		HX_STACK_THIS(this);
		HX_STACK_LINE(24)
		::graphite::ui::KC8ObjectContainer gparent = hx::TCast< graphite::ui::KC8ObjectContainer >::cast(this->get_parent());		HX_STACK_VAR(gparent,"gparent");
		HX_STACK_LINE(25)
		int index = ::flash::_Vector::Vector_Impl__obj::lastIndexOf(gparent->children,hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(26)
		gparent->children[index] = gparent->children->__get((gparent->children->__Field(HX_CSTRING("length"),true) - (int)1)).StaticCast< ::graphite::ui::KC8Object >();
		HX_STACK_LINE(27)
		gparent->children->__Field(HX_CSTRING("pop"),true)();
		HX_STACK_LINE(28)
		this->get_parent()->removeChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(KC8Object_obj,unload,(void))

Void KC8Object_obj::load( ){
{
		HX_STACK_PUSH("KC8Object::load","graphite/ui/KC8Object.hx",18);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(KC8Object_obj,load,(void))


KC8Object_obj::KC8Object_obj()
{
}

void KC8Object_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KC8Object);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KC8Object_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic KC8Object_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KC8Object_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void KC8Object_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unload"),
	HX_CSTRING("load"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KC8Object_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KC8Object_obj::__mClass,"__mClass");
};

Class KC8Object_obj::__mClass;

void KC8Object_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.ui.KC8Object"), hx::TCanCast< KC8Object_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void KC8Object_obj::__boot()
{
}

} // end namespace graphite
} // end namespace ui

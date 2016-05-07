#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_graphite_Comp
#include <graphite/Comp.h>
#endif
#ifndef INCLUDED_graphite_Sub
#include <graphite/Sub.h>
#endif
#ifndef INCLUDED_graphite_collections_ObjectPool
#include <graphite/collections/ObjectPool.h>
#endif
#ifndef INCLUDED_graphite_std_CoordinateComp
#include <graphite/std/CoordinateComp.h>
#endif
#ifndef INCLUDED_graphite_std_MouseCoordComp
#include <graphite/std/MouseCoordComp.h>
#endif
#ifndef INCLUDED_graphite_std_MouseCoordSub
#include <graphite/std/MouseCoordSub.h>
#endif
#ifndef INCLUDED_graphite_std_StdComp
#include <graphite/std/StdComp.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace graphite{
namespace std{

Void MouseCoordSub_obj::__construct()
{
HX_STACK_PUSH("MouseCoordSub::new","graphite/std/MouseCoordSub.hx",21);
{
	HX_STACK_LINE(22)
	super::__construct((int)1,::graphite::std::StdComp_obj::MOUSECOORDS);
	HX_STACK_LINE(23)
	this->mouseCoords = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(24)
	this->pool = ::graphite::collections::ObjectPool_obj::__new((int)10,null());
}
;
	return null();
}

MouseCoordSub_obj::~MouseCoordSub_obj() { }

Dynamic MouseCoordSub_obj::__CreateEmpty() { return  new MouseCoordSub_obj; }
hx::ObjectPtr< MouseCoordSub_obj > MouseCoordSub_obj::__new()
{  hx::ObjectPtr< MouseCoordSub_obj > result = new MouseCoordSub_obj();
	result->__construct();
	return result;}

Dynamic MouseCoordSub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseCoordSub_obj > result = new MouseCoordSub_obj();
	result->__construct();
	return result;}

Void MouseCoordSub_obj::update( ){
{
		HX_STACK_PUSH("MouseCoordSub::update","graphite/std/MouseCoordSub.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_LINE(40)
		int i = this->mouseCoords->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(41)
		int l = i;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(42)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(44)
			::graphite::std::MouseCoordComp mouseCoord = this->mouseCoords->__get(i).StaticCast< ::graphite::std::MouseCoordComp >();		HX_STACK_VAR(mouseCoord,"mouseCoord");
			HX_STACK_LINE(45)
			if (((mouseCoord->remove == true))){
				HX_STACK_LINE(47)
				this->mouseCoords[i] = this->mouseCoords->__get(--(l)).StaticCast< ::graphite::std::MouseCoordComp >();
				HX_STACK_LINE(48)
				this->pool->alloc(mouseCoord);
				HX_STACK_LINE(49)
				continue;
			}
			HX_STACK_LINE(51)
			mouseCoord->coordinates->x = ::flash::Lib_obj::get_current()->get_mouseX();
			HX_STACK_LINE(52)
			mouseCoord->coordinates->y = ::flash::Lib_obj::get_current()->get_mouseY();
			HX_STACK_LINE(53)
			::haxe::Log_obj::trace(::flash::Lib_obj::get_current()->get_mouseX(),hx::SourceInfo(HX_CSTRING("MouseCoordSub.hx"),53,HX_CSTRING("graphite.std.MouseCoordSub"),HX_CSTRING("update")));
			HX_STACK_LINE(54)
			::haxe::Log_obj::trace(::flash::Lib_obj::get_current()->get_mouseY(),hx::SourceInfo(HX_CSTRING("MouseCoordSub.hx"),54,HX_CSTRING("graphite.std.MouseCoordSub"),HX_CSTRING("update")));
			HX_STACK_LINE(55)
			if (((bool(!(::Std_obj::is(mouseCoord->coordinates->x,hx::ClassOf< ::Float >()))) || bool(!(::Std_obj::is(mouseCoord->coordinates->x,hx::ClassOf< ::Float >())))))){
				HX_STACK_LINE(58)
				mouseCoord->coordinates->x = (int)0;
				HX_STACK_LINE(59)
				mouseCoord->coordinates->y = (int)0;
			}
			HX_STACK_LINE(61)
			if (((mouseCoord->coordinates->y > ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight()))){
				HX_STACK_LINE(62)
				mouseCoord->coordinates->y = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();
			}
			HX_STACK_LINE(63)
			if (((mouseCoord->coordinates->x > ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()))){
				HX_STACK_LINE(64)
				mouseCoord->coordinates->x = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();
			}
		}
		HX_STACK_LINE(66)
		l;
	}
return null();
}


::graphite::Comp MouseCoordSub_obj::get( ){
	HX_STACK_PUSH("MouseCoordSub::get","graphite/std/MouseCoordSub.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_LINE(29)
	::graphite::std::MouseCoordComp mouseCoord = this->pool->get();		HX_STACK_VAR(mouseCoord,"mouseCoord");
	HX_STACK_LINE(30)
	if (((mouseCoord == null()))){
		HX_STACK_LINE(31)
		mouseCoord = ::graphite::std::MouseCoordComp_obj::__new();
	}
	HX_STACK_LINE(34)
	this->mouseCoords->__Field(HX_CSTRING("push"),true)(mouseCoord);
	HX_STACK_LINE(35)
	return mouseCoord;
}



MouseCoordSub_obj::MouseCoordSub_obj()
{
}

void MouseCoordSub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseCoordSub);
	HX_MARK_MEMBER_NAME(pool,"pool");
	HX_MARK_MEMBER_NAME(mouseCoords,"mouseCoords");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MouseCoordSub_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pool,"pool");
	HX_VISIT_MEMBER_NAME(mouseCoords,"mouseCoords");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MouseCoordSub_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { return pool; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseCoords") ) { return mouseCoords; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseCoordSub_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=inValue.Cast< ::graphite::collections::ObjectPool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseCoords") ) { mouseCoords=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseCoordSub_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pool"));
	outFields->push(HX_CSTRING("mouseCoords"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("get"),
	HX_CSTRING("pool"),
	HX_CSTRING("mouseCoords"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseCoordSub_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseCoordSub_obj::__mClass,"__mClass");
};

Class MouseCoordSub_obj::__mClass;

void MouseCoordSub_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.MouseCoordSub"), hx::TCanCast< MouseCoordSub_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MouseCoordSub_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

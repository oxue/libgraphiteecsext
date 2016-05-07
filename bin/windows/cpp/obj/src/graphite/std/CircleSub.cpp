#include <hxcpp.h>

#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_Shape
#include <flash/display/Shape.h>
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
#ifndef INCLUDED_graphite_std_CircleComp
#include <graphite/std/CircleComp.h>
#endif
#ifndef INCLUDED_graphite_std_CircleSub
#include <graphite/std/CircleSub.h>
#endif
#ifndef INCLUDED_graphite_std_PositionComp
#include <graphite/std/PositionComp.h>
#endif
#ifndef INCLUDED_graphite_std_StdComp
#include <graphite/std/StdComp.h>
#endif
namespace graphite{
namespace std{

Void CircleSub_obj::__construct()
{
HX_STACK_PUSH("CircleSub::new","graphite/std/CircleSub.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct((int)10,::graphite::std::StdComp_obj::CIRCLE);
	HX_STACK_LINE(21)
	this->circles = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(22)
	this->pool = ::graphite::collections::ObjectPool_obj::__new((int)10,null());
}
;
	return null();
}

CircleSub_obj::~CircleSub_obj() { }

Dynamic CircleSub_obj::__CreateEmpty() { return  new CircleSub_obj; }
hx::ObjectPtr< CircleSub_obj > CircleSub_obj::__new()
{  hx::ObjectPtr< CircleSub_obj > result = new CircleSub_obj();
	result->__construct();
	return result;}

Dynamic CircleSub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircleSub_obj > result = new CircleSub_obj();
	result->__construct();
	return result;}

Void CircleSub_obj::update( ){
{
		HX_STACK_PUSH("CircleSub::update","graphite/std/CircleSub.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_LINE(38)
		int i = this->circles->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(39)
		int l = i;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(40)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(42)
			::graphite::std::CircleComp circle = this->circles->__get(i).StaticCast< ::graphite::std::CircleComp >();		HX_STACK_VAR(circle,"circle");
			HX_STACK_LINE(43)
			if (((circle->remove == true))){
				HX_STACK_LINE(45)
				this->circles[i] = this->circles->__get(--(l)).StaticCast< ::graphite::std::CircleComp >();
				HX_STACK_LINE(46)
				this->pool->alloc(circle);
				HX_STACK_LINE(47)
				continue;
			}
			HX_STACK_LINE(49)
			circle->shape->set_x(circle->position->x);
			HX_STACK_LINE(50)
			circle->shape->set_y(circle->position->y);
		}
		HX_STACK_LINE(52)
		l;
	}
return null();
}


::graphite::Comp CircleSub_obj::get( ){
	HX_STACK_PUSH("CircleSub::get","graphite/std/CircleSub.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	::graphite::std::CircleComp circle = this->pool->get();		HX_STACK_VAR(circle,"circle");
	HX_STACK_LINE(28)
	if (((circle == null()))){
		HX_STACK_LINE(29)
		circle = ::graphite::std::CircleComp_obj::__new((int)10,(int)0,(int)0);
	}
	HX_STACK_LINE(32)
	this->circles->__Field(HX_CSTRING("push"),true)(circle);
	HX_STACK_LINE(33)
	return circle;
}



CircleSub_obj::CircleSub_obj()
{
}

void CircleSub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CircleSub);
	HX_MARK_MEMBER_NAME(pool,"pool");
	HX_MARK_MEMBER_NAME(circles,"circles");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CircleSub_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pool,"pool");
	HX_VISIT_MEMBER_NAME(circles,"circles");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CircleSub_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 7:
		if (HX_FIELD_EQ(inName,"circles") ) { return circles; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircleSub_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=inValue.Cast< ::graphite::collections::ObjectPool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"circles") ) { circles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircleSub_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pool"));
	outFields->push(HX_CSTRING("circles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("get"),
	HX_CSTRING("pool"),
	HX_CSTRING("circles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircleSub_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircleSub_obj::__mClass,"__mClass");
};

Class CircleSub_obj::__mClass;

void CircleSub_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.CircleSub"), hx::TCanCast< CircleSub_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CircleSub_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

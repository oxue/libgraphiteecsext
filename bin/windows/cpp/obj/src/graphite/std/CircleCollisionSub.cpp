#include <hxcpp.h>

#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
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
#ifndef INCLUDED_graphite_std_CircleCollisionComp
#include <graphite/std/CircleCollisionComp.h>
#endif
#ifndef INCLUDED_graphite_std_CircleCollisionSub
#include <graphite/std/CircleCollisionSub.h>
#endif
#ifndef INCLUDED_graphite_std_CircleComp
#include <graphite/std/CircleComp.h>
#endif
#ifndef INCLUDED_graphite_std_PositionComp
#include <graphite/std/PositionComp.h>
#endif
#ifndef INCLUDED_graphite_std_StdComp
#include <graphite/std/StdComp.h>
#endif
namespace graphite{
namespace std{

Void CircleCollisionSub_obj::__construct()
{
HX_STACK_PUSH("CircleCollisionSub::new","graphite/std/CircleCollisionSub.hx",20);
{
	HX_STACK_LINE(21)
	this->circleCollisions = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(22)
	this->pool = ::graphite::collections::ObjectPool_obj::__new((int)10,null());
	HX_STACK_LINE(23)
	super::__construct((int)6,::graphite::std::StdComp_obj::CIRCLECOLLISION);
}
;
	return null();
}

CircleCollisionSub_obj::~CircleCollisionSub_obj() { }

Dynamic CircleCollisionSub_obj::__CreateEmpty() { return  new CircleCollisionSub_obj; }
hx::ObjectPtr< CircleCollisionSub_obj > CircleCollisionSub_obj::__new()
{  hx::ObjectPtr< CircleCollisionSub_obj > result = new CircleCollisionSub_obj();
	result->__construct();
	return result;}

Dynamic CircleCollisionSub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircleCollisionSub_obj > result = new CircleCollisionSub_obj();
	result->__construct();
	return result;}

Void CircleCollisionSub_obj::update( ){
{
		HX_STACK_PUSH("CircleCollisionSub::update","graphite/std/CircleCollisionSub.hx",75);
		HX_STACK_THIS(this);
		HX_STACK_LINE(76)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(77)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(78)
			this->resolve();
		}
	}
return null();
}


Void CircleCollisionSub_obj::resolve( ){
{
		HX_STACK_PUSH("CircleCollisionSub::resolve","graphite/std/CircleCollisionSub.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		int i = this->circleCollisions->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(40)
		int l = i;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(41)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(43)
			::graphite::std::CircleCollisionComp circleCollision = this->circleCollisions->__get(i).StaticCast< ::graphite::std::CircleCollisionComp >();		HX_STACK_VAR(circleCollision,"circleCollision");
			HX_STACK_LINE(44)
			if (((circleCollision->remove == true))){
				HX_STACK_LINE(46)
				this->circleCollisions[i] = this->circleCollisions->__get(--(l)).StaticCast< ::graphite::std::CircleCollisionComp >();
				HX_STACK_LINE(47)
				this->pool->alloc(circleCollision);
				HX_STACK_LINE(48)
				continue;
			}
			HX_STACK_LINE(50)
			int k = this->circleCollisions->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(51)
			while((((k)-- > (int)0))){
				HX_STACK_LINE(53)
				::graphite::std::CircleCollisionComp circleCollision2 = this->circleCollisions->__get(k).StaticCast< ::graphite::std::CircleCollisionComp >();		HX_STACK_VAR(circleCollision2,"circleCollision2");
				HX_STACK_LINE(54)
				if (((circleCollision != circleCollision2))){
					HX_STACK_LINE(56)
					Float dx = (circleCollision->position->x - circleCollision2->position->x);		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(57)
					Float dy = (circleCollision->position->y - circleCollision2->position->y);		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(58)
					Float r = (circleCollision->circle->radius + circleCollision2->circle->radius);		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(59)
					if (((((dx * dx) + (dy * dy)) < (r * r)))){
						HX_STACK_LINE(61)
						::flash::geom::Point p = ::flash::geom::Point_obj::__new(dx,dy);		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(62)
						p->normalize((r - p->get_length()));
						HX_STACK_LINE(63)
						hx::AddEq(circleCollision->position->x,(p->x * 0.5));
						HX_STACK_LINE(64)
						hx::AddEq(circleCollision->position->y,(p->y * 0.5));
						HX_STACK_LINE(65)
						hx::SubEq(circleCollision2->position->x,(p->x * 0.5));
						HX_STACK_LINE(66)
						hx::SubEq(circleCollision2->position->y,(p->y * 0.5));
					}
				}
			}
		}
		HX_STACK_LINE(71)
		l;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CircleCollisionSub_obj,resolve,(void))

::graphite::Comp CircleCollisionSub_obj::get( ){
	HX_STACK_PUSH("CircleCollisionSub::get","graphite/std/CircleCollisionSub.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(28)
	::graphite::std::CircleCollisionComp circleCollision = this->pool->get();		HX_STACK_VAR(circleCollision,"circleCollision");
	HX_STACK_LINE(29)
	if (((circleCollision == null()))){
		HX_STACK_LINE(30)
		circleCollision = ::graphite::std::CircleCollisionComp_obj::__new();
	}
	HX_STACK_LINE(33)
	this->circleCollisions->__Field(HX_CSTRING("push"),true)(circleCollision);
	HX_STACK_LINE(34)
	return circleCollision;
}



CircleCollisionSub_obj::CircleCollisionSub_obj()
{
}

void CircleCollisionSub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CircleCollisionSub);
	HX_MARK_MEMBER_NAME(pool,"pool");
	HX_MARK_MEMBER_NAME(circleCollisions,"circleCollisions");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CircleCollisionSub_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pool,"pool");
	HX_VISIT_MEMBER_NAME(circleCollisions,"circleCollisions");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CircleCollisionSub_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"circleCollisions") ) { return circleCollisions; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircleCollisionSub_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=inValue.Cast< ::graphite::collections::ObjectPool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"circleCollisions") ) { circleCollisions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircleCollisionSub_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pool"));
	outFields->push(HX_CSTRING("circleCollisions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("resolve"),
	HX_CSTRING("get"),
	HX_CSTRING("pool"),
	HX_CSTRING("circleCollisions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircleCollisionSub_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircleCollisionSub_obj::__mClass,"__mClass");
};

Class CircleCollisionSub_obj::__mClass;

void CircleCollisionSub_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.CircleCollisionSub"), hx::TCanCast< CircleCollisionSub_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CircleCollisionSub_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

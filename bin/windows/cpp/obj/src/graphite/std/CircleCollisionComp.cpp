#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_graphite_Comp
#include <graphite/Comp.h>
#endif
#ifndef INCLUDED_graphite_Ent
#include <graphite/Ent.h>
#endif
#ifndef INCLUDED_graphite_std_CircleCollisionComp
#include <graphite/std/CircleCollisionComp.h>
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
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
namespace graphite{
namespace std{

Void CircleCollisionComp_obj::__construct()
{
HX_STACK_PUSH("CircleCollisionComp::new","graphite/std/CircleCollisionComp.hx",16);
{
	HX_STACK_LINE(16)
	super::__construct(::graphite::std::StdComp_obj::CIRCLECOLLISION);
}
;
	return null();
}

CircleCollisionComp_obj::~CircleCollisionComp_obj() { }

Dynamic CircleCollisionComp_obj::__CreateEmpty() { return  new CircleCollisionComp_obj; }
hx::ObjectPtr< CircleCollisionComp_obj > CircleCollisionComp_obj::__new()
{  hx::ObjectPtr< CircleCollisionComp_obj > result = new CircleCollisionComp_obj();
	result->__construct();
	return result;}

Dynamic CircleCollisionComp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircleCollisionComp_obj > result = new CircleCollisionComp_obj();
	result->__construct();
	return result;}

Void CircleCollisionComp_obj::cache( ){
{
		HX_STACK_PUSH("CircleCollisionComp::cache","graphite/std/CircleCollisionComp.hx",21);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::graphite::Comp Block( ::graphite::std::CircleCollisionComp_obj *__this){
				HX_STACK_PUSH("*::closure","graphite/std/CircleCollisionComp.hx",22);
				{
					HX_STACK_LINE(22)
					::graphite::Comp component = __this->entity->componentHash->get(::graphite::std::StdComp_obj::POSITION);		HX_STACK_VAR(component,"component");
					HX_STACK_LINE(22)
					component->dependencies->__Field(HX_CSTRING("push"),true)(__this);
					HX_STACK_LINE(22)
					return component;
				}
				return null();
			}
		};
		HX_STACK_LINE(22)
		this->position = _Function_1_1::Block(this);
		struct _Function_1_2{
			inline static ::graphite::Comp Block( ::graphite::std::CircleCollisionComp_obj *__this){
				HX_STACK_PUSH("*::closure","graphite/std/CircleCollisionComp.hx",23);
				{
					HX_STACK_LINE(23)
					::graphite::Comp component = __this->entity->componentHash->get(::graphite::std::StdComp_obj::CIRCLE);		HX_STACK_VAR(component,"component");
					HX_STACK_LINE(23)
					component->dependencies->__Field(HX_CSTRING("push"),true)(__this);
					HX_STACK_LINE(23)
					return component;
				}
				return null();
			}
		};
		HX_STACK_LINE(23)
		this->circle = _Function_1_2::Block(this);
	}
return null();
}



CircleCollisionComp_obj::CircleCollisionComp_obj()
{
}

void CircleCollisionComp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CircleCollisionComp);
	HX_MARK_MEMBER_NAME(circle,"circle");
	HX_MARK_MEMBER_NAME(position,"position");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CircleCollisionComp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(circle,"circle");
	HX_VISIT_MEMBER_NAME(position,"position");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CircleCollisionComp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return circle; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircleCollisionComp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { circle=inValue.Cast< ::graphite::std::CircleComp >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::graphite::std::PositionComp >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircleCollisionComp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("circle"));
	outFields->push(HX_CSTRING("position"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cache"),
	HX_CSTRING("circle"),
	HX_CSTRING("position"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircleCollisionComp_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircleCollisionComp_obj::__mClass,"__mClass");
};

Class CircleCollisionComp_obj::__mClass;

void CircleCollisionComp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.CircleCollisionComp"), hx::TCanCast< CircleCollisionComp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CircleCollisionComp_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

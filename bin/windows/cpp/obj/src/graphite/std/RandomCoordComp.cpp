#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_graphite_Comp
#include <graphite/Comp.h>
#endif
#ifndef INCLUDED_graphite_Ent
#include <graphite/Ent.h>
#endif
#ifndef INCLUDED_graphite_std_CoordinateComp
#include <graphite/std/CoordinateComp.h>
#endif
#ifndef INCLUDED_graphite_std_RandomCoordComp
#include <graphite/std/RandomCoordComp.h>
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

Void RandomCoordComp_obj::__construct(::flash::geom::Rectangle _dimensions,hx::Null< int >  __o__timer)
{
HX_STACK_PUSH("RandomCoordComp::new","graphite/std/RandomCoordComp.hx",19);
int _timer = __o__timer.Default(40);
{
	HX_STACK_LINE(20)
	this->dimensions = _dimensions;
	HX_STACK_LINE(21)
	this->timer = _timer;
	HX_STACK_LINE(22)
	if (((this->dimensions == null()))){
		HX_STACK_LINE(23)
		this->dimensions = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,(int)800,(int)600);
	}
	HX_STACK_LINE(26)
	super::__construct(::graphite::std::StdComp_obj::RANDOMCOORDS);
}
;
	return null();
}

RandomCoordComp_obj::~RandomCoordComp_obj() { }

Dynamic RandomCoordComp_obj::__CreateEmpty() { return  new RandomCoordComp_obj; }
hx::ObjectPtr< RandomCoordComp_obj > RandomCoordComp_obj::__new(::flash::geom::Rectangle _dimensions,hx::Null< int >  __o__timer)
{  hx::ObjectPtr< RandomCoordComp_obj > result = new RandomCoordComp_obj();
	result->__construct(_dimensions,__o__timer);
	return result;}

Dynamic RandomCoordComp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RandomCoordComp_obj > result = new RandomCoordComp_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void RandomCoordComp_obj::cache( ){
{
		HX_STACK_PUSH("RandomCoordComp::cache","graphite/std/RandomCoordComp.hx",30);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::graphite::Comp Block( ::graphite::std::RandomCoordComp_obj *__this){
				HX_STACK_PUSH("*::closure","graphite/std/RandomCoordComp.hx",31);
				{
					HX_STACK_LINE(31)
					::graphite::Comp component = __this->entity->componentHash->get(::graphite::std::StdComp_obj::COORDINATES);		HX_STACK_VAR(component,"component");
					HX_STACK_LINE(31)
					component->dependencies->__Field(HX_CSTRING("push"),true)(__this);
					HX_STACK_LINE(31)
					return component;
				}
				return null();
			}
		};
		HX_STACK_LINE(30)
		this->coordinates = _Function_1_1::Block(this);
	}
return null();
}



RandomCoordComp_obj::RandomCoordComp_obj()
{
}

void RandomCoordComp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RandomCoordComp);
	HX_MARK_MEMBER_NAME(coordinates,"coordinates");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(dimensions,"dimensions");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RandomCoordComp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(coordinates,"coordinates");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(dimensions,"dimensions");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RandomCoordComp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return t; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dimensions") ) { return dimensions; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"coordinates") ) { return coordinates; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RandomCoordComp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dimensions") ) { dimensions=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"coordinates") ) { coordinates=inValue.Cast< ::graphite::std::CoordinateComp >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RandomCoordComp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("coordinates"));
	outFields->push(HX_CSTRING("t"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("dimensions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cache"),
	HX_CSTRING("coordinates"),
	HX_CSTRING("t"),
	HX_CSTRING("timer"),
	HX_CSTRING("dimensions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RandomCoordComp_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RandomCoordComp_obj::__mClass,"__mClass");
};

Class RandomCoordComp_obj::__mClass;

void RandomCoordComp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.RandomCoordComp"), hx::TCanCast< RandomCoordComp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RandomCoordComp_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

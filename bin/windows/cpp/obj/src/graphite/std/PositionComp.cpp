#include <hxcpp.h>

#ifndef INCLUDED_graphite_Comp
#include <graphite/Comp.h>
#endif
#ifndef INCLUDED_graphite_std_PositionComp
#include <graphite/std/PositionComp.h>
#endif
#ifndef INCLUDED_graphite_std_StdComp
#include <graphite/std/StdComp.h>
#endif
namespace graphite{
namespace std{

Void PositionComp_obj::__construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y)
{
HX_STACK_PUSH("PositionComp::new","graphite/std/PositionComp.hx",21);
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
{
	HX_STACK_LINE(22)
	this->x = _x;
	HX_STACK_LINE(23)
	this->y = _y;
	HX_STACK_LINE(24)
	this->velX = this->velY = this->accX = this->accY = (int)0;
	HX_STACK_LINE(25)
	this->dampX = this->dampY = (int)1;
	HX_STACK_LINE(26)
	super::__construct(::graphite::std::StdComp_obj::POSITION);
}
;
	return null();
}

PositionComp_obj::~PositionComp_obj() { }

Dynamic PositionComp_obj::__CreateEmpty() { return  new PositionComp_obj; }
hx::ObjectPtr< PositionComp_obj > PositionComp_obj::__new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y)
{  hx::ObjectPtr< PositionComp_obj > result = new PositionComp_obj();
	result->__construct(__o__x,__o__y);
	return result;}

Dynamic PositionComp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PositionComp_obj > result = new PositionComp_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


PositionComp_obj::PositionComp_obj()
{
}

void PositionComp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PositionComp);
	HX_MARK_MEMBER_NAME(dampY,"dampY");
	HX_MARK_MEMBER_NAME(dampX,"dampX");
	HX_MARK_MEMBER_NAME(accY,"accY");
	HX_MARK_MEMBER_NAME(accX,"accX");
	HX_MARK_MEMBER_NAME(velY,"velY");
	HX_MARK_MEMBER_NAME(velX,"velX");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PositionComp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dampY,"dampY");
	HX_VISIT_MEMBER_NAME(dampX,"dampX");
	HX_VISIT_MEMBER_NAME(accY,"accY");
	HX_VISIT_MEMBER_NAME(accX,"accX");
	HX_VISIT_MEMBER_NAME(velY,"velY");
	HX_VISIT_MEMBER_NAME(velX,"velX");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PositionComp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"accY") ) { return accY; }
		if (HX_FIELD_EQ(inName,"accX") ) { return accX; }
		if (HX_FIELD_EQ(inName,"velY") ) { return velY; }
		if (HX_FIELD_EQ(inName,"velX") ) { return velX; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dampY") ) { return dampY; }
		if (HX_FIELD_EQ(inName,"dampX") ) { return dampX; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PositionComp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"accY") ) { accY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"accX") ) { accX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velY") ) { velY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velX") ) { velX=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dampY") ) { dampY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dampX") ) { dampX=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PositionComp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dampY"));
	outFields->push(HX_CSTRING("dampX"));
	outFields->push(HX_CSTRING("accY"));
	outFields->push(HX_CSTRING("accX"));
	outFields->push(HX_CSTRING("velY"));
	outFields->push(HX_CSTRING("velX"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dampY"),
	HX_CSTRING("dampX"),
	HX_CSTRING("accY"),
	HX_CSTRING("accX"),
	HX_CSTRING("velY"),
	HX_CSTRING("velX"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PositionComp_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PositionComp_obj::__mClass,"__mClass");
};

Class PositionComp_obj::__mClass;

void PositionComp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.PositionComp"), hx::TCanCast< PositionComp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PositionComp_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

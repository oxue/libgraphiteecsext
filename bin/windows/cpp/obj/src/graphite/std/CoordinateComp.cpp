#include <hxcpp.h>

#ifndef INCLUDED_graphite_Comp
#include <graphite/Comp.h>
#endif
#ifndef INCLUDED_graphite_std_CoordinateComp
#include <graphite/std/CoordinateComp.h>
#endif
#ifndef INCLUDED_graphite_std_StdComp
#include <graphite/std/StdComp.h>
#endif
namespace graphite{
namespace std{

Void CoordinateComp_obj::__construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y)
{
HX_STACK_PUSH("CoordinateComp::new","graphite/std/CoordinateComp.hx",16);
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
{
	HX_STACK_LINE(17)
	super::__construct(::graphite::std::StdComp_obj::COORDINATES);
	HX_STACK_LINE(18)
	this->x = _x;
	HX_STACK_LINE(19)
	this->y = _y;
}
;
	return null();
}

CoordinateComp_obj::~CoordinateComp_obj() { }

Dynamic CoordinateComp_obj::__CreateEmpty() { return  new CoordinateComp_obj; }
hx::ObjectPtr< CoordinateComp_obj > CoordinateComp_obj::__new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y)
{  hx::ObjectPtr< CoordinateComp_obj > result = new CoordinateComp_obj();
	result->__construct(__o__x,__o__y);
	return result;}

Dynamic CoordinateComp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CoordinateComp_obj > result = new CoordinateComp_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


CoordinateComp_obj::CoordinateComp_obj()
{
}

void CoordinateComp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CoordinateComp);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CoordinateComp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CoordinateComp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CoordinateComp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CoordinateComp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoordinateComp_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoordinateComp_obj::__mClass,"__mClass");
};

Class CoordinateComp_obj::__mClass;

void CoordinateComp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.CoordinateComp"), hx::TCanCast< CoordinateComp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CoordinateComp_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

#include <hxcpp.h>

#ifndef INCLUDED_graphite_collections_Cons
#include <graphite/collections/Cons.h>
#endif
namespace graphite{
namespace collections{

Void Cons_obj::__construct(Dynamic _first,::graphite::collections::Cons _rest)
{
HX_STACK_PUSH("Cons::new","graphite/collections/Cons.hx",26);
{
	HX_STACK_LINE(27)
	this->first = _first;
	HX_STACK_LINE(28)
	this->rest = _rest;
}
;
	return null();
}

Cons_obj::~Cons_obj() { }

Dynamic Cons_obj::__CreateEmpty() { return  new Cons_obj; }
hx::ObjectPtr< Cons_obj > Cons_obj::__new(Dynamic _first,::graphite::collections::Cons _rest)
{  hx::ObjectPtr< Cons_obj > result = new Cons_obj();
	result->__construct(_first,_rest);
	return result;}

Dynamic Cons_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cons_obj > result = new Cons_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic Cons_obj::eight( ){
	HX_STACK_PUSH("Cons::eight","graphite/collections/Cons.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return this->rest->rest->rest->rest->rest->rest->rest->first;
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,eight,return )

Dynamic Cons_obj::seventh( ){
	HX_STACK_PUSH("Cons::seventh","graphite/collections/Cons.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(57)
	return this->rest->rest->rest->rest->rest->rest->first;
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,seventh,return )

Dynamic Cons_obj::sixth( ){
	HX_STACK_PUSH("Cons::sixth","graphite/collections/Cons.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_LINE(52)
	return this->rest->rest->rest->rest->rest->first;
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,sixth,return )

Dynamic Cons_obj::fifth( ){
	HX_STACK_PUSH("Cons::fifth","graphite/collections/Cons.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_LINE(47)
	return this->rest->rest->rest->rest->first;
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,fifth,return )

Dynamic Cons_obj::fourth( ){
	HX_STACK_PUSH("Cons::fourth","graphite/collections/Cons.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_LINE(42)
	return this->rest->rest->rest->first;
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,fourth,return )

Dynamic Cons_obj::third( ){
	HX_STACK_PUSH("Cons::third","graphite/collections/Cons.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(37)
	return this->rest->rest->first;
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,third,return )

Dynamic Cons_obj::second( ){
	HX_STACK_PUSH("Cons::second","graphite/collections/Cons.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_LINE(32)
	return this->rest->first;
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,second,return )

::graphite::collections::Cons Cons_obj::list( Dynamic _values){
	HX_STACK_PUSH("Cons::list","graphite/collections/Cons.hx",14);
	HX_STACK_ARG(_values,"_values");
	HX_STACK_LINE(15)
	::graphite::collections::Cons ret = ::graphite::collections::Cons_obj::__new(_values->__GetItem((_values->__Field(HX_CSTRING("length"),true) - (int)1)),null());		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(16)
	int i = (_values->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(17)
	while((((i)-- > (int)0))){
		HX_STACK_LINE(19)
		::graphite::collections::Cons c = ::graphite::collections::Cons_obj::__new(_values->__GetItem(i),ret);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(20)
		ret = c;
	}
	HX_STACK_LINE(22)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Cons_obj,list,return )


Cons_obj::Cons_obj()
{
}

void Cons_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cons);
	HX_MARK_MEMBER_NAME(rest,"rest");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_END_CLASS();
}

void Cons_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rest,"rest");
	HX_VISIT_MEMBER_NAME(first,"first");
}

Dynamic Cons_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		if (HX_FIELD_EQ(inName,"rest") ) { return rest; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"eight") ) { return eight_dyn(); }
		if (HX_FIELD_EQ(inName,"sixth") ) { return sixth_dyn(); }
		if (HX_FIELD_EQ(inName,"fifth") ) { return fifth_dyn(); }
		if (HX_FIELD_EQ(inName,"third") ) { return third_dyn(); }
		if (HX_FIELD_EQ(inName,"first") ) { return first; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fourth") ) { return fourth_dyn(); }
		if (HX_FIELD_EQ(inName,"second") ) { return second_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"seventh") ) { return seventh_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Cons_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rest") ) { rest=inValue.Cast< ::graphite::collections::Cons >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Cons_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rest"));
	outFields->push(HX_CSTRING("first"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("list"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("eight"),
	HX_CSTRING("seventh"),
	HX_CSTRING("sixth"),
	HX_CSTRING("fifth"),
	HX_CSTRING("fourth"),
	HX_CSTRING("third"),
	HX_CSTRING("second"),
	HX_CSTRING("rest"),
	HX_CSTRING("first"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cons_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cons_obj::__mClass,"__mClass");
};

Class Cons_obj::__mClass;

void Cons_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.collections.Cons"), hx::TCanCast< Cons_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Cons_obj::__boot()
{
}

} // end namespace graphite
} // end namespace collections

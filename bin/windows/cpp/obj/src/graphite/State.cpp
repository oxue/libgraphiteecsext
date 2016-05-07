#include <hxcpp.h>

#ifndef INCLUDED_graphite_State
#include <graphite/State.h>
#endif
namespace graphite{

Void State_obj::__construct()
{
HX_STACK_PUSH("State::new","graphite/State.hx",13);
{
}
;
	return null();
}

State_obj::~State_obj() { }

Dynamic State_obj::__CreateEmpty() { return  new State_obj; }
hx::ObjectPtr< State_obj > State_obj::__new()
{  hx::ObjectPtr< State_obj > result = new State_obj();
	result->__construct();
	return result;}

Dynamic State_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< State_obj > result = new State_obj();
	result->__construct();
	return result;}

Void State_obj::requestChange( ::graphite::State _state){
{
		HX_STACK_PUSH("State::requestChange","graphite/State.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_state,"_state");
		HX_STACK_LINE(39)
		this->targetState = _state;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(State_obj,requestChange,(void))

Void State_obj::unload( ){
{
		HX_STACK_PUSH("State::unload","graphite/State.hx",29);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,unload,(void))

Void State_obj::update( ){
{
		HX_STACK_PUSH("State::update","graphite/State.hx",24);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,update,(void))

Void State_obj::load( ){
{
		HX_STACK_PUSH("State::load","graphite/State.hx",18);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(State_obj,load,(void))


State_obj::State_obj()
{
}

void State_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(State);
	HX_MARK_MEMBER_NAME(targetState,"targetState");
	HX_MARK_END_CLASS();
}

void State_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(targetState,"targetState");
}

Dynamic State_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"targetState") ) { return targetState; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"requestChange") ) { return requestChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic State_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"targetState") ) { targetState=inValue.Cast< ::graphite::State >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void State_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("targetState"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("requestChange"),
	HX_CSTRING("unload"),
	HX_CSTRING("update"),
	HX_CSTRING("load"),
	HX_CSTRING("targetState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

Class State_obj::__mClass;

void State_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.State"), hx::TCanCast< State_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void State_obj::__boot()
{
}

} // end namespace graphite

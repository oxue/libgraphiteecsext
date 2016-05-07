#include <hxcpp.h>

#ifndef INCLUDED_graphite_State
#include <graphite/State.h>
#endif
#ifndef INCLUDED_graphite_StateManager
#include <graphite/StateManager.h>
#endif
namespace graphite{

Void StateManager_obj::__construct(::graphite::State _initialState)
{
HX_STACK_PUSH("StateManager::new","graphite/StateManager.hx",19);
{
	HX_STACK_LINE(20)
	this->currentState = _initialState;
	HX_STACK_LINE(21)
	this->currentState->load();
}
;
	return null();
}

StateManager_obj::~StateManager_obj() { }

Dynamic StateManager_obj::__CreateEmpty() { return  new StateManager_obj; }
hx::ObjectPtr< StateManager_obj > StateManager_obj::__new(::graphite::State _initialState)
{  hx::ObjectPtr< StateManager_obj > result = new StateManager_obj();
	result->__construct(_initialState);
	return result;}

Dynamic StateManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StateManager_obj > result = new StateManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void StateManager_obj::setState( ::graphite::State _state){
{
		HX_STACK_PUSH("StateManager::setState","graphite/StateManager.hx",39);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_state,"_state");
		HX_STACK_LINE(40)
		this->currentState->unload();
		HX_STACK_LINE(41)
		this->currentState = _state;
		HX_STACK_LINE(42)
		this->currentState->load();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StateManager_obj,setState,(void))

Void StateManager_obj::requestStateChange( ::graphite::State _state){
{
		HX_STACK_PUSH("StateManager::requestStateChange","graphite/StateManager.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_state,"_state");
		HX_STACK_LINE(29)
		this->currentState->requestChange(_state);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StateManager_obj,requestStateChange,(void))


StateManager_obj::StateManager_obj()
{
}

void StateManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StateManager);
	HX_MARK_MEMBER_NAME(currentState,"currentState");
	HX_MARK_END_CLASS();
}

void StateManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentState,"currentState");
}

Dynamic StateManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"setState") ) { return setState_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { return currentState; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"requestStateChange") ) { return requestStateChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StateManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { currentState=inValue.Cast< ::graphite::State >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StateManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentState"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setState"),
	HX_CSTRING("requestStateChange"),
	HX_CSTRING("currentState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StateManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StateManager_obj::__mClass,"__mClass");
};

Class StateManager_obj::__mClass;

void StateManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.StateManager"), hx::TCanCast< StateManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void StateManager_obj::__boot()
{
}

} // end namespace graphite

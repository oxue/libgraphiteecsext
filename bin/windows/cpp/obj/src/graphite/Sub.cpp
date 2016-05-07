#include <hxcpp.h>

#ifndef INCLUDED_graphite_Comp
#include <graphite/Comp.h>
#endif
#ifndef INCLUDED_graphite_Sub
#include <graphite/Sub.h>
#endif
#ifndef INCLUDED_graphite_std_StdComp
#include <graphite/std/StdComp.h>
#endif
namespace graphite{

Void Sub_obj::__construct(int _priority,::graphite::std::StdComp _id)
{
HX_STACK_PUSH("Sub::new","graphite/Sub.hx",22);
{
	HX_STACK_LINE(23)
	_priority = this->priority;
	HX_STACK_LINE(24)
	this->remove = false;
	HX_STACK_LINE(25)
	this->id = _id;
}
;
	return null();
}

Sub_obj::~Sub_obj() { }

Dynamic Sub_obj::__CreateEmpty() { return  new Sub_obj; }
hx::ObjectPtr< Sub_obj > Sub_obj::__new(int _priority,::graphite::std::StdComp _id)
{  hx::ObjectPtr< Sub_obj > result = new Sub_obj();
	result->__construct(_priority,_id);
	return result;}

Dynamic Sub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sub_obj > result = new Sub_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Sub_obj::wipe( ){
{
		HX_STACK_PUSH("Sub::wipe","graphite/Sub.hx",50);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sub_obj,wipe,(void))

Void Sub_obj::update( ){
{
		HX_STACK_PUSH("Sub::update","graphite/Sub.hx",42);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sub_obj,update,(void))

::graphite::Comp Sub_obj::get( ){
	HX_STACK_PUSH("Sub::get","graphite/Sub.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_LINE(34)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sub_obj,get,return )


Sub_obj::Sub_obj()
{
}

void Sub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sub);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(remove,"remove");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_END_CLASS();
}

void Sub_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(remove,"remove");
	HX_VISIT_MEMBER_NAME(priority,"priority");
}

Dynamic Sub_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"wipe") ) { return wipe_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return priority; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sub_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::graphite::std::StdComp >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { remove=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sub_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("remove"));
	outFields->push(HX_CSTRING("priority"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("wipe"),
	HX_CSTRING("update"),
	HX_CSTRING("get"),
	HX_CSTRING("id"),
	HX_CSTRING("remove"),
	HX_CSTRING("priority"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sub_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sub_obj::__mClass,"__mClass");
};

Class Sub_obj::__mClass;

void Sub_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.Sub"), hx::TCanCast< Sub_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Sub_obj::__boot()
{
}

} // end namespace graphite

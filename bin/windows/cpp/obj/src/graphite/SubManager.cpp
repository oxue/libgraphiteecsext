#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_graphite_Sub
#include <graphite/Sub.h>
#endif
#ifndef INCLUDED_graphite_SubManager
#include <graphite/SubManager.h>
#endif
#ifndef INCLUDED_graphite_collections_Cons
#include <graphite/collections/Cons.h>
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

Void SubManager_obj::__construct()
{
HX_STACK_PUSH("SubManager::new","graphite/SubManager.hx",23);
{
	HX_STACK_LINE(24)
	this->subs = null();
	HX_STACK_LINE(25)
	this->subHash = ::haxe::ds::EnumValueMap_obj::__new();
}
;
	return null();
}

SubManager_obj::~SubManager_obj() { }

Dynamic SubManager_obj::__CreateEmpty() { return  new SubManager_obj; }
hx::ObjectPtr< SubManager_obj > SubManager_obj::__new()
{  hx::ObjectPtr< SubManager_obj > result = new SubManager_obj();
	result->__construct();
	return result;}

Dynamic SubManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SubManager_obj > result = new SubManager_obj();
	result->__construct();
	return result;}

::graphite::collections::Cons SubManager_obj::update_h( ::graphite::collections::Cons _lst){
	HX_STACK_PUSH("SubManager::update_h","graphite/SubManager.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_lst,"_lst");
	HX_STACK_LINE(56)
	if (((_lst == null()))){
		HX_STACK_LINE(58)
		return null();
	}
	else{
		HX_STACK_LINE(59)
		if (((_lst->first->__Field(HX_CSTRING("remove"),true) == true))){
			HX_STACK_LINE(61)
			this->subHash->set(_lst->first->__Field(HX_CSTRING("id"),true),null());
			HX_STACK_LINE(62)
			_lst->first->__Field(HX_CSTRING("wipe"),true)();
			HX_STACK_LINE(63)
			return _lst->rest;
		}
		else{
			HX_STACK_LINE(66)
			_lst->first->__Field(HX_CSTRING("update"),true)();
			HX_STACK_LINE(67)
			return ::graphite::collections::Cons_obj::__new(_lst->first,this->update_h(_lst->rest));
		}
	}
	HX_STACK_LINE(56)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubManager_obj,update_h,return )

Void SubManager_obj::update( ){
{
		HX_STACK_PUSH("SubManager::update","graphite/SubManager.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_LINE(51)
		this->update_h(this->subs);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SubManager_obj,update,(void))

::graphite::collections::Cons SubManager_obj::addsub_h( ::graphite::Sub _sub,::graphite::collections::Cons _lst){
	HX_STACK_PUSH("SubManager::addsub_h","graphite/SubManager.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_sub,"_sub");
	HX_STACK_ARG(_lst,"_lst");
	HX_STACK_LINE(39)
	if (((_lst == null()))){
		HX_STACK_LINE(41)
		this->subHash->set(_sub->id,_sub);
		HX_STACK_LINE(42)
		return ::graphite::collections::Cons_obj::__new(_sub,null());
	}
	else{
		HX_STACK_LINE(43)
		if (((_sub->priority > _lst->first->__Field(HX_CSTRING("priority"),true)))){
			HX_STACK_LINE(44)
			this->subHash->set(_sub->id,_sub);
			HX_STACK_LINE(45)
			return ::graphite::collections::Cons_obj::__new(_sub,_lst);
		}
		else{
			HX_STACK_LINE(47)
			return ::graphite::collections::Cons_obj::__new(_lst->first,this->addsub_h(_sub,_lst->rest));
		}
	}
	HX_STACK_LINE(39)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SubManager_obj,addsub_h,return )

Void SubManager_obj::addSub( ::graphite::Sub _sub){
{
		HX_STACK_PUSH("SubManager::addSub","graphite/SubManager.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_sub,"_sub");
		HX_STACK_LINE(34)
		this->subs = this->addsub_h(_sub,this->subs);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SubManager_obj,addSub,(void))

::graphite::Sub SubManager_obj::get( ::graphite::std::StdComp _id){
	HX_STACK_PUSH("SubManager::get","graphite/SubManager.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_id,"_id");
	HX_STACK_LINE(29)
	return this->subHash->get(_id);
}


HX_DEFINE_DYNAMIC_FUNC1(SubManager_obj,get,return )


SubManager_obj::SubManager_obj()
{
}

void SubManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SubManager);
	HX_MARK_MEMBER_NAME(subs,"subs");
	HX_MARK_MEMBER_NAME(subHash,"subHash");
	HX_MARK_END_CLASS();
}

void SubManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(subs,"subs");
	HX_VISIT_MEMBER_NAME(subHash,"subHash");
}

Dynamic SubManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"subs") ) { return subs; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"addSub") ) { return addSub_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"subHash") ) { return subHash; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"update_h") ) { return update_h_dyn(); }
		if (HX_FIELD_EQ(inName,"addsub_h") ) { return addsub_h_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SubManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"subs") ) { subs=inValue.Cast< ::graphite::collections::Cons >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"subHash") ) { subHash=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SubManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("subs"));
	outFields->push(HX_CSTRING("subHash"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update_h"),
	HX_CSTRING("update"),
	HX_CSTRING("addsub_h"),
	HX_CSTRING("addSub"),
	HX_CSTRING("get"),
	HX_CSTRING("subs"),
	HX_CSTRING("subHash"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SubManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SubManager_obj::__mClass,"__mClass");
};

Class SubManager_obj::__mClass;

void SubManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.SubManager"), hx::TCanCast< SubManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SubManager_obj::__boot()
{
}

} // end namespace graphite

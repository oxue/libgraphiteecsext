#include <hxcpp.h>

#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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
#ifndef INCLUDED_graphite_std_CoordinateComp
#include <graphite/std/CoordinateComp.h>
#endif
#ifndef INCLUDED_graphite_std_LerpComp
#include <graphite/std/LerpComp.h>
#endif
#ifndef INCLUDED_graphite_std_LerpSub
#include <graphite/std/LerpSub.h>
#endif
#ifndef INCLUDED_graphite_std_PositionComp
#include <graphite/std/PositionComp.h>
#endif
#ifndef INCLUDED_graphite_std_StdComp
#include <graphite/std/StdComp.h>
#endif
namespace graphite{
namespace std{

Void LerpSub_obj::__construct()
{
HX_STACK_PUSH("LerpSub::new","graphite/std/LerpSub.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct((int)2,::graphite::std::StdComp_obj::LERP);
	HX_STACK_LINE(21)
	this->lerps = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(22)
	this->pool = ::graphite::collections::ObjectPool_obj::__new((int)10,null());
}
;
	return null();
}

LerpSub_obj::~LerpSub_obj() { }

Dynamic LerpSub_obj::__CreateEmpty() { return  new LerpSub_obj; }
hx::ObjectPtr< LerpSub_obj > LerpSub_obj::__new()
{  hx::ObjectPtr< LerpSub_obj > result = new LerpSub_obj();
	result->__construct();
	return result;}

Dynamic LerpSub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LerpSub_obj > result = new LerpSub_obj();
	result->__construct();
	return result;}

Void LerpSub_obj::update( ){
{
		HX_STACK_PUSH("LerpSub::update","graphite/std/LerpSub.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_LINE(38)
		int i = this->lerps->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(39)
		int l = i;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(40)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(42)
			::graphite::std::LerpComp lerp = this->lerps->__get(i).StaticCast< ::graphite::std::LerpComp >();		HX_STACK_VAR(lerp,"lerp");
			HX_STACK_LINE(43)
			if (((lerp->remove == true))){
				HX_STACK_LINE(45)
				this->lerps[i] = this->lerps->__get(--(l)).StaticCast< ::graphite::std::LerpComp >();
				HX_STACK_LINE(46)
				this->pool->alloc(lerp);
				HX_STACK_LINE(47)
				continue;
			}
			HX_STACK_LINE(49)
			lerp->position->velX = (lerp->destination->x - lerp->position->x);
			HX_STACK_LINE(50)
			lerp->position->velY = (lerp->destination->y - lerp->position->y);
		}
		HX_STACK_LINE(52)
		l;
	}
return null();
}


::graphite::Comp LerpSub_obj::get( ){
	HX_STACK_PUSH("LerpSub::get","graphite/std/LerpSub.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	::graphite::std::LerpComp lerp = this->pool->get();		HX_STACK_VAR(lerp,"lerp");
	HX_STACK_LINE(28)
	if (((lerp == null()))){
		HX_STACK_LINE(29)
		lerp = ::graphite::std::LerpComp_obj::__new(0.02);
	}
	HX_STACK_LINE(32)
	this->lerps->__Field(HX_CSTRING("push"),true)(lerp);
	HX_STACK_LINE(33)
	return lerp;
}



LerpSub_obj::LerpSub_obj()
{
}

void LerpSub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LerpSub);
	HX_MARK_MEMBER_NAME(pool,"pool");
	HX_MARK_MEMBER_NAME(lerps,"lerps");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LerpSub_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pool,"pool");
	HX_VISIT_MEMBER_NAME(lerps,"lerps");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LerpSub_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { return pool; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lerps") ) { return lerps; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LerpSub_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=inValue.Cast< ::graphite::collections::ObjectPool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lerps") ) { lerps=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LerpSub_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pool"));
	outFields->push(HX_CSTRING("lerps"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("get"),
	HX_CSTRING("pool"),
	HX_CSTRING("lerps"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LerpSub_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LerpSub_obj::__mClass,"__mClass");
};

Class LerpSub_obj::__mClass;

void LerpSub_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.LerpSub"), hx::TCanCast< LerpSub_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LerpSub_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

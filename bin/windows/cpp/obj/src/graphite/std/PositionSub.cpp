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
#ifndef INCLUDED_graphite_std_PositionComp
#include <graphite/std/PositionComp.h>
#endif
#ifndef INCLUDED_graphite_std_PositionSub
#include <graphite/std/PositionSub.h>
#endif
#ifndef INCLUDED_graphite_std_StdComp
#include <graphite/std/StdComp.h>
#endif
namespace graphite{
namespace std{

Void PositionSub_obj::__construct()
{
HX_STACK_PUSH("PositionSub::new","graphite/std/PositionSub.hx",20);
{
	HX_STACK_LINE(21)
	super::__construct((int)3,::graphite::std::StdComp_obj::POSITION);
	HX_STACK_LINE(22)
	this->positions = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(23)
	this->pool = ::graphite::collections::ObjectPool_obj::__new((int)10,null());
}
;
	return null();
}

PositionSub_obj::~PositionSub_obj() { }

Dynamic PositionSub_obj::__CreateEmpty() { return  new PositionSub_obj; }
hx::ObjectPtr< PositionSub_obj > PositionSub_obj::__new()
{  hx::ObjectPtr< PositionSub_obj > result = new PositionSub_obj();
	result->__construct();
	return result;}

Dynamic PositionSub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PositionSub_obj > result = new PositionSub_obj();
	result->__construct();
	return result;}

Void PositionSub_obj::update( ){
{
		HX_STACK_PUSH("PositionSub::update","graphite/std/PositionSub.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		int i = this->positions->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(40)
		int l = i;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(41)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(43)
			::graphite::std::PositionComp position = this->positions->__get(i).StaticCast< ::graphite::std::PositionComp >();		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(44)
			if (((position->remove == true))){
				HX_STACK_LINE(46)
				this->positions[i] = this->positions->__get(--(l)).StaticCast< ::graphite::std::PositionComp >();
				HX_STACK_LINE(47)
				this->pool->alloc(position);
				HX_STACK_LINE(48)
				continue;
			}
			HX_STACK_LINE(50)
			hx::AddEq(position->velX,position->accX);
			HX_STACK_LINE(51)
			hx::AddEq(position->velY,position->accY);
			HX_STACK_LINE(52)
			hx::MultEq(position->velX,position->dampX);
			HX_STACK_LINE(53)
			hx::MultEq(position->velY,position->dampY);
			HX_STACK_LINE(54)
			hx::AddEq(position->x,position->velX);
			HX_STACK_LINE(55)
			hx::AddEq(position->y,position->velY);
		}
		HX_STACK_LINE(58)
		l;
	}
return null();
}


::graphite::Comp PositionSub_obj::get( ){
	HX_STACK_PUSH("PositionSub::get","graphite/std/PositionSub.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(28)
	::graphite::std::PositionComp position = this->pool->get();		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(29)
	if (((position == null()))){
		HX_STACK_LINE(30)
		position = ::graphite::std::PositionComp_obj::__new(null(),null());
	}
	HX_STACK_LINE(33)
	this->positions->__Field(HX_CSTRING("push"),true)(position);
	HX_STACK_LINE(34)
	return position;
}



PositionSub_obj::PositionSub_obj()
{
}

void PositionSub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PositionSub);
	HX_MARK_MEMBER_NAME(pool,"pool");
	HX_MARK_MEMBER_NAME(positions,"positions");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PositionSub_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pool,"pool");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PositionSub_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { return pool; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { return positions; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PositionSub_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=inValue.Cast< ::graphite::collections::ObjectPool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PositionSub_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pool"));
	outFields->push(HX_CSTRING("positions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("get"),
	HX_CSTRING("pool"),
	HX_CSTRING("positions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PositionSub_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PositionSub_obj::__mClass,"__mClass");
};

Class PositionSub_obj::__mClass;

void PositionSub_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.PositionSub"), hx::TCanCast< PositionSub_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PositionSub_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

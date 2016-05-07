#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_graphite_std_LerpComp
#include <graphite/std/LerpComp.h>
#endif
#ifndef INCLUDED_graphite_std_PositionComp
#include <graphite/std/PositionComp.h>
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

Void LerpComp_obj::__construct(hx::Null< Float >  __o__factor)
{
HX_STACK_PUSH("LerpComp::new","graphite/std/LerpComp.hx",17);
Float _factor = __o__factor.Default(0.25);
{
	HX_STACK_LINE(18)
	super::__construct(::graphite::std::StdComp_obj::LERP);
	HX_STACK_LINE(19)
	this->factor = _factor;
}
;
	return null();
}

LerpComp_obj::~LerpComp_obj() { }

Dynamic LerpComp_obj::__CreateEmpty() { return  new LerpComp_obj; }
hx::ObjectPtr< LerpComp_obj > LerpComp_obj::__new(hx::Null< Float >  __o__factor)
{  hx::ObjectPtr< LerpComp_obj > result = new LerpComp_obj();
	result->__construct(__o__factor);
	return result;}

Dynamic LerpComp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LerpComp_obj > result = new LerpComp_obj();
	result->__construct(inArgs[0]);
	return result;}

Void LerpComp_obj::load( ){
{
		HX_STACK_PUSH("LerpComp::load","graphite/std/LerpComp.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		this->position->dampX = this->factor;
		HX_STACK_LINE(31)
		this->position->dampY = this->factor;
	}
return null();
}


Void LerpComp_obj::cache( ){
{
		HX_STACK_PUSH("LerpComp::cache","graphite/std/LerpComp.hx",23);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::graphite::Comp Block( ::graphite::std::LerpComp_obj *__this){
				HX_STACK_PUSH("*::closure","graphite/std/LerpComp.hx",24);
				{
					HX_STACK_LINE(24)
					::graphite::Comp component = __this->entity->componentHash->get(::graphite::std::StdComp_obj::COORDINATES);		HX_STACK_VAR(component,"component");
					HX_STACK_LINE(24)
					component->dependencies->__Field(HX_CSTRING("push"),true)(__this);
					HX_STACK_LINE(24)
					return component;
				}
				return null();
			}
		};
		HX_STACK_LINE(24)
		this->destination = _Function_1_1::Block(this);
		struct _Function_1_2{
			inline static ::graphite::Comp Block( ::graphite::std::LerpComp_obj *__this){
				HX_STACK_PUSH("*::closure","graphite/std/LerpComp.hx",25);
				{
					HX_STACK_LINE(25)
					::graphite::Comp component = __this->entity->componentHash->get(::graphite::std::StdComp_obj::POSITION);		HX_STACK_VAR(component,"component");
					HX_STACK_LINE(25)
					component->dependencies->__Field(HX_CSTRING("push"),true)(__this);
					HX_STACK_LINE(25)
					return component;
				}
				return null();
			}
		};
		HX_STACK_LINE(25)
		this->position = _Function_1_2::Block(this);
	}
return null();
}



LerpComp_obj::LerpComp_obj()
{
}

void LerpComp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LerpComp);
	HX_MARK_MEMBER_NAME(destination,"destination");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(factor,"factor");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LerpComp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(destination,"destination");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(factor,"factor");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LerpComp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"factor") ) { return factor; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"destination") ) { return destination; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LerpComp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"factor") ) { factor=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::graphite::std::PositionComp >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"destination") ) { destination=inValue.Cast< ::graphite::std::CoordinateComp >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LerpComp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("destination"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("factor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("load"),
	HX_CSTRING("cache"),
	HX_CSTRING("destination"),
	HX_CSTRING("position"),
	HX_CSTRING("factor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LerpComp_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LerpComp_obj::__mClass,"__mClass");
};

Class LerpComp_obj::__mClass;

void LerpComp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.LerpComp"), hx::TCanCast< LerpComp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LerpComp_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

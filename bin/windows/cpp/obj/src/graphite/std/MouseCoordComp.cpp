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
#ifndef INCLUDED_graphite_std_MouseCoordComp
#include <graphite/std/MouseCoordComp.h>
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

Void MouseCoordComp_obj::__construct()
{
HX_STACK_PUSH("MouseCoordComp::new","graphite/std/MouseCoordComp.hx",14);
{
	HX_STACK_LINE(14)
	super::__construct(::graphite::std::StdComp_obj::MOUSECOORDS);
}
;
	return null();
}

MouseCoordComp_obj::~MouseCoordComp_obj() { }

Dynamic MouseCoordComp_obj::__CreateEmpty() { return  new MouseCoordComp_obj; }
hx::ObjectPtr< MouseCoordComp_obj > MouseCoordComp_obj::__new()
{  hx::ObjectPtr< MouseCoordComp_obj > result = new MouseCoordComp_obj();
	result->__construct();
	return result;}

Dynamic MouseCoordComp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseCoordComp_obj > result = new MouseCoordComp_obj();
	result->__construct();
	return result;}

Void MouseCoordComp_obj::cache( ){
{
		HX_STACK_PUSH("MouseCoordComp::cache","graphite/std/MouseCoordComp.hx",19);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::graphite::Comp Block( ::graphite::std::MouseCoordComp_obj *__this){
				HX_STACK_PUSH("*::closure","graphite/std/MouseCoordComp.hx",20);
				{
					HX_STACK_LINE(20)
					::graphite::Comp component = __this->entity->componentHash->get(::graphite::std::StdComp_obj::COORDINATES);		HX_STACK_VAR(component,"component");
					HX_STACK_LINE(20)
					component->dependencies->__Field(HX_CSTRING("push"),true)(__this);
					HX_STACK_LINE(20)
					return component;
				}
				return null();
			}
		};
		HX_STACK_LINE(19)
		this->coordinates = _Function_1_1::Block(this);
	}
return null();
}



MouseCoordComp_obj::MouseCoordComp_obj()
{
}

void MouseCoordComp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseCoordComp);
	HX_MARK_MEMBER_NAME(coordinates,"coordinates");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MouseCoordComp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(coordinates,"coordinates");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MouseCoordComp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"coordinates") ) { return coordinates; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MouseCoordComp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"coordinates") ) { coordinates=inValue.Cast< ::graphite::std::CoordinateComp >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseCoordComp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("coordinates"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cache"),
	HX_CSTRING("coordinates"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseCoordComp_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseCoordComp_obj::__mClass,"__mClass");
};

Class MouseCoordComp_obj::__mClass;

void MouseCoordComp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.MouseCoordComp"), hx::TCanCast< MouseCoordComp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MouseCoordComp_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

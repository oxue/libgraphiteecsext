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

Void Ent_obj::__construct()
{
HX_STACK_PUSH("Ent::new","graphite/Ent.hx",14);
{
	HX_STACK_LINE(14)
	this->componentHash = ::haxe::ds::EnumValueMap_obj::__new();
}
;
	return null();
}

Ent_obj::~Ent_obj() { }

Dynamic Ent_obj::__CreateEmpty() { return  new Ent_obj; }
hx::ObjectPtr< Ent_obj > Ent_obj::__new()
{  hx::ObjectPtr< Ent_obj > result = new Ent_obj();
	result->__construct();
	return result;}

Dynamic Ent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ent_obj > result = new Ent_obj();
	result->__construct();
	return result;}

Void Ent_obj::remove( ){
{
		HX_STACK_PUSH("Ent::remove","graphite/Ent.hx",53);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::graphite::Ent_obj *__this){
				HX_STACK_PUSH("*::closure","graphite/Ent.hx",54);
				{
					HX_STACK_LINE(54)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->componentHash);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","graphite/Ent.hx",54);
						{
							HX_STACK_LINE(54)
							return _e->__get((int)0).StaticCast< ::haxe::ds::EnumValueMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(54)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(53)
		for(::cpp::FastIterator_obj< ::graphite::Comp > *__it = ::cpp::CreateFastIterator< ::graphite::Comp >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::graphite::Comp component = __it->next();
			component->remove = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ent_obj,remove,(void))

Void Ent_obj::swap( ::graphite::Comp _component){
{
		HX_STACK_PUSH("Ent::swap","graphite/Ent.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_component,"_component");
		HX_STACK_LINE(38)
		::graphite::Comp oldComponent = this->componentHash->get(_component->id);		HX_STACK_VAR(oldComponent,"oldComponent");
		HX_STACK_LINE(39)
		this->componentHash->set(_component->id,_component);
		HX_STACK_LINE(40)
		int i = oldComponent->dependencies->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(41)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(42)
			oldComponent->dependencies->__get(i).StaticCast< ::graphite::Comp >()->cache();
		}
		HX_STACK_LINE(45)
		oldComponent->remove = true;
		HX_STACK_LINE(46)
		oldComponent->unload();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ent_obj,swap,(void))

::graphite::Comp Ent_obj::add( ::graphite::Comp _component){
	HX_STACK_PUSH("Ent::add","graphite/Ent.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_component,"_component");
	HX_STACK_LINE(25)
	this->componentHash->set(_component->id,_component);
	HX_STACK_LINE(26)
	_component->entity = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(27)
	_component->cache();
	HX_STACK_LINE(28)
	_component->load();
	HX_STACK_LINE(29)
	return _component;
}


HX_DEFINE_DYNAMIC_FUNC1(Ent_obj,add,return )


Ent_obj::Ent_obj()
{
}

void Ent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ent);
	HX_MARK_MEMBER_NAME(componentHash,"componentHash");
	HX_MARK_END_CLASS();
}

void Ent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(componentHash,"componentHash");
}

Dynamic Ent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"componentHash") ) { return componentHash; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"componentHash") ) { componentHash=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("componentHash"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("remove"),
	HX_CSTRING("swap"),
	HX_CSTRING("add"),
	HX_CSTRING("componentHash"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ent_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ent_obj::__mClass,"__mClass");
};

Class Ent_obj::__mClass;

void Ent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.Ent"), hx::TCanCast< Ent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Ent_obj::__boot()
{
}

} // end namespace graphite

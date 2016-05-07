#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
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

Void Comp_obj::__construct(::graphite::std::StdComp _id)
{
HX_STACK_PUSH("Comp::new","graphite/Comp.hx",17);
{
	HX_STACK_LINE(18)
	this->id = _id;
	HX_STACK_LINE(19)
	this->dependencies = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(20)
	this->remove = false;
}
;
	return null();
}

Comp_obj::~Comp_obj() { }

Dynamic Comp_obj::__CreateEmpty() { return  new Comp_obj; }
hx::ObjectPtr< Comp_obj > Comp_obj::__new(::graphite::std::StdComp _id)
{  hx::ObjectPtr< Comp_obj > result = new Comp_obj();
	result->__construct(_id);
	return result;}

Dynamic Comp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Comp_obj > result = new Comp_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Comp_obj::unload( ){
{
		HX_STACK_PUSH("Comp::unload","graphite/Comp.hx",55);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Comp_obj,unload,(void))

Void Comp_obj::cache( ){
{
		HX_STACK_PUSH("Comp::cache","graphite/Comp.hx",47);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Comp_obj,cache,(void))

Void Comp_obj::load( ){
{
		HX_STACK_PUSH("Comp::load","graphite/Comp.hx",39);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Comp_obj,load,(void))

::graphite::Comp Comp_obj::getComponentCache( ::graphite::std::StdComp _id){
	HX_STACK_PUSH("Comp::getComponentCache","graphite/Comp.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_id,"_id");
	HX_STACK_LINE(30)
	::graphite::Comp component = this->entity->componentHash->get(_id);		HX_STACK_VAR(component,"component");
	HX_STACK_LINE(31)
	component->dependencies->__Field(HX_CSTRING("push"),true)(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(32)
	return component;
}


HX_DEFINE_DYNAMIC_FUNC1(Comp_obj,getComponentCache,return )


Comp_obj::Comp_obj()
{
}

void Comp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Comp);
	HX_MARK_MEMBER_NAME(dependencies,"dependencies");
	HX_MARK_MEMBER_NAME(remove,"remove");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_END_CLASS();
}

void Comp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dependencies,"dependencies");
	HX_VISIT_MEMBER_NAME(remove,"remove");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(entity,"entity");
}

Dynamic Comp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove; }
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dependencies") ) { return dependencies; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getComponentCache") ) { return getComponentCache_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Comp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::graphite::std::StdComp >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { remove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::graphite::Ent >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dependencies") ) { dependencies=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Comp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dependencies"));
	outFields->push(HX_CSTRING("remove"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("entity"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unload"),
	HX_CSTRING("cache"),
	HX_CSTRING("load"),
	HX_CSTRING("getComponentCache"),
	HX_CSTRING("dependencies"),
	HX_CSTRING("remove"),
	HX_CSTRING("id"),
	HX_CSTRING("entity"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Comp_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Comp_obj::__mClass,"__mClass");
};

Class Comp_obj::__mClass;

void Comp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.Comp"), hx::TCanCast< Comp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Comp_obj::__boot()
{
}

} // end namespace graphite

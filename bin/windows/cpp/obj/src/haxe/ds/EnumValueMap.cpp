#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
namespace haxe{
namespace ds{

Void EnumValueMap_obj::__construct()
{
HX_STACK_PUSH("EnumValueMap::new","C:\\HaxeToolkit\\haxe/std/haxe/ds/EnumValueMap.hx",25);
{
	HX_STACK_LINE(25)
	super::__construct();
}
;
	return null();
}

EnumValueMap_obj::~EnumValueMap_obj() { }

Dynamic EnumValueMap_obj::__CreateEmpty() { return  new EnumValueMap_obj; }
hx::ObjectPtr< EnumValueMap_obj > EnumValueMap_obj::__new()
{  hx::ObjectPtr< EnumValueMap_obj > result = new EnumValueMap_obj();
	result->__construct();
	return result;}

Dynamic EnumValueMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnumValueMap_obj > result = new EnumValueMap_obj();
	result->__construct();
	return result;}

hx::Object *EnumValueMap_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::IMap_obj)) return operator ::IMap_obj *();
	return super::__ToInterface(inType);
}

int EnumValueMap_obj::compareArgs( Dynamic a1,Dynamic a2){
	HX_STACK_PUSH("EnumValueMap::compareArgs","C:\\HaxeToolkit\\haxe/std/haxe/ds/EnumValueMap.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a1,"a1");
	HX_STACK_ARG(a2,"a2");
	HX_STACK_LINE(37)
	int ld = (a1->__Field(HX_CSTRING("length"),true) - a2->__Field(HX_CSTRING("length"),true));		HX_STACK_VAR(ld,"ld");
	HX_STACK_LINE(38)
	if (((ld != (int)0))){
		HX_STACK_LINE(38)
		return ld;
	}
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = a1->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		while(((_g1 < _g))){
			HX_STACK_LINE(39)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(40)
			Dynamic v1 = a1->__GetItem(i);		HX_STACK_VAR(v1,"v1");
			Dynamic v2 = a2->__GetItem(i);		HX_STACK_VAR(v2,"v2");
			HX_STACK_LINE(41)
			int d = (  (((bool(::Reflect_obj::isEnumValue(v1)) && bool(::Reflect_obj::isEnumValue(v2))))) ? int(this->compare(v1,v2)) : int(::Reflect_obj::compare(v1,v2)) );		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(43)
			if (((d != (int)0))){
				HX_STACK_LINE(43)
				return d;
			}
		}
	}
	HX_STACK_LINE(45)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(EnumValueMap_obj,compareArgs,return )

int EnumValueMap_obj::compare( Dynamic _tmp_k1,Dynamic _tmp_k2){
	HX_STACK_PUSH("EnumValueMap::compare","C:\\HaxeToolkit\\haxe/std/haxe/ds/EnumValueMap.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_tmp_k1,"_tmp_k1");
	HX_STACK_ARG(_tmp_k2,"_tmp_k2");
	HX_STACK_LINE(28)
	Dynamic k1 = _tmp_k1;		HX_STACK_VAR(k1,"k1");
	Dynamic k2 = _tmp_k2;		HX_STACK_VAR(k2,"k2");
	HX_STACK_LINE(28)
	int d = (k1->__Index() - k2->__Index());		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(29)
	if (((d != (int)0))){
		HX_STACK_LINE(29)
		return d;
	}
	HX_STACK_LINE(30)
	Dynamic p1 = ::Type_obj::enumParameters(k1);		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(31)
	Dynamic p2 = ::Type_obj::enumParameters(k2);		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(32)
	if (((bool((p1->__Field(HX_CSTRING("length"),true) == (int)0)) && bool((p2->__Field(HX_CSTRING("length"),true) == (int)0))))){
		HX_STACK_LINE(32)
		return (int)0;
	}
	HX_STACK_LINE(33)
	return this->compareArgs(p1,p2);
}



EnumValueMap_obj::EnumValueMap_obj()
{
}

void EnumValueMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnumValueMap);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EnumValueMap_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic EnumValueMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"compareArgs") ) { return compareArgs_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnumValueMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void EnumValueMap_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("compareArgs"),
	HX_CSTRING("compare"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumValueMap_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumValueMap_obj::__mClass,"__mClass");
};

Class EnumValueMap_obj::__mClass;

void EnumValueMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ds.EnumValueMap"), hx::TCanCast< EnumValueMap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EnumValueMap_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ds

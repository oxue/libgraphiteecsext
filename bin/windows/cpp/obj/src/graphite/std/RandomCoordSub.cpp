#include <hxcpp.h>

#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
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
#ifndef INCLUDED_graphite_std_RandomCoordComp
#include <graphite/std/RandomCoordComp.h>
#endif
#ifndef INCLUDED_graphite_std_RandomCoordSub
#include <graphite/std/RandomCoordSub.h>
#endif
#ifndef INCLUDED_graphite_std_StdComp
#include <graphite/std/StdComp.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace graphite{
namespace std{

Void RandomCoordSub_obj::__construct()
{
HX_STACK_PUSH("RandomCoordSub::new","graphite/std/RandomCoordSub.hx",20);
{
	HX_STACK_LINE(21)
	super::__construct((int)1,::graphite::std::StdComp_obj::RANDOMCOORDS);
	HX_STACK_LINE(22)
	this->randomCoords = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(23)
	this->pool = ::graphite::collections::ObjectPool_obj::__new((int)10,null());
}
;
	return null();
}

RandomCoordSub_obj::~RandomCoordSub_obj() { }

Dynamic RandomCoordSub_obj::__CreateEmpty() { return  new RandomCoordSub_obj; }
hx::ObjectPtr< RandomCoordSub_obj > RandomCoordSub_obj::__new()
{  hx::ObjectPtr< RandomCoordSub_obj > result = new RandomCoordSub_obj();
	result->__construct();
	return result;}

Dynamic RandomCoordSub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RandomCoordSub_obj > result = new RandomCoordSub_obj();
	result->__construct();
	return result;}

Void RandomCoordSub_obj::update( ){
{
		HX_STACK_PUSH("RandomCoordSub::update","graphite/std/RandomCoordSub.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		int i = this->randomCoords->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(40)
		int l = i;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(41)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(43)
			::graphite::std::RandomCoordComp randomCoord = this->randomCoords->__get(i).StaticCast< ::graphite::std::RandomCoordComp >();		HX_STACK_VAR(randomCoord,"randomCoord");
			HX_STACK_LINE(44)
			if (((randomCoord->remove == true))){
				HX_STACK_LINE(46)
				this->randomCoords[i] = this->randomCoords->__get(--(l)).StaticCast< ::graphite::std::RandomCoordComp >();
				HX_STACK_LINE(47)
				this->pool->alloc(randomCoord);
				HX_STACK_LINE(48)
				continue;
			}
			HX_STACK_LINE(50)
			(randomCoord->t)++;
			HX_STACK_LINE(51)
			if (((randomCoord->t >= randomCoord->timer))){
				HX_STACK_LINE(53)
				randomCoord->t = (int)0;
				HX_STACK_LINE(54)
				randomCoord->coordinates->x = (randomCoord->dimensions->x + (::Math_obj::random() * randomCoord->dimensions->width));
				HX_STACK_LINE(55)
				randomCoord->coordinates->y = (randomCoord->dimensions->y + (::Math_obj::random() * randomCoord->dimensions->height));
			}
		}
		HX_STACK_LINE(58)
		l;
	}
return null();
}


::graphite::Comp RandomCoordSub_obj::get( ){
	HX_STACK_PUSH("RandomCoordSub::get","graphite/std/RandomCoordSub.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(28)
	::graphite::std::RandomCoordComp randomCoord = this->pool->get();		HX_STACK_VAR(randomCoord,"randomCoord");
	HX_STACK_LINE(29)
	if (((randomCoord == null()))){
		HX_STACK_LINE(30)
		randomCoord = ::graphite::std::RandomCoordComp_obj::__new(null(),null());
	}
	HX_STACK_LINE(33)
	this->randomCoords->__Field(HX_CSTRING("push"),true)(randomCoord);
	HX_STACK_LINE(34)
	return randomCoord;
}



RandomCoordSub_obj::RandomCoordSub_obj()
{
}

void RandomCoordSub_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RandomCoordSub);
	HX_MARK_MEMBER_NAME(pool,"pool");
	HX_MARK_MEMBER_NAME(randomCoords,"randomCoords");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RandomCoordSub_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pool,"pool");
	HX_VISIT_MEMBER_NAME(randomCoords,"randomCoords");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RandomCoordSub_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 12:
		if (HX_FIELD_EQ(inName,"randomCoords") ) { return randomCoords; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RandomCoordSub_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=inValue.Cast< ::graphite::collections::ObjectPool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"randomCoords") ) { randomCoords=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RandomCoordSub_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pool"));
	outFields->push(HX_CSTRING("randomCoords"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("get"),
	HX_CSTRING("pool"),
	HX_CSTRING("randomCoords"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RandomCoordSub_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RandomCoordSub_obj::__mClass,"__mClass");
};

Class RandomCoordSub_obj::__mClass;

void RandomCoordSub_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.RandomCoordSub"), hx::TCanCast< RandomCoordSub_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RandomCoordSub_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

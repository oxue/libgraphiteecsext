#include <hxcpp.h>

#ifndef INCLUDED_graphite_std_StdComp
#include <graphite/std/StdComp.h>
#endif
namespace graphite{
namespace std{

::graphite::std::StdComp StdComp_obj::CIRCLE;

::graphite::std::StdComp StdComp_obj::CIRCLECOLLISION;

::graphite::std::StdComp StdComp_obj::COORDINATES;

::graphite::std::StdComp StdComp_obj::LERP;

::graphite::std::StdComp StdComp_obj::MOUSECOORDS;

::graphite::std::StdComp StdComp_obj::POSITION;

::graphite::std::StdComp StdComp_obj::RANDOMCOORDS;

HX_DEFINE_CREATE_ENUM(StdComp_obj)

int StdComp_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("CIRCLE")) return 1;
	if (inName==HX_CSTRING("CIRCLECOLLISION")) return 6;
	if (inName==HX_CSTRING("COORDINATES")) return 3;
	if (inName==HX_CSTRING("LERP")) return 2;
	if (inName==HX_CSTRING("MOUSECOORDS")) return 4;
	if (inName==HX_CSTRING("POSITION")) return 0;
	if (inName==HX_CSTRING("RANDOMCOORDS")) return 5;
	return super::__FindIndex(inName);
}

int StdComp_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("CIRCLE")) return 0;
	if (inName==HX_CSTRING("CIRCLECOLLISION")) return 0;
	if (inName==HX_CSTRING("COORDINATES")) return 0;
	if (inName==HX_CSTRING("LERP")) return 0;
	if (inName==HX_CSTRING("MOUSECOORDS")) return 0;
	if (inName==HX_CSTRING("POSITION")) return 0;
	if (inName==HX_CSTRING("RANDOMCOORDS")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic StdComp_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("CIRCLE")) return CIRCLE;
	if (inName==HX_CSTRING("CIRCLECOLLISION")) return CIRCLECOLLISION;
	if (inName==HX_CSTRING("COORDINATES")) return COORDINATES;
	if (inName==HX_CSTRING("LERP")) return LERP;
	if (inName==HX_CSTRING("MOUSECOORDS")) return MOUSECOORDS;
	if (inName==HX_CSTRING("POSITION")) return POSITION;
	if (inName==HX_CSTRING("RANDOMCOORDS")) return RANDOMCOORDS;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("POSITION"),
	HX_CSTRING("CIRCLE"),
	HX_CSTRING("LERP"),
	HX_CSTRING("COORDINATES"),
	HX_CSTRING("MOUSECOORDS"),
	HX_CSTRING("RANDOMCOORDS"),
	HX_CSTRING("CIRCLECOLLISION"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StdComp_obj::CIRCLE,"CIRCLE");
	HX_MARK_MEMBER_NAME(StdComp_obj::CIRCLECOLLISION,"CIRCLECOLLISION");
	HX_MARK_MEMBER_NAME(StdComp_obj::COORDINATES,"COORDINATES");
	HX_MARK_MEMBER_NAME(StdComp_obj::LERP,"LERP");
	HX_MARK_MEMBER_NAME(StdComp_obj::MOUSECOORDS,"MOUSECOORDS");
	HX_MARK_MEMBER_NAME(StdComp_obj::POSITION,"POSITION");
	HX_MARK_MEMBER_NAME(StdComp_obj::RANDOMCOORDS,"RANDOMCOORDS");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StdComp_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StdComp_obj::CIRCLE,"CIRCLE");
	HX_VISIT_MEMBER_NAME(StdComp_obj::CIRCLECOLLISION,"CIRCLECOLLISION");
	HX_VISIT_MEMBER_NAME(StdComp_obj::COORDINATES,"COORDINATES");
	HX_VISIT_MEMBER_NAME(StdComp_obj::LERP,"LERP");
	HX_VISIT_MEMBER_NAME(StdComp_obj::MOUSECOORDS,"MOUSECOORDS");
	HX_VISIT_MEMBER_NAME(StdComp_obj::POSITION,"POSITION");
	HX_VISIT_MEMBER_NAME(StdComp_obj::RANDOMCOORDS,"RANDOMCOORDS");
};

static ::String sMemberFields[] = { ::String(null()) };
Class StdComp_obj::__mClass;

Dynamic __Create_StdComp_obj() { return new StdComp_obj; }

void StdComp_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.StdComp"), hx::TCanCast< StdComp_obj >,sStaticFields,sMemberFields,
	&__Create_StdComp_obj, &__Create,
	&super::__SGetClass(), &CreateStdComp_obj, sMarkStatics, sVisitStatic);
}

void StdComp_obj::__boot()
{
hx::Static(CIRCLE) = hx::CreateEnum< StdComp_obj >(HX_CSTRING("CIRCLE"),1);
hx::Static(CIRCLECOLLISION) = hx::CreateEnum< StdComp_obj >(HX_CSTRING("CIRCLECOLLISION"),6);
hx::Static(COORDINATES) = hx::CreateEnum< StdComp_obj >(HX_CSTRING("COORDINATES"),3);
hx::Static(LERP) = hx::CreateEnum< StdComp_obj >(HX_CSTRING("LERP"),2);
hx::Static(MOUSECOORDS) = hx::CreateEnum< StdComp_obj >(HX_CSTRING("MOUSECOORDS"),4);
hx::Static(POSITION) = hx::CreateEnum< StdComp_obj >(HX_CSTRING("POSITION"),0);
hx::Static(RANDOMCOORDS) = hx::CreateEnum< StdComp_obj >(HX_CSTRING("RANDOMCOORDS"),5);
}


} // end namespace graphite
} // end namespace std

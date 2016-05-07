#include <hxcpp.h>

#ifndef INCLUDED_Factory
#include <Factory.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_graphite_Comp
#include <graphite/Comp.h>
#endif
#ifndef INCLUDED_graphite_Ent
#include <graphite/Ent.h>
#endif
#ifndef INCLUDED_graphite_KC8
#include <graphite/KC8.h>
#endif
#ifndef INCLUDED_graphite_Sub
#include <graphite/Sub.h>
#endif
#ifndef INCLUDED_graphite_SubManager
#include <graphite/SubManager.h>
#endif
#ifndef INCLUDED_graphite_std_CircleComp
#include <graphite/std/CircleComp.h>
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

Void Factory_obj::__construct()
{
HX_STACK_PUSH("Factory::new","Factory.hx",44);
{
}
;
	return null();
}

Factory_obj::~Factory_obj() { }

Dynamic Factory_obj::__CreateEmpty() { return  new Factory_obj; }
hx::ObjectPtr< Factory_obj > Factory_obj::__new()
{  hx::ObjectPtr< Factory_obj > result = new Factory_obj();
	result->__construct();
	return result;}

Dynamic Factory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Factory_obj > result = new Factory_obj();
	result->__construct();
	return result;}

::graphite::Ent Factory_obj::createCircle( hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< int >  __o__radius,hx::Null< int >  __o__color){
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
int _radius = __o__radius.Default(10);
int _color = __o__color.Default(0);
	HX_STACK_PUSH("Factory::createCircle","Factory.hx",20);
	HX_STACK_ARG(_x,"_x");
	HX_STACK_ARG(_y,"_y");
	HX_STACK_ARG(_radius,"_radius");
	HX_STACK_ARG(_color,"_color");
{
		HX_STACK_LINE(21)
		::graphite::Ent e = ::graphite::Ent_obj::__new();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(22)
		::graphite::std::PositionComp p = ::graphite::KC8_obj::subManager->get(::graphite::std::StdComp_obj::POSITION)->get();		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(23)
		p->x = _x;
		HX_STACK_LINE(24)
		p->y = _y;
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			e->componentHash->set(p->id,p);
			HX_STACK_LINE(25)
			p->entity = e;
			HX_STACK_LINE(25)
			p->cache();
			HX_STACK_LINE(25)
			p->load();
			HX_STACK_LINE(25)
			p;
		}
		HX_STACK_LINE(26)
		::graphite::std::CircleComp c = ::graphite::KC8_obj::subManager->get(::graphite::std::StdComp_obj::CIRCLE)->get();		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(27)
		c->radius = _radius;
		HX_STACK_LINE(28)
		c->lineColor = _color;
		HX_STACK_LINE(29)
		c->fillColor = _color;
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			e->componentHash->set(c->id,c);
			HX_STACK_LINE(30)
			c->entity = e;
			HX_STACK_LINE(30)
			c->cache();
			HX_STACK_LINE(30)
			c->load();
			HX_STACK_LINE(30)
			c;
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::graphite::Comp _component = ::graphite::std::CoordinateComp_obj::__new(null(),null());		HX_STACK_VAR(_component,"_component");
			HX_STACK_LINE(31)
			e->componentHash->set(_component->id,_component);
			HX_STACK_LINE(31)
			_component->entity = e;
			HX_STACK_LINE(31)
			_component->cache();
			HX_STACK_LINE(31)
			_component->load();
			HX_STACK_LINE(31)
			_component;
		}
		HX_STACK_LINE(32)
		::graphite::std::LerpComp l = ::graphite::KC8_obj::subManager->get(::graphite::std::StdComp_obj::LERP)->get();		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			e->componentHash->set(l->id,l);
			HX_STACK_LINE(33)
			l->entity = e;
			HX_STACK_LINE(33)
			l->cache();
			HX_STACK_LINE(33)
			l->load();
			HX_STACK_LINE(33)
			l;
		}
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			::graphite::Comp _component = ::graphite::KC8_obj::subManager->get(::graphite::std::StdComp_obj::MOUSECOORDS)->get();		HX_STACK_VAR(_component,"_component");
			HX_STACK_LINE(34)
			e->componentHash->set(_component->id,_component);
			HX_STACK_LINE(34)
			_component->entity = e;
			HX_STACK_LINE(34)
			_component->cache();
			HX_STACK_LINE(34)
			_component->load();
			HX_STACK_LINE(34)
			_component;
		}
		HX_STACK_LINE(35)
		c->fillColor = (int)16755200;
		HX_STACK_LINE(36)
		c->lineColor = (int)16755200;
		HX_STACK_LINE(37)
		c->redraw();
		HX_STACK_LINE(39)
		{
			HX_STACK_LINE(39)
			::graphite::Comp _component = ::graphite::KC8_obj::subManager->get(::graphite::std::StdComp_obj::CIRCLECOLLISION)->get();		HX_STACK_VAR(_component,"_component");
			HX_STACK_LINE(39)
			e->componentHash->set(_component->id,_component);
			HX_STACK_LINE(39)
			_component->entity = e;
			HX_STACK_LINE(39)
			_component->cache();
			HX_STACK_LINE(39)
			_component->load();
			HX_STACK_LINE(39)
			_component;
		}
		HX_STACK_LINE(40)
		return e;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Factory_obj,createCircle,return )


Factory_obj::Factory_obj()
{
}

void Factory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Factory);
	HX_MARK_END_CLASS();
}

void Factory_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Factory_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"createCircle") ) { return createCircle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Factory_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Factory_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createCircle"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Factory_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Factory_obj::__mClass,"__mClass");
};

Class Factory_obj::__mClass;

void Factory_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Factory"), hx::TCanCast< Factory_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Factory_obj::__boot()
{
}


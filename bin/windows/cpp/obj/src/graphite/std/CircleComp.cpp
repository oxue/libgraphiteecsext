#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Shape
#include <flash/display/Shape.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_graphite_Comp
#include <graphite/Comp.h>
#endif
#ifndef INCLUDED_graphite_Ent
#include <graphite/Ent.h>
#endif
#ifndef INCLUDED_graphite_std_CircleComp
#include <graphite/std/CircleComp.h>
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

Void CircleComp_obj::__construct(int _radius,int _lineColor,int _fillColor)
{
HX_STACK_PUSH("CircleComp::new","graphite/std/CircleComp.hx",21);
{
	HX_STACK_LINE(22)
	this->radius = _radius;
	HX_STACK_LINE(23)
	this->lineColor = _lineColor;
	HX_STACK_LINE(24)
	this->fillColor = _fillColor;
	HX_STACK_LINE(25)
	super::__construct(::graphite::std::StdComp_obj::CIRCLE);
}
;
	return null();
}

CircleComp_obj::~CircleComp_obj() { }

Dynamic CircleComp_obj::__CreateEmpty() { return  new CircleComp_obj; }
hx::ObjectPtr< CircleComp_obj > CircleComp_obj::__new(int _radius,int _lineColor,int _fillColor)
{  hx::ObjectPtr< CircleComp_obj > result = new CircleComp_obj();
	result->__construct(_radius,_lineColor,_fillColor);
	return result;}

Dynamic CircleComp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircleComp_obj > result = new CircleComp_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void CircleComp_obj::unload( ){
{
		HX_STACK_PUSH("CircleComp::unload","graphite/std/CircleComp.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_LINE(48)
		::flash::Lib_obj::get_current()->get_stage()->removeChild(this->shape);
	}
return null();
}


Void CircleComp_obj::load( ){
{
		HX_STACK_PUSH("CircleComp::load","graphite/std/CircleComp.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_LINE(42)
		this->shape = ::flash::display::Shape_obj::__new();
		HX_STACK_LINE(43)
		this->redraw();
		HX_STACK_LINE(44)
		::flash::Lib_obj::get_current()->get_stage()->addChild(this->shape);
	}
return null();
}


Void CircleComp_obj::redraw( ){
{
		HX_STACK_PUSH("CircleComp::redraw","graphite/std/CircleComp.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_LINE(35)
		this->shape->get_graphics()->lineStyle((int)1,this->lineColor,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(36)
		this->shape->get_graphics()->beginFill(this->fillColor,null());
		HX_STACK_LINE(37)
		this->shape->get_graphics()->drawCircle((int)0,(int)0,this->radius);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CircleComp_obj,redraw,(void))

Void CircleComp_obj::cache( ){
{
		HX_STACK_PUSH("CircleComp::cache","graphite/std/CircleComp.hx",29);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::graphite::Comp Block( ::graphite::std::CircleComp_obj *__this){
				HX_STACK_PUSH("*::closure","graphite/std/CircleComp.hx",30);
				{
					HX_STACK_LINE(30)
					::graphite::Comp component = __this->entity->componentHash->get(::graphite::std::StdComp_obj::POSITION);		HX_STACK_VAR(component,"component");
					HX_STACK_LINE(30)
					component->dependencies->__Field(HX_CSTRING("push"),true)(__this);
					HX_STACK_LINE(30)
					return component;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		this->position = _Function_1_1::Block(this);
	}
return null();
}



CircleComp_obj::CircleComp_obj()
{
}

void CircleComp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CircleComp);
	HX_MARK_MEMBER_NAME(shape,"shape");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(fillColor,"fillColor");
	HX_MARK_MEMBER_NAME(lineColor,"lineColor");
	HX_MARK_MEMBER_NAME(radius,"radius");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CircleComp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shape,"shape");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(fillColor,"fillColor");
	HX_VISIT_MEMBER_NAME(lineColor,"lineColor");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CircleComp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		if (HX_FIELD_EQ(inName,"shape") ) { return shape; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"redraw") ) { return redraw_dyn(); }
		if (HX_FIELD_EQ(inName,"radius") ) { return radius; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillColor") ) { return fillColor; }
		if (HX_FIELD_EQ(inName,"lineColor") ) { return lineColor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircleComp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shape") ) { shape=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { radius=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< ::graphite::std::PositionComp >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillColor") ) { fillColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineColor") ) { lineColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircleComp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("shape"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("fillColor"));
	outFields->push(HX_CSTRING("lineColor"));
	outFields->push(HX_CSTRING("radius"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unload"),
	HX_CSTRING("load"),
	HX_CSTRING("redraw"),
	HX_CSTRING("cache"),
	HX_CSTRING("shape"),
	HX_CSTRING("position"),
	HX_CSTRING("fillColor"),
	HX_CSTRING("lineColor"),
	HX_CSTRING("radius"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircleComp_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircleComp_obj::__mClass,"__mClass");
};

Class CircleComp_obj::__mClass;

void CircleComp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.std.CircleComp"), hx::TCanCast< CircleComp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CircleComp_obj::__boot()
{
}

} // end namespace graphite
} // end namespace std

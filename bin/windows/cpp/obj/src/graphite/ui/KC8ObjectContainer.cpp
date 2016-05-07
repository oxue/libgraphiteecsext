#include <hxcpp.h>

#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8Object
#include <graphite/ui/KC8Object.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8ObjectContainer
#include <graphite/ui/KC8ObjectContainer.h>
#endif
namespace graphite{
namespace ui{

Void KC8ObjectContainer_obj::__construct()
{
HX_STACK_PUSH("KC8ObjectContainer::new","graphite/ui/KC8ObjectContainer.hx",16);
{
	HX_STACK_LINE(17)
	this->children = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(18)
	super::__construct();
}
;
	return null();
}

KC8ObjectContainer_obj::~KC8ObjectContainer_obj() { }

Dynamic KC8ObjectContainer_obj::__CreateEmpty() { return  new KC8ObjectContainer_obj; }
hx::ObjectPtr< KC8ObjectContainer_obj > KC8ObjectContainer_obj::__new()
{  hx::ObjectPtr< KC8ObjectContainer_obj > result = new KC8ObjectContainer_obj();
	result->__construct();
	return result;}

Dynamic KC8ObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KC8ObjectContainer_obj > result = new KC8ObjectContainer_obj();
	result->__construct();
	return result;}

Void KC8ObjectContainer_obj::unload( ){
{
		HX_STACK_PUSH("KC8ObjectContainer::unload","graphite/ui/KC8ObjectContainer.hx",37);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::graphite::ui::KC8ObjectContainer_obj *__this){
				HX_STACK_PUSH("*::closure","graphite/ui/KC8ObjectContainer.hx",38);
				{
					HX_STACK_LINE(38)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->children);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","graphite/ui/KC8ObjectContainer.hx",38);
						{
							HX_STACK_LINE(38)
							return ::flash::_Vector::Vector_Impl__obj::iterator(hx::TCastToArray(_e->__get((int)0).StaticCast< Array< ::Dynamic > >()));
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(38)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		for(::cpp::FastIterator_obj< ::graphite::ui::KC8Object > *__it = ::cpp::CreateFastIterator< ::graphite::ui::KC8Object >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::graphite::ui::KC8Object c = __it->next();
			c->unload();
		}
		HX_STACK_LINE(42)
		this->super::unload();
	}
return null();
}


::graphite::ui::KC8Object KC8ObjectContainer_obj::addKC8Object( ::graphite::ui::KC8Object _o,hx::Null< int >  __o__x,hx::Null< int >  __o__y){
int _x = __o__x.Default(0);
int _y = __o__y.Default(0);
	HX_STACK_PUSH("KC8ObjectContainer::addKC8Object","graphite/ui/KC8ObjectContainer.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_o,"_o");
	HX_STACK_ARG(_x,"_x");
	HX_STACK_ARG(_y,"_y");
{
		HX_STACK_LINE(28)
		this->addChild(hx::TCast< flash::display::DisplayObject >::cast(_o));
		HX_STACK_LINE(29)
		this->children->__Field(HX_CSTRING("push"),true)(_o);
		HX_STACK_LINE(30)
		_o->load();
		HX_STACK_LINE(31)
		_o->set_x(_x);
		HX_STACK_LINE(32)
		_o->set_y(_y);
		HX_STACK_LINE(33)
		return _o;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(KC8ObjectContainer_obj,addKC8Object,return )

Void KC8ObjectContainer_obj::load( ){
{
		HX_STACK_PUSH("KC8ObjectContainer::load","graphite/ui/KC8ObjectContainer.hx",22);
		HX_STACK_THIS(this);
	}
return null();
}



KC8ObjectContainer_obj::KC8ObjectContainer_obj()
{
}

void KC8ObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KC8ObjectContainer);
	HX_MARK_MEMBER_NAME(children,"children");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KC8ObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(children,"children");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic KC8ObjectContainer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addKC8Object") ) { return addKC8Object_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KC8ObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KC8ObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("children"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("unload"),
	HX_CSTRING("addKC8Object"),
	HX_CSTRING("load"),
	HX_CSTRING("children"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KC8ObjectContainer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KC8ObjectContainer_obj::__mClass,"__mClass");
};

Class KC8ObjectContainer_obj::__mClass;

void KC8ObjectContainer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.ui.KC8ObjectContainer"), hx::TCanCast< KC8ObjectContainer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void KC8ObjectContainer_obj::__boot()
{
}

} // end namespace graphite
} // end namespace ui

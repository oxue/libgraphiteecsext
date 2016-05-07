#include <hxcpp.h>

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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8Button
#include <graphite/ui/KC8Button.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8Frame
#include <graphite/ui/KC8Frame.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8Object
#include <graphite/ui/KC8Object.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8ObjectContainer
#include <graphite/ui/KC8ObjectContainer.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8Pane
#include <graphite/ui/KC8Pane.h>
#endif
namespace graphite{
namespace ui{

Void KC8Pane_obj::__construct(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height,hx::Null< bool >  __o__closeButton)
{
HX_STACK_PUSH("KC8Pane::new","graphite/ui/KC8Pane.hx",13);
::String _label = __o__label.Default(HX_CSTRING("default"));
int _width = __o__width.Default(400);
int _height = __o__height.Default(300);
bool _closeButton = __o__closeButton.Default(true);
{
	HX_STACK_LINE(15)
	super::__construct(_label,_width,_height);
	HX_STACK_LINE(16)
	if ((_closeButton)){
		HX_STACK_LINE(18)
		::graphite::ui::KC8Button closeButton = ::graphite::ui::KC8Button_obj::__new(HX_CSTRING("X"),(int)20,(int)20,this->KC8PaneUnload_dyn());		HX_STACK_VAR(closeButton,"closeButton");
		HX_STACK_LINE(19)
		this->addKC8Object(closeButton,null(),null());
		HX_STACK_LINE(20)
		closeButton->set_x((_width - (int)22));
		HX_STACK_LINE(21)
		closeButton->set_y((int)2);
	}
	HX_STACK_LINE(23)
	this->background->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(24)
	this->background->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null(),null(),null());
}
;
	return null();
}

KC8Pane_obj::~KC8Pane_obj() { }

Dynamic KC8Pane_obj::__CreateEmpty() { return  new KC8Pane_obj; }
hx::ObjectPtr< KC8Pane_obj > KC8Pane_obj::__new(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height,hx::Null< bool >  __o__closeButton)
{  hx::ObjectPtr< KC8Pane_obj > result = new KC8Pane_obj();
	result->__construct(__o__label,__o__width,__o__height,__o__closeButton);
	return result;}

Dynamic KC8Pane_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KC8Pane_obj > result = new KC8Pane_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void KC8Pane_obj::mouseDown( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("KC8Pane::mouseDown","graphite/ui/KC8Pane.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(46)
		this->startDrag(false,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KC8Pane_obj,mouseDown,(void))

Void KC8Pane_obj::mouseUp( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("KC8Pane::mouseUp","graphite/ui/KC8Pane.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(41)
		this->stopDrag();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KC8Pane_obj,mouseUp,(void))

Void KC8Pane_obj::unload( ){
{
		HX_STACK_PUSH("KC8Pane::unload","graphite/ui/KC8Pane.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_LINE(34)
		this->background->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->mouseDown_dyn(),null());
		HX_STACK_LINE(35)
		this->background->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->mouseUp_dyn(),null());
		HX_STACK_LINE(37)
		this->super::unload();
	}
return null();
}


Void KC8Pane_obj::KC8PaneUnload( ::graphite::ui::KC8Button b){
{
		HX_STACK_PUSH("KC8Pane::KC8PaneUnload","graphite/ui/KC8Pane.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(28)
		this->unload();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KC8Pane_obj,KC8PaneUnload,(void))


KC8Pane_obj::KC8Pane_obj()
{
}

void KC8Pane_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KC8Pane);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KC8Pane_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic KC8Pane_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"KC8PaneUnload") ) { return KC8PaneUnload_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KC8Pane_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void KC8Pane_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("unload"),
	HX_CSTRING("KC8PaneUnload"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KC8Pane_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KC8Pane_obj::__mClass,"__mClass");
};

Class KC8Pane_obj::__mClass;

void KC8Pane_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.ui.KC8Pane"), hx::TCanCast< KC8Pane_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void KC8Pane_obj::__boot()
{
}

} // end namespace graphite
} // end namespace ui

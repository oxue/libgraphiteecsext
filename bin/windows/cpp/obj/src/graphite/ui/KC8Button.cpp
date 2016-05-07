#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_display_Shape
#include <flash/display/Shape.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
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
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8Button
#include <graphite/ui/KC8Button.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8Object
#include <graphite/ui/KC8Object.h>
#endif
#ifndef INCLUDED_graphite_ui_KC8UI
#include <graphite/ui/KC8UI.h>
#endif
namespace graphite{
namespace ui{

Void KC8Button_obj::__construct(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height,Dynamic m__callback)
{
HX_STACK_PUSH("KC8Button::new","graphite/ui/KC8Button.hx",22);
::String _label = __o__label.Default(HX_CSTRING("default"));
int _width = __o__width.Default(100);
int _height = __o__height.Default(20);
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(25)
	this->background = ::flash::display::Shape_obj::__new();
	HX_STACK_LINE(26)
	this->background->get_graphics()->lineStyle((int)1,::Std_obj::parseInt(::graphite::ui::KC8UI_obj::configOptions->__Field(HX_CSTRING("chrome_color_1"),true)),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(27)
	this->background->get_graphics()->beginFill(::Std_obj::parseInt(::graphite::ui::KC8UI_obj::configOptions->__Field(HX_CSTRING("chrome_color_2"),true)),null());
	HX_STACK_LINE(28)
	this->background->get_graphics()->drawRect((int)0,(int)0,_width,_height);
	HX_STACK_LINE(29)
	this->addChild(this->background);
	HX_STACK_LINE(31)
	this->label = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(32)
	this->label->set_defaultTextFormat(::graphite::ui::KC8UI_obj::textFormat);
	HX_STACK_LINE(33)
	this->label->set_text(_label);
	HX_STACK_LINE(34)
	this->label->set_mouseEnabled(false);
	HX_STACK_LINE(35)
	this->label->set_selectable(false);
	HX_STACK_LINE(36)
	this->addChild(this->label);
	HX_STACK_LINE(38)
	this->darken = ::flash::display::Shape_obj::__new();
	HX_STACK_LINE(39)
	this->darken->get_graphics()->beginFill((int)0,null());
	HX_STACK_LINE(40)
	this->darken->set_alpha(0.2);
	HX_STACK_LINE(41)
	this->darken->get_graphics()->drawRect((int)0,(int)0,_width,_height);
	HX_STACK_LINE(42)
	this->addChild(this->darken);
	HX_STACK_LINE(43)
	this->darken->set_visible(false);
	HX_STACK_LINE(45)
	this->addEventListener(::flash::events::MouseEvent_obj::ROLL_OVER,this->rollOver_dyn(),null(),null(),null());
	HX_STACK_LINE(46)
	this->addEventListener(::flash::events::MouseEvent_obj::ROLL_OUT,this->rollOut_dyn(),null(),null(),null());
	HX_STACK_LINE(48)
	this->label->set_width(_width);
	HX_STACK_LINE(49)
	this->label->set_height((  (((this->label->get_textHeight() > (int)20))) ? Float(this->label->get_textHeight()) : Float((int)20) ));
	HX_STACK_LINE(51)
	this->label->set_y((((_height - this->label->get_textHeight())) * 0.5));
	HX_STACK_LINE(53)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->down_dyn(),null(),null(),null());
	HX_STACK_LINE(54)
	this->buttonMode = true;
	HX_STACK_LINE(56)
	this->mcallback = m__callback;
}
;
	return null();
}

KC8Button_obj::~KC8Button_obj() { }

Dynamic KC8Button_obj::__CreateEmpty() { return  new KC8Button_obj; }
hx::ObjectPtr< KC8Button_obj > KC8Button_obj::__new(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height,Dynamic m__callback)
{  hx::ObjectPtr< KC8Button_obj > result = new KC8Button_obj();
	result->__construct(__o__label,__o__width,__o__height,m__callback);
	return result;}

Dynamic KC8Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KC8Button_obj > result = new KC8Button_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void KC8Button_obj::release( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("KC8Button::release","graphite/ui/KC8Button.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(103)
		this->get_stage()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->release_dyn(),null());
		HX_STACK_LINE(104)
		if (((this->over == false))){
			HX_STACK_LINE(105)
			this->darken->set_visible(false);
		}
		else{
			HX_STACK_LINE(107)
			this->darken->set_alpha(0.05);
		}
		HX_STACK_LINE(108)
		if (((bool((bool((bool((bool((this->mcallback_dyn() != null())) && bool((this->get_mouseX() > (int)0)))) && bool((this->get_mouseX() < this->get_width())))) && bool((this->get_mouseY() > (int)0)))) && bool((this->get_mouseY() < this->get_height()))))){
			HX_STACK_LINE(109)
			this->mcallback(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KC8Button_obj,release,(void))

Void KC8Button_obj::down( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("KC8Button::down","graphite/ui/KC8Button.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(96)
		this->darken->set_visible(true);
		HX_STACK_LINE(97)
		this->darken->set_alpha(0.2);
		HX_STACK_LINE(98)
		this->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->release_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KC8Button_obj,down,(void))

Void KC8Button_obj::unload( ){
{
		HX_STACK_PUSH("KC8Button::unload","graphite/ui/KC8Button.hx",86);
		HX_STACK_THIS(this);
		HX_STACK_LINE(87)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->down_dyn(),null());
		HX_STACK_LINE(88)
		this->removeEventListener(::flash::events::MouseEvent_obj::ROLL_OVER,this->rollOver_dyn(),null());
		HX_STACK_LINE(89)
		this->removeEventListener(::flash::events::MouseEvent_obj::ROLL_OUT,this->rollOut_dyn(),null());
		HX_STACK_LINE(91)
		this->super::unload();
	}
return null();
}


Void KC8Button_obj::load( ){
{
		HX_STACK_PUSH("KC8Button::load","graphite/ui/KC8Button.hx",81);
		HX_STACK_THIS(this);
	}
return null();
}


Void KC8Button_obj::rollOver( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("KC8Button::rollOver","graphite/ui/KC8Button.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(75)
		this->darken->set_visible(true);
		HX_STACK_LINE(76)
		this->darken->set_alpha(.05);
		HX_STACK_LINE(77)
		this->over = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KC8Button_obj,rollOver,(void))

Void KC8Button_obj::rollOut( ::flash::events::MouseEvent e){
{
		HX_STACK_PUSH("KC8Button::rollOut","graphite/ui/KC8Button.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(66)
		this->darken->set_visible(false);
		HX_STACK_LINE(67)
		this->darken->set_alpha(.2);
		HX_STACK_LINE(68)
		this->over = false;
		HX_STACK_LINE(69)
		if (((this->get_stage() != null()))){
			HX_STACK_LINE(70)
			this->release(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KC8Button_obj,rollOut,(void))

::String KC8Button_obj::get_label( ){
	HX_STACK_PUSH("KC8Button::get_label","graphite/ui/KC8Button.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return this->label->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(KC8Button_obj,get_label,return )


KC8Button_obj::KC8Button_obj()
{
}

void KC8Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KC8Button);
	HX_MARK_MEMBER_NAME(over,"over");
	HX_MARK_MEMBER_NAME(darken,"darken");
	HX_MARK_MEMBER_NAME(mcallback,"mcallback");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(label,"label");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KC8Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(over,"over");
	HX_VISIT_MEMBER_NAME(darken,"darken");
	HX_VISIT_MEMBER_NAME(mcallback,"mcallback");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(label,"label");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic KC8Button_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { return down_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"over") ) { return over; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"darken") ) { return darken; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
		if (HX_FIELD_EQ(inName,"rollOut") ) { return rollOut_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rollOver") ) { return rollOver_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_label") ) { return get_label_dyn(); }
		if (HX_FIELD_EQ(inName,"mcallback") ) { return mcallback; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KC8Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"over") ) { over=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"darken") ) { darken=inValue.Cast< ::flash::display::Shape >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mcallback") ) { mcallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::flash::display::Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KC8Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("over"));
	outFields->push(HX_CSTRING("darken"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("label"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("release"),
	HX_CSTRING("down"),
	HX_CSTRING("unload"),
	HX_CSTRING("load"),
	HX_CSTRING("rollOver"),
	HX_CSTRING("rollOut"),
	HX_CSTRING("get_label"),
	HX_CSTRING("over"),
	HX_CSTRING("darken"),
	HX_CSTRING("mcallback"),
	HX_CSTRING("background"),
	HX_CSTRING("label"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KC8Button_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KC8Button_obj::__mClass,"__mClass");
};

Class KC8Button_obj::__mClass;

void KC8Button_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.ui.KC8Button"), hx::TCanCast< KC8Button_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void KC8Button_obj::__boot()
{
}

} // end namespace graphite
} // end namespace ui

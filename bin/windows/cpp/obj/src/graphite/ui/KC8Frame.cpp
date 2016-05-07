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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
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
#ifndef INCLUDED_graphite_ui_KC8UI
#include <graphite/ui/KC8UI.h>
#endif
namespace graphite{
namespace ui{

Void KC8Frame_obj::__construct(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height)
{
HX_STACK_PUSH("KC8Frame::new","graphite/ui/KC8Frame.hx",19);
::String _label = __o__label.Default(HX_CSTRING("default"));
int _width = __o__width.Default(400);
int _height = __o__height.Default(300);
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	this->background = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(22)
	this->background->get_graphics()->lineStyle((int)1,::Std_obj::parseInt(::graphite::ui::KC8UI_obj::configOptions->__Field(HX_CSTRING("chrome_color_3"),true)),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(23)
	this->background->get_graphics()->beginFill(::Std_obj::parseInt(::graphite::ui::KC8UI_obj::configOptions->__Field(HX_CSTRING("chrome_color_2"),true)),null());
	HX_STACK_LINE(24)
	this->background->get_graphics()->drawRect((int)0,(int)0,_width,_height);
	HX_STACK_LINE(25)
	this->addChild(this->background);
	HX_STACK_LINE(27)
	this->label = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(28)
	this->label->set_defaultTextFormat(::graphite::ui::KC8UI_obj::textFormatLeft);
	HX_STACK_LINE(29)
	this->label->set_text(_label);
	HX_STACK_LINE(30)
	this->label->set_mouseEnabled(false);
	HX_STACK_LINE(31)
	this->label->set_selectable(false);
	HX_STACK_LINE(32)
	this->label->set_width(_width);
	HX_STACK_LINE(33)
	this->label->set_x((int)5);
	HX_STACK_LINE(34)
	this->label->set_y(((int)10 - (this->label->get_textHeight() * 0.5)));
	HX_STACK_LINE(35)
	this->addChild(this->label);
}
;
	return null();
}

KC8Frame_obj::~KC8Frame_obj() { }

Dynamic KC8Frame_obj::__CreateEmpty() { return  new KC8Frame_obj; }
hx::ObjectPtr< KC8Frame_obj > KC8Frame_obj::__new(::String __o__label,hx::Null< int >  __o__width,hx::Null< int >  __o__height)
{  hx::ObjectPtr< KC8Frame_obj > result = new KC8Frame_obj();
	result->__construct(__o__label,__o__width,__o__height);
	return result;}

Dynamic KC8Frame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KC8Frame_obj > result = new KC8Frame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


KC8Frame_obj::KC8Frame_obj()
{
}

void KC8Frame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KC8Frame);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(background,"background");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void KC8Frame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(background,"background");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic KC8Frame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KC8Frame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KC8Frame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("background"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("label"),
	HX_CSTRING("background"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KC8Frame_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KC8Frame_obj::__mClass,"__mClass");
};

Class KC8Frame_obj::__mClass;

void KC8Frame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.ui.KC8Frame"), hx::TCanCast< KC8Frame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void KC8Frame_obj::__boot()
{
}

} // end namespace graphite
} // end namespace ui

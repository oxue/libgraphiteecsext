#include <hxcpp.h>

#ifndef INCLUDED_Factory
#include <Factory.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_graphite_Ent
#include <graphite/Ent.h>
#endif
#ifndef INCLUDED_graphite_KC8
#include <graphite/KC8.h>
#endif
#ifndef INCLUDED_graphite_State
#include <graphite/State.h>
#endif
#ifndef INCLUDED_graphite_Sub
#include <graphite/Sub.h>
#endif
#ifndef INCLUDED_graphite_SubManager
#include <graphite/SubManager.h>
#endif
#ifndef INCLUDED_graphite_io_GraphicLoader
#include <graphite/io/GraphicLoader.h>
#endif
#ifndef INCLUDED_graphite_std_CircleCollisionSub
#include <graphite/std/CircleCollisionSub.h>
#endif
#ifndef INCLUDED_graphite_std_CircleSub
#include <graphite/std/CircleSub.h>
#endif
#ifndef INCLUDED_graphite_std_LerpSub
#include <graphite/std/LerpSub.h>
#endif
#ifndef INCLUDED_graphite_std_MouseCoordSub
#include <graphite/std/MouseCoordSub.h>
#endif
#ifndef INCLUDED_graphite_std_PositionSub
#include <graphite/std/PositionSub.h>
#endif
#ifndef INCLUDED_graphite_std_RandomCoordSub
#include <graphite/std/RandomCoordSub.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void GameState_obj::__construct()
{
HX_STACK_PUSH("GameState::new","GameState.hx",26);
{
	HX_STACK_LINE(26)
	super::__construct();
}
;
	return null();
}

GameState_obj::~GameState_obj() { }

Dynamic GameState_obj::__CreateEmpty() { return  new GameState_obj; }
hx::ObjectPtr< GameState_obj > GameState_obj::__new()
{  hx::ObjectPtr< GameState_obj > result = new GameState_obj();
	result->__construct();
	return result;}

Dynamic GameState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameState_obj > result = new GameState_obj();
	result->__construct();
	return result;}

Void GameState_obj::done( ){
{
		HX_STACK_PUSH("GameState::done","GameState.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		::flash::Lib_obj::get_current()->addChild(::flash::display::Bitmap_obj::__new(this->l->data,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,done,(void))

Void GameState_obj::load( ){
{
		HX_STACK_PUSH("GameState::load","GameState.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_LINE(34)
		::haxe::Log_obj::trace(HX_CSTRING("hello Graphite!"),hx::SourceInfo(HX_CSTRING("GameState.hx"),34,HX_CSTRING("GameState"),HX_CSTRING("load")));
		HX_STACK_LINE(36)
		::graphite::KC8_obj::subManager->addSub(::graphite::std::PositionSub_obj::__new());
		HX_STACK_LINE(37)
		::graphite::KC8_obj::subManager->addSub(::graphite::std::CircleSub_obj::__new());
		HX_STACK_LINE(38)
		::graphite::KC8_obj::subManager->addSub(::graphite::std::LerpSub_obj::__new());
		HX_STACK_LINE(39)
		::graphite::KC8_obj::subManager->addSub(::graphite::std::MouseCoordSub_obj::__new());
		HX_STACK_LINE(40)
		::graphite::KC8_obj::subManager->addSub(::graphite::std::CircleCollisionSub_obj::__new());
		HX_STACK_LINE(41)
		::graphite::KC8_obj::subManager->addSub(::graphite::std::RandomCoordSub_obj::__new());
		HX_STACK_LINE(43)
		::Factory_obj::createCircle((int)0,(int)0,(int)100,(int)16711935);
		HX_STACK_LINE(45)
		this->l = ::graphite::io::GraphicLoader_obj::__new();
		HX_STACK_LINE(46)
		this->l->load(HX_CSTRING("graphite_logo.png"),this->done_dyn());
	}
return null();
}



GameState_obj::GameState_obj()
{
}

void GameState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameState);
	HX_MARK_MEMBER_NAME(l,"l");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(l,"l");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GameState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { return l; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"done") ) { return done_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast< ::graphite::io::GraphicLoader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("l"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("done"),
	HX_CSTRING("load"),
	HX_CSTRING("l"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

Class GameState_obj::__mClass;

void GameState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameState"), hx::TCanCast< GameState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GameState_obj::__boot()
{
}


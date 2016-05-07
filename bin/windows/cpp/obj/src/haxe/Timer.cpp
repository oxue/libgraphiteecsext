#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
namespace haxe{

Void Timer_obj::__construct(Float time)
{
HX_STACK_PUSH("Timer::new","haxe/Timer.hx",108);
{
	HX_STACK_LINE(110)
	this->mTime = time;
	HX_STACK_LINE(111)
	::haxe::Timer_obj::sRunningTimers->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(112)
	this->mFireAt = (::haxe::Timer_obj::getMS() + this->mTime);
	HX_STACK_LINE(113)
	this->mRunning = true;
}
;
	return null();
}

Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float time)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(time);
	return result;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Timer_obj::__check( Float inTime){
{
		HX_STACK_PUSH("Timer::__check","haxe/Timer.hx",187);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inTime,"inTime");
		HX_STACK_LINE(187)
		if (((inTime >= this->mFireAt))){
			HX_STACK_LINE(191)
			hx::AddEq(this->mFireAt,this->mTime);
			HX_STACK_LINE(192)
			this->run();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,__check,(void))

Void Timer_obj::stop( ){
{
		HX_STACK_PUSH("Timer::stop","haxe/Timer.hx",165);
		HX_STACK_THIS(this);
		HX_STACK_LINE(165)
		if ((this->mRunning)){
			HX_STACK_LINE(169)
			this->mRunning = false;
			HX_STACK_LINE(171)
			{
				HX_STACK_LINE(171)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(171)
				while(((_g1 < _g))){
					HX_STACK_LINE(171)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(173)
					if (((::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >() == hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(175)
						::haxe::Timer_obj::sRunningTimers[i] = null();
						HX_STACK_LINE(176)
						break;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_STACK_PUSH("Timer::run","haxe/Timer.hx",151);
		HX_STACK_THIS(this);
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Array< ::Dynamic > Timer_obj::sRunningTimers;

::haxe::Timer Timer_obj::delay( Dynamic f,int time){
	HX_STACK_PUSH("Timer::delay","haxe/Timer.hx",118);
	HX_STACK_ARG(f,"f");
	HX_STACK_ARG(time,"time");
	HX_STACK_LINE(118)
	Dynamic f1 = Dynamic( Array_obj<Dynamic>::__new().Add(f));		HX_STACK_VAR(f1,"f1");
	HX_STACK_LINE(120)
	Array< ::Dynamic > t = Array_obj< ::Dynamic >::__new().Add(::haxe::Timer_obj::__new(time));		HX_STACK_VAR(t,"t");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,t,Dynamic,f1)
	Void run(){
		HX_STACK_PUSH("*::_Function_1_1","haxe/Timer.hx",122);
		{
			HX_STACK_LINE(124)
			t->__get((int)0).StaticCast< ::haxe::Timer >()->stop();
			HX_STACK_LINE(125)
			f1->__GetItem((int)0)().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(122)
	t->__get((int)0).StaticCast< ::haxe::Timer >()->run =  Dynamic(new _Function_1_1(t,f1));
	HX_STACK_LINE(129)
	return t->__get((int)0).StaticCast< ::haxe::Timer >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::getMS( ){
	HX_STACK_PUSH("Timer::getMS","haxe/Timer.hx",134);
	HX_STACK_LINE(134)
	return (::haxe::Timer_obj::stamp() * 1000.0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,getMS,return )

Dynamic Timer_obj::measure( Dynamic f,Dynamic pos){
	HX_STACK_PUSH("Timer::measure","haxe/Timer.hx",141);
	HX_STACK_ARG(f,"f");
	HX_STACK_ARG(pos,"pos");
	HX_STACK_LINE(143)
	Float t0 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(t0,"t0");
	HX_STACK_LINE(144)
	Dynamic r = f();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(145)
	::haxe::Log_obj::trace(((::haxe::Timer_obj::stamp() - t0) + HX_CSTRING("s")),pos);
	HX_STACK_LINE(146)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

Float Timer_obj::stamp( ){
	HX_STACK_PUSH("Timer::stamp","haxe/Timer.hx",158);
	HX_STACK_LINE(158)
	return ::haxe::Timer_obj::lime_time_stamp();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )

Void Timer_obj::__checkTimers( ){
{
		HX_STACK_PUSH("Timer::__checkTimers","haxe/Timer.hx",199);
		HX_STACK_LINE(201)
		Float now = ::haxe::Timer_obj::getMS();		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(202)
		bool foundNull = false;		HX_STACK_VAR(foundNull,"foundNull");
		HX_STACK_LINE(203)
		::haxe::Timer timer;		HX_STACK_VAR(timer,"timer");
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(205)
			while(((_g1 < _g))){
				HX_STACK_LINE(205)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(207)
				timer = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();
				HX_STACK_LINE(209)
				if (((timer != null()))){
					HX_STACK_LINE(209)
					timer->__check(now);
				}
				else{
					HX_STACK_LINE(213)
					foundNull = true;
				}
			}
		}
		HX_STACK_LINE(221)
		if ((foundNull)){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			bool run(::haxe::Timer val){
				HX_STACK_PUSH("*::_Function_2_1","haxe/Timer.hx",223);
				HX_STACK_ARG(val,"val");
				{
					HX_STACK_LINE(223)
					return (val != null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(221)
			::haxe::Timer_obj::sRunningTimers = ::haxe::Timer_obj::sRunningTimers->filter( Dynamic(new _Function_2_1()));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,__checkTimers,(void))

Float Timer_obj::__nextWake( Float limit){
	HX_STACK_PUSH("Timer::__nextWake","haxe/Timer.hx",230);
	HX_STACK_ARG(limit,"limit");
	HX_STACK_LINE(232)
	Float now = (::haxe::Timer_obj::lime_time_stamp() * 1000.0);		HX_STACK_VAR(now,"now");
	HX_STACK_LINE(233)
	Float sleep;		HX_STACK_VAR(sleep,"sleep");
	HX_STACK_LINE(235)
	{
		HX_STACK_LINE(235)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::haxe::Timer_obj::sRunningTimers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(235)
		while(((_g < _g1->length))){
			HX_STACK_LINE(235)
			::haxe::Timer timer = _g1->__get(_g).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(235)
			++(_g);
			HX_STACK_LINE(237)
			if (((timer == null()))){
				HX_STACK_LINE(238)
				continue;
			}
			HX_STACK_LINE(240)
			sleep = (timer->mFireAt - now);
			HX_STACK_LINE(242)
			if (((sleep < limit))){
				HX_STACK_LINE(244)
				limit = sleep;
				HX_STACK_LINE(246)
				if (((limit < (int)0))){
					HX_STACK_LINE(246)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(256)
	return (limit * 0.001);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,__nextWake,return )

Dynamic Timer_obj::lime_time_stamp;


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_MEMBER_NAME(mRunning,"mRunning");
	HX_MARK_MEMBER_NAME(mFireAt,"mFireAt");
	HX_MARK_MEMBER_NAME(mTime,"mTime");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(run,"run");
	HX_VISIT_MEMBER_NAME(mRunning,"mRunning");
	HX_VISIT_MEMBER_NAME(mFireAt,"mFireAt");
	HX_VISIT_MEMBER_NAME(mTime,"mTime");
}

Dynamic Timer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"getMS") ) { return getMS_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		if (HX_FIELD_EQ(inName,"mTime") ) { return mTime; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return measure_dyn(); }
		if (HX_FIELD_EQ(inName,"__check") ) { return __check_dyn(); }
		if (HX_FIELD_EQ(inName,"mFireAt") ) { return mFireAt; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { return mRunning; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__nextWake") ) { return __nextWake_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__checkTimers") ) { return __checkTimers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { return sRunningTimers; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_time_stamp") ) { return lime_time_stamp; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { mTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { mFireAt=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { mRunning=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { sRunningTimers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_time_stamp") ) { lime_time_stamp=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mRunning"));
	outFields->push(HX_CSTRING("mFireAt"));
	outFields->push(HX_CSTRING("mTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sRunningTimers"),
	HX_CSTRING("delay"),
	HX_CSTRING("getMS"),
	HX_CSTRING("measure"),
	HX_CSTRING("stamp"),
	HX_CSTRING("__checkTimers"),
	HX_CSTRING("__nextWake"),
	HX_CSTRING("lime_time_stamp"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__check"),
	HX_CSTRING("stop"),
	HX_CSTRING("run"),
	HX_CSTRING("mRunning"),
	HX_CSTRING("mFireAt"),
	HX_CSTRING("mTime"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_MARK_MEMBER_NAME(Timer_obj::lime_time_stamp,"lime_time_stamp");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_VISIT_MEMBER_NAME(Timer_obj::lime_time_stamp,"lime_time_stamp");
};

Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Timer"), hx::TCanCast< Timer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Timer_obj::__boot()
{
	sRunningTimers= Array_obj< ::Dynamic >::__new();
	lime_time_stamp= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_time_stamp"),(int)0);
}

} // end namespace haxe
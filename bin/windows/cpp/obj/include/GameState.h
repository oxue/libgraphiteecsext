#ifndef INCLUDED_GameState
#define INCLUDED_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/State.h>
HX_DECLARE_CLASS0(GameState)
HX_DECLARE_CLASS1(graphite,State)
HX_DECLARE_CLASS2(graphite,io,GraphicLoader)


class HXCPP_CLASS_ATTRIBUTES  GameState_obj : public ::graphite::State_obj{
	public:
		typedef ::graphite::State_obj super;
		typedef GameState_obj OBJ_;
		GameState_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< GameState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GameState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameState"); }

		virtual Void done( );
		Dynamic done_dyn();

		virtual Void load( );

		::graphite::io::GraphicLoader l;
};


#endif /* INCLUDED_GameState */ 

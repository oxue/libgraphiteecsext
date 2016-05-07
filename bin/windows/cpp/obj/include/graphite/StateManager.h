#ifndef INCLUDED_graphite_StateManager
#define INCLUDED_graphite_StateManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(graphite,State)
HX_DECLARE_CLASS1(graphite,StateManager)
namespace graphite{


class HXCPP_CLASS_ATTRIBUTES  StateManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StateManager_obj OBJ_;
		StateManager_obj();
		Void __construct(::graphite::State _initialState);

	public:
		static hx::ObjectPtr< StateManager_obj > __new(::graphite::State _initialState);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StateManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StateManager"); }

		virtual Void setState( ::graphite::State _state);
		Dynamic setState_dyn();

		virtual Void requestStateChange( ::graphite::State _state);
		Dynamic requestStateChange_dyn();

		::graphite::State currentState;
};

} // end namespace graphite

#endif /* INCLUDED_graphite_StateManager */ 

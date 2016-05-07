#ifndef INCLUDED_graphite_Sub
#define INCLUDED_graphite_Sub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS1(graphite,Sub)
HX_DECLARE_CLASS2(graphite,std,StdComp)
namespace graphite{


class HXCPP_CLASS_ATTRIBUTES  Sub_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sub_obj OBJ_;
		Sub_obj();
		Void __construct(int _priority,::graphite::std::StdComp _id);

	public:
		static hx::ObjectPtr< Sub_obj > __new(int _priority,::graphite::std::StdComp _id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Sub_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sub"); }

		virtual Void wipe( );
		Dynamic wipe_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual ::graphite::Comp get( );
		Dynamic get_dyn();

		::graphite::std::StdComp id;
		bool remove;
		int priority;
};

} // end namespace graphite

#endif /* INCLUDED_graphite_Sub */ 

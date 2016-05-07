#ifndef INCLUDED_graphite_std_RandomCoordSub
#define INCLUDED_graphite_std_RandomCoordSub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Sub.h>
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS1(graphite,Sub)
HX_DECLARE_CLASS2(graphite,collections,ObjectPool)
HX_DECLARE_CLASS2(graphite,std,RandomCoordComp)
HX_DECLARE_CLASS2(graphite,std,RandomCoordSub)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  RandomCoordSub_obj : public ::graphite::Sub_obj{
	public:
		typedef ::graphite::Sub_obj super;
		typedef RandomCoordSub_obj OBJ_;
		RandomCoordSub_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RandomCoordSub_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RandomCoordSub_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RandomCoordSub"); }

		virtual Void update( );

		virtual ::graphite::Comp get( );

		::graphite::collections::ObjectPool pool;
		Array< ::Dynamic > randomCoords;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_RandomCoordSub */ 

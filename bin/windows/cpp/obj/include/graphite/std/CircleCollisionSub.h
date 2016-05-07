#ifndef INCLUDED_graphite_std_CircleCollisionSub
#define INCLUDED_graphite_std_CircleCollisionSub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Sub.h>
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS1(graphite,Sub)
HX_DECLARE_CLASS2(graphite,collections,ObjectPool)
HX_DECLARE_CLASS2(graphite,std,CircleCollisionComp)
HX_DECLARE_CLASS2(graphite,std,CircleCollisionSub)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  CircleCollisionSub_obj : public ::graphite::Sub_obj{
	public:
		typedef ::graphite::Sub_obj super;
		typedef CircleCollisionSub_obj OBJ_;
		CircleCollisionSub_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CircleCollisionSub_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CircleCollisionSub_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CircleCollisionSub"); }

		virtual Void update( );

		virtual Void resolve( );
		Dynamic resolve_dyn();

		virtual ::graphite::Comp get( );

		::graphite::collections::ObjectPool pool;
		Array< ::Dynamic > circleCollisions;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_CircleCollisionSub */ 

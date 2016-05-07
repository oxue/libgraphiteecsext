#ifndef INCLUDED_graphite_std_CircleCollisionComp
#define INCLUDED_graphite_std_CircleCollisionComp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Comp.h>
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS2(graphite,std,CircleCollisionComp)
HX_DECLARE_CLASS2(graphite,std,CircleComp)
HX_DECLARE_CLASS2(graphite,std,PositionComp)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  CircleCollisionComp_obj : public ::graphite::Comp_obj{
	public:
		typedef ::graphite::Comp_obj super;
		typedef CircleCollisionComp_obj OBJ_;
		CircleCollisionComp_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CircleCollisionComp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CircleCollisionComp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CircleCollisionComp"); }

		virtual Void cache( );

		::graphite::std::CircleComp circle;
		::graphite::std::PositionComp position;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_CircleCollisionComp */ 

#ifndef INCLUDED_graphite_std_CircleComp
#define INCLUDED_graphite_std_CircleComp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <graphite/Comp.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,Shape)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(graphite,Comp)
HX_DECLARE_CLASS2(graphite,std,CircleComp)
HX_DECLARE_CLASS2(graphite,std,PositionComp)
namespace graphite{
namespace std{


class HXCPP_CLASS_ATTRIBUTES  CircleComp_obj : public ::graphite::Comp_obj{
	public:
		typedef ::graphite::Comp_obj super;
		typedef CircleComp_obj OBJ_;
		CircleComp_obj();
		Void __construct(int _radius,int _lineColor,int _fillColor);

	public:
		static hx::ObjectPtr< CircleComp_obj > __new(int _radius,int _lineColor,int _fillColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CircleComp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CircleComp"); }

		virtual Void unload( );

		virtual Void load( );

		virtual Void redraw( );
		Dynamic redraw_dyn();

		virtual Void cache( );

		::flash::display::Shape shape;
		::graphite::std::PositionComp position;
		int fillColor;
		int lineColor;
		int radius;
};

} // end namespace graphite
} // end namespace std

#endif /* INCLUDED_graphite_std_CircleComp */ 

#ifndef INCLUDED_graphite_collections_ObjectPool
#define INCLUDED_graphite_collections_ObjectPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(graphite,collections,ObjectPool)
namespace graphite{
namespace collections{


class HXCPP_CLASS_ATTRIBUTES  ObjectPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectPool_obj OBJ_;
		ObjectPool_obj();
		Void __construct(int _initialSize,hx::Null< int >  __o__incremental);

	public:
		static hx::ObjectPtr< ObjectPool_obj > __new(int _initialSize,hx::Null< int >  __o__incremental);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ObjectPool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ObjectPool"); }

		virtual Void alloc( Dynamic _o);
		Dynamic alloc_dyn();

		virtual Dynamic get( );
		Dynamic get_dyn();

		int incremental;
		Dynamic pool;
		int size;
};

} // end namespace graphite
} // end namespace collections

#endif /* INCLUDED_graphite_collections_ObjectPool */ 

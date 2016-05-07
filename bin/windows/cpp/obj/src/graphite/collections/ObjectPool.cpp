#include <hxcpp.h>

#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_graphite_collections_ObjectPool
#include <graphite/collections/ObjectPool.h>
#endif
namespace graphite{
namespace collections{

Void ObjectPool_obj::__construct(int _initialSize,hx::Null< int >  __o__incremental)
{
HX_STACK_PUSH("ObjectPool::new","graphite/collections/ObjectPool.hx",22);
int _incremental = __o__incremental.Default(10);
{
	HX_STACK_LINE(23)
	this->pool = ::flash::_Vector::Vector_Impl__obj::_new(_initialSize,null());
	HX_STACK_LINE(24)
	this->incremental = _incremental;
	HX_STACK_LINE(25)
	this->size = (int)0;
}
;
	return null();
}

ObjectPool_obj::~ObjectPool_obj() { }

Dynamic ObjectPool_obj::__CreateEmpty() { return  new ObjectPool_obj; }
hx::ObjectPtr< ObjectPool_obj > ObjectPool_obj::__new(int _initialSize,hx::Null< int >  __o__incremental)
{  hx::ObjectPtr< ObjectPool_obj > result = new ObjectPool_obj();
	result->__construct(_initialSize,__o__incremental);
	return result;}

Dynamic ObjectPool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectPool_obj > result = new ObjectPool_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ObjectPool_obj::alloc( Dynamic _o){
{
		HX_STACK_PUSH("ObjectPool::alloc","graphite/collections/ObjectPool.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_o,"_o");
		HX_STACK_LINE(46)
		this->pool->__GetItem((this->size)++);
		HX_STACK_LINE(47)
		if (((this->size == this->pool->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(48)
			Dynamic _g = this->pool;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			(_g->__Field(HX_CSTRING("length"),true) + this->incremental);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectPool_obj,alloc,(void))

Dynamic ObjectPool_obj::get( ){
	HX_STACK_PUSH("ObjectPool::get","graphite/collections/ObjectPool.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(33)
	if (((this->size == (int)0))){
		HX_STACK_LINE(35)
		return null();
	}
	else{
		HX_STACK_LINE(37)
		return this->pool->__GetItem(--(this->size));
	}
	HX_STACK_LINE(33)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectPool_obj,get,return )


ObjectPool_obj::ObjectPool_obj()
{
}

void ObjectPool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectPool);
	HX_MARK_MEMBER_NAME(incremental,"incremental");
	HX_MARK_MEMBER_NAME(pool,"pool");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_END_CLASS();
}

void ObjectPool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(incremental,"incremental");
	HX_VISIT_MEMBER_NAME(pool,"pool");
	HX_VISIT_MEMBER_NAME(size,"size");
}

Dynamic ObjectPool_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { return pool; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"incremental") ) { return incremental; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectPool_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"incremental") ) { incremental=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectPool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("incremental"));
	outFields->push(HX_CSTRING("pool"));
	outFields->push(HX_CSTRING("size"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("get"),
	HX_CSTRING("incremental"),
	HX_CSTRING("pool"),
	HX_CSTRING("size"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectPool_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectPool_obj::__mClass,"__mClass");
};

Class ObjectPool_obj::__mClass;

void ObjectPool_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("graphite.collections.ObjectPool"), hx::TCanCast< ObjectPool_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ObjectPool_obj::__boot()
{
}

} // end namespace graphite
} // end namespace collections

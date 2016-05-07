#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif
namespace haxe{
namespace ds{

Void TreeNode_obj::__construct(::haxe::ds::TreeNode l,Dynamic k,Dynamic v,::haxe::ds::TreeNode r,hx::Null< int >  __o_h)
{
HX_STACK_PUSH("TreeNode::new","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",166);
int h = __o_h.Default(-1);
{
	HX_STACK_LINE(167)
	this->left = l;
	HX_STACK_LINE(168)
	this->key = k;
	HX_STACK_LINE(169)
	this->value = v;
	HX_STACK_LINE(170)
	this->right = r;
	HX_STACK_LINE(171)
	if (((h == (int)-1))){
		struct _Function_2_1{
			inline static int Block( ::haxe::ds::TreeNode_obj *__this){
				HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",172);
				{
					HX_STACK_LINE(172)
					::haxe::ds::TreeNode _this = __this->left;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(172)
					return (  (((_this == null()))) ? int((int)0) : int(_this->_height) );
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static int Block( ::haxe::ds::TreeNode_obj *__this){
				HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",172);
				{
					HX_STACK_LINE(172)
					::haxe::ds::TreeNode _this = __this->right;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(172)
					return (  (((_this == null()))) ? int((int)0) : int(_this->_height) );
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static int Block( ::haxe::ds::TreeNode_obj *__this){
				HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",172);
				{
					HX_STACK_LINE(172)
					::haxe::ds::TreeNode _this = __this->left;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(172)
					return (  (((_this == null()))) ? int((int)0) : int(_this->_height) );
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static int Block( ::haxe::ds::TreeNode_obj *__this){
				HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",172);
				{
					HX_STACK_LINE(172)
					::haxe::ds::TreeNode _this = __this->right;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(172)
					return (  (((_this == null()))) ? int((int)0) : int(_this->_height) );
				}
				return null();
			}
		};
		HX_STACK_LINE(172)
		this->_height = (((  (((_Function_2_1::Block(this) > _Function_2_2::Block(this)))) ? int(_Function_2_3::Block(this)) : int(_Function_2_4::Block(this)) )) + (int)1);
	}
	else{
		HX_STACK_LINE(174)
		this->_height = h;
	}
}
;
	return null();
}

TreeNode_obj::~TreeNode_obj() { }

Dynamic TreeNode_obj::__CreateEmpty() { return  new TreeNode_obj; }
hx::ObjectPtr< TreeNode_obj > TreeNode_obj::__new(::haxe::ds::TreeNode l,Dynamic k,Dynamic v,::haxe::ds::TreeNode r,hx::Null< int >  __o_h)
{  hx::ObjectPtr< TreeNode_obj > result = new TreeNode_obj();
	result->__construct(l,k,v,r,__o_h);
	return result;}

Dynamic TreeNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TreeNode_obj > result = new TreeNode_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}


TreeNode_obj::TreeNode_obj()
{
}

void TreeNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeNode);
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_END_CLASS();
}

void TreeNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(left,"left");
}

Dynamic TreeNode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TreeNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::haxe::ds::TreeNode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::haxe::ds::TreeNode >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("key"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("left"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_height"),
	HX_CSTRING("value"),
	HX_CSTRING("key"),
	HX_CSTRING("right"),
	HX_CSTRING("left"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TreeNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TreeNode_obj::__mClass,"__mClass");
};

Class TreeNode_obj::__mClass;

void TreeNode_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ds.TreeNode"), hx::TCanCast< TreeNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TreeNode_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ds

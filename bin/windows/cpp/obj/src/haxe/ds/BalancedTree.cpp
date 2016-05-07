#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif
namespace haxe{
namespace ds{

Void BalancedTree_obj::__construct()
{
HX_STACK_PUSH("BalancedTree::new","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",28);
{
}
;
	return null();
}

BalancedTree_obj::~BalancedTree_obj() { }

Dynamic BalancedTree_obj::__CreateEmpty() { return  new BalancedTree_obj; }
hx::ObjectPtr< BalancedTree_obj > BalancedTree_obj::__new()
{  hx::ObjectPtr< BalancedTree_obj > result = new BalancedTree_obj();
	result->__construct();
	return result;}

Dynamic BalancedTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BalancedTree_obj > result = new BalancedTree_obj();
	result->__construct();
	return result;}

int BalancedTree_obj::compare( Dynamic k1,Dynamic k2){
	HX_STACK_PUSH("BalancedTree::compare","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k1,"k1");
	HX_STACK_ARG(k2,"k2");
	HX_STACK_LINE(147)
	return ::Reflect_obj::compare(k1,k2);
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,compare,return )

::haxe::ds::TreeNode BalancedTree_obj::balance( ::haxe::ds::TreeNode l,Dynamic k,Dynamic v,::haxe::ds::TreeNode r){
	HX_STACK_PUSH("BalancedTree::balance","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_ARG(l,"l");
	HX_STACK_ARG(k,"k");
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(r,"r");
	HX_STACK_LINE(134)
	int hl = (  (((l == null()))) ? int((int)0) : int(l->_height) );		HX_STACK_VAR(hl,"hl");
	HX_STACK_LINE(135)
	int hr = (  (((r == null()))) ? int((int)0) : int(r->_height) );		HX_STACK_VAR(hr,"hr");
	struct _Function_1_1{
		inline static ::haxe::ds::TreeNode Block( Dynamic &k,Dynamic &v,::haxe::ds::TreeNode &l,::haxe::ds::TreeNode &r){
			HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",136);
			{
				struct _Function_2_1{
					inline static int Block( ::haxe::ds::TreeNode &l){
						HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",137);
						{
							HX_STACK_LINE(137)
							::haxe::ds::TreeNode _this = l->left;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(137)
							return (  (((_this == null()))) ? int((int)0) : int(_this->_height) );
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static int Block( ::haxe::ds::TreeNode &l){
						HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",137);
						{
							HX_STACK_LINE(137)
							::haxe::ds::TreeNode _this = l->right;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(137)
							return (  (((_this == null()))) ? int((int)0) : int(_this->_height) );
						}
						return null();
					}
				};
				HX_STACK_LINE(136)
				return (  (((_Function_2_1::Block(l) >= _Function_2_2::Block(l)))) ? ::haxe::ds::TreeNode(::haxe::ds::TreeNode_obj::__new(l->left,l->key,l->value,::haxe::ds::TreeNode_obj::__new(l->right,k,v,r,null()),null())) : ::haxe::ds::TreeNode(::haxe::ds::TreeNode_obj::__new(::haxe::ds::TreeNode_obj::__new(l->left,l->key,l->value,l->right->left,null()),l->right->key,l->right->value,::haxe::ds::TreeNode_obj::__new(l->right->right,k,v,r,null()),null())) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::haxe::ds::TreeNode Block( Dynamic &k,Dynamic &v,::haxe::ds::TreeNode &r,::haxe::ds::TreeNode &l){
			HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",139);
			{
				struct _Function_2_1{
					inline static int Block( ::haxe::ds::TreeNode &r){
						HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",140);
						{
							HX_STACK_LINE(140)
							::haxe::ds::TreeNode _this = r->right;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(140)
							return (  (((_this == null()))) ? int((int)0) : int(_this->_height) );
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static int Block( ::haxe::ds::TreeNode &r){
						HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",140);
						{
							HX_STACK_LINE(140)
							::haxe::ds::TreeNode _this = r->left;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(140)
							return (  (((_this == null()))) ? int((int)0) : int(_this->_height) );
						}
						return null();
					}
				};
				HX_STACK_LINE(139)
				return (  (((_Function_2_1::Block(r) > _Function_2_2::Block(r)))) ? ::haxe::ds::TreeNode(::haxe::ds::TreeNode_obj::__new(::haxe::ds::TreeNode_obj::__new(l,k,v,r->left,null()),r->key,r->value,r->right,null())) : ::haxe::ds::TreeNode(::haxe::ds::TreeNode_obj::__new(::haxe::ds::TreeNode_obj::__new(l,k,v,r->left->left,null()),r->left->key,r->left->value,::haxe::ds::TreeNode_obj::__new(r->left->right,r->key,r->value,r->right,null()),null())) );
			}
			return null();
		}
	};
	HX_STACK_LINE(136)
	return (  (((hl > (hr + (int)2)))) ? ::haxe::ds::TreeNode(_Function_1_1::Block(k,v,l,r)) : ::haxe::ds::TreeNode((  (((hr > (hl + (int)2)))) ? ::haxe::ds::TreeNode(_Function_1_2::Block(k,v,r,l)) : ::haxe::ds::TreeNode(::haxe::ds::TreeNode_obj::__new(l,k,v,r,(((  (((hl > hr))) ? int(hl) : int(hr) )) + (int)1))) )) );
}


HX_DEFINE_DYNAMIC_FUNC4(BalancedTree_obj,balance,return )

Void BalancedTree_obj::iteratorLoop( ::haxe::ds::TreeNode node,Dynamic acc){
{
		HX_STACK_PUSH("BalancedTree::iteratorLoop","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_ARG(node,"node");
		HX_STACK_ARG(acc,"acc");
		HX_STACK_LINE(99)
		if (((node != null()))){
			HX_STACK_LINE(101)
			acc->__Field(HX_CSTRING("push"),true)(node->value);
			HX_STACK_LINE(102)
			this->iteratorLoop(node->left,acc);
			HX_STACK_LINE(103)
			this->iteratorLoop(node->right,acc);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,iteratorLoop,(void))

::haxe::ds::TreeNode BalancedTree_obj::setLoop( Dynamic k,Dynamic v,::haxe::ds::TreeNode node){
	HX_STACK_PUSH("BalancedTree::setLoop","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(node,"node");
	HX_STACK_LINE(79)
	if (((node == null()))){
		HX_STACK_LINE(79)
		return ::haxe::ds::TreeNode_obj::__new(null(),k,v,null(),null());
	}
	HX_STACK_LINE(80)
	int c = this->compare(k,node->key);		HX_STACK_VAR(c,"c");
	struct _Function_1_1{
		inline static ::haxe::ds::TreeNode Block( ::haxe::ds::BalancedTree_obj *__this,Dynamic &k,::haxe::ds::TreeNode &node,Dynamic &v){
			HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",82);
			{
				HX_STACK_LINE(83)
				::haxe::ds::TreeNode nl = __this->setLoop(k,v,node->left);		HX_STACK_VAR(nl,"nl");
				HX_STACK_LINE(84)
				return __this->balance(nl,node->key,node->value,node->right);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::haxe::ds::TreeNode Block( ::haxe::ds::BalancedTree_obj *__this,Dynamic &k,::haxe::ds::TreeNode &node,Dynamic &v){
			HX_STACK_PUSH("*::closure","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",85);
			{
				HX_STACK_LINE(86)
				::haxe::ds::TreeNode nr = __this->setLoop(k,v,node->right);		HX_STACK_VAR(nr,"nr");
				HX_STACK_LINE(87)
				return __this->balance(node->left,node->key,node->value,nr);
			}
			return null();
		}
	};
	HX_STACK_LINE(81)
	return (  (((c == (int)0))) ? ::haxe::ds::TreeNode(::haxe::ds::TreeNode_obj::__new(node->left,k,v,node->right,(  (((node == null()))) ? int((int)0) : int(node->_height) ))) : ::haxe::ds::TreeNode((  (((c < (int)0))) ? ::haxe::ds::TreeNode(_Function_1_1::Block(this,k,node,v)) : ::haxe::ds::TreeNode(_Function_1_2::Block(this,k,node,v)) )) );
}


HX_DEFINE_DYNAMIC_FUNC3(BalancedTree_obj,setLoop,return )

Dynamic BalancedTree_obj::iterator( ){
	HX_STACK_PUSH("BalancedTree::iterator","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(67)
	Dynamic ret = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(68)
	this->iteratorLoop(this->root,ret);
	HX_STACK_LINE(69)
	return ret->__Field(HX_CSTRING("iterator"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(BalancedTree_obj,iterator,return )

Dynamic BalancedTree_obj::get( Dynamic k){
	HX_STACK_PUSH("BalancedTree::get","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",34);
	HX_STACK_THIS(this);
	HX_STACK_ARG(k,"k");
	HX_STACK_LINE(35)
	::haxe::ds::TreeNode node = this->root;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(36)
	while(((node != null()))){
		HX_STACK_LINE(37)
		int c = this->compare(k,node->key);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(38)
		if (((c == (int)0))){
			HX_STACK_LINE(38)
			return node->value;
		}
		HX_STACK_LINE(39)
		if (((c < (int)0))){
			HX_STACK_LINE(39)
			node = node->left;
		}
		else{
			HX_STACK_LINE(40)
			node = node->right;
		}
	}
	HX_STACK_LINE(42)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,get,return )

Void BalancedTree_obj::set( Dynamic k,Dynamic v){
{
		HX_STACK_PUSH("BalancedTree::set","C:\\HaxeToolkit\\haxe/std/haxe/ds/BalancedTree.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_ARG(k,"k");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(30)
		this->root = this->setLoop(k,v,this->root);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,set,(void))


BalancedTree_obj::BalancedTree_obj()
{
}

void BalancedTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedTree);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void BalancedTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
}

Dynamic BalancedTree_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"balance") ) { return balance_dyn(); }
		if (HX_FIELD_EQ(inName,"setLoop") ) { return setLoop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"iteratorLoop") ) { return iteratorLoop_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BalancedTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::haxe::ds::TreeNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BalancedTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("root"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("compare"),
	HX_CSTRING("balance"),
	HX_CSTRING("iteratorLoop"),
	HX_CSTRING("setLoop"),
	HX_CSTRING("iterator"),
	HX_CSTRING("get"),
	HX_CSTRING("set"),
	HX_CSTRING("root"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BalancedTree_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BalancedTree_obj::__mClass,"__mClass");
};

Class BalancedTree_obj::__mClass;

void BalancedTree_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ds.BalancedTree"), hx::TCanCast< BalancedTree_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BalancedTree_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ds

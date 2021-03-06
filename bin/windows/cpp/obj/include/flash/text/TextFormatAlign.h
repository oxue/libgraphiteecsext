#ifndef INCLUDED_flash_text_TextFormatAlign
#define INCLUDED_flash_text_TextFormatAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,text,TextFormatAlign)
namespace flash{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextFormatAlign_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextFormatAlign_obj OBJ_;
		TextFormatAlign_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TextFormatAlign_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextFormatAlign_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextFormatAlign"); }

		static ::String LEFT;
		static ::String RIGHT;
		static ::String CENTER;
		static ::String JUSTIFY;
};

} // end namespace flash
} // end namespace text

#endif /* INCLUDED_flash_text_TextFormatAlign */ 

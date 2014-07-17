#ifndef INCLUDED_EndMenu
#define INCLUDED_EndMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EndMenu)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)


class HXCPP_CLASS_ATTRIBUTES  EndMenu_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EndMenu_obj OBJ_;
		EndMenu_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< EndMenu_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EndMenu_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EndMenu"); }

		::flixel::text::FlxText metabolism;
		::flixel::FlxSprite metabolismBtn;
		::flixel::text::FlxText sphincterStrength;
		::flixel::FlxSprite sphincterBtn;
		::flixel::text::FlxText stomachSize;
		::flixel::FlxSprite stomachBtn;
		::flixel::text::FlxText food;
		::flixel::FlxSprite foodBtn;
		::flixel::text::FlxText playAgain;
		::flixel::FlxSprite playAgainBtn;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void update( );
		Dynamic update_dyn();

};


#endif /* INCLUDED_EndMenu */ 

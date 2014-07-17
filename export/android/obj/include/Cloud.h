#ifndef INCLUDED_Cloud
#define INCLUDED_Cloud

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <ExtendedSprite.h>
HX_DECLARE_CLASS0(Cloud)
HX_DECLARE_CLASS0(ExtendedSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Cloud_obj : public ::ExtendedSprite_obj{
	public:
		typedef ::ExtendedSprite_obj super;
		typedef Cloud_obj OBJ_;
		Cloud_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Cloud_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cloud_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Cloud"); }

		virtual Void update( );

};


#endif /* INCLUDED_Cloud */ 

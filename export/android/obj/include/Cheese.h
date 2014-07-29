#ifndef INCLUDED_Cheese
#define INCLUDED_Cheese

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Food.h>
HX_DECLARE_CLASS0(Cheese)
HX_DECLARE_CLASS0(ExtendedSprite)
HX_DECLARE_CLASS0(Food)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Cheese_obj : public ::Food_obj{
	public:
		typedef ::Food_obj super;
		typedef Cheese_obj OBJ_;
		Cheese_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Cheese_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cheese_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Cheese"); }

};


#endif /* INCLUDED_Cheese */ 

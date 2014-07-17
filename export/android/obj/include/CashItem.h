#ifndef INCLUDED_CashItem
#define INCLUDED_CashItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <ExtendedSprite.h>
HX_DECLARE_CLASS0(CashItem)
HX_DECLARE_CLASS0(ExtendedSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  CashItem_obj : public ::ExtendedSprite_obj{
	public:
		typedef ::ExtendedSprite_obj super;
		typedef CashItem_obj OBJ_;
		CashItem_obj();
		Void __construct(int newX,int newY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CashItem_obj > __new(int newX,int newY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CashItem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CashItem"); }

		virtual Void spawn( );
		Dynamic spawn_dyn();

};


#endif /* INCLUDED_CashItem */ 

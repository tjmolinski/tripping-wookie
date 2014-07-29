#include <hxcpp.h>

#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
#endif
#ifndef INCLUDED_Food
#include <Food.h>
#endif
#ifndef INCLUDED_Pizza
#include <Pizza.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Pizza_obj::__construct()
{
HX_STACK_FRAME("Pizza","new",0xf280221a,"Pizza.new","Pizza.hx",6,0x34bf1e96)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(8)
	this->loadGraphic(HX_CSTRING("images/pizza.png"),true,(int)64,(int)64,null(),null());
	HX_STACK_LINE(9)
	this->scale->set(0.5,0.5);
}
;
	return null();
}

//Pizza_obj::~Pizza_obj() { }

Dynamic Pizza_obj::__CreateEmpty() { return  new Pizza_obj; }
hx::ObjectPtr< Pizza_obj > Pizza_obj::__new()
{  hx::ObjectPtr< Pizza_obj > result = new Pizza_obj();
	result->__construct();
	return result;}

Dynamic Pizza_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pizza_obj > result = new Pizza_obj();
	result->__construct();
	return result;}


Pizza_obj::Pizza_obj()
{
}

Dynamic Pizza_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Pizza_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Pizza_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pizza_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pizza_obj::__mClass,"__mClass");
};

#endif

Class Pizza_obj::__mClass;

void Pizza_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Pizza"), hx::TCanCast< Pizza_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Pizza_obj::__boot()
{
}


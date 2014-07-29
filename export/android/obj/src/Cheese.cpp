#include <hxcpp.h>

#ifndef INCLUDED_Cheese
#include <Cheese.h>
#endif
#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
#endif
#ifndef INCLUDED_Food
#include <Food.h>
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

Void Cheese_obj::__construct()
{
HX_STACK_FRAME("Cheese","new",0x3fad9ea9,"Cheese.new","Cheese.hx",6,0xb5aaa8e7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(8)
	this->loadGraphic(HX_CSTRING("images/cheese.png"),true,(int)64,(int)64,null(),null());
	HX_STACK_LINE(9)
	this->scale->set(0.5,0.5);
}
;
	return null();
}

//Cheese_obj::~Cheese_obj() { }

Dynamic Cheese_obj::__CreateEmpty() { return  new Cheese_obj; }
hx::ObjectPtr< Cheese_obj > Cheese_obj::__new()
{  hx::ObjectPtr< Cheese_obj > result = new Cheese_obj();
	result->__construct();
	return result;}

Dynamic Cheese_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cheese_obj > result = new Cheese_obj();
	result->__construct();
	return result;}


Cheese_obj::Cheese_obj()
{
}

Dynamic Cheese_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Cheese_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Cheese_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Cheese_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cheese_obj::__mClass,"__mClass");
};

#endif

Class Cheese_obj::__mClass;

void Cheese_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Cheese"), hx::TCanCast< Cheese_obj> ,sStaticFields,sMemberFields,
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

void Cheese_obj::__boot()
{
}


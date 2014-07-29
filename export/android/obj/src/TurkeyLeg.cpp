#include <hxcpp.h>

#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
#endif
#ifndef INCLUDED_Food
#include <Food.h>
#endif
#ifndef INCLUDED_TurkeyLeg
#include <TurkeyLeg.h>
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

Void TurkeyLeg_obj::__construct()
{
HX_STACK_FRAME("TurkeyLeg","new",0x1b5496d2,"TurkeyLeg.new","TurkeyLeg.hx",6,0x4be3a8de)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(8)
	this->loadGraphic(HX_CSTRING("images/turkeyleg.png"),true,(int)64,(int)64,null(),null());
	HX_STACK_LINE(9)
	this->scale->set(0.5,0.5);
}
;
	return null();
}

//TurkeyLeg_obj::~TurkeyLeg_obj() { }

Dynamic TurkeyLeg_obj::__CreateEmpty() { return  new TurkeyLeg_obj; }
hx::ObjectPtr< TurkeyLeg_obj > TurkeyLeg_obj::__new()
{  hx::ObjectPtr< TurkeyLeg_obj > result = new TurkeyLeg_obj();
	result->__construct();
	return result;}

Dynamic TurkeyLeg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TurkeyLeg_obj > result = new TurkeyLeg_obj();
	result->__construct();
	return result;}


TurkeyLeg_obj::TurkeyLeg_obj()
{
}

Dynamic TurkeyLeg_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic TurkeyLeg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TurkeyLeg_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(TurkeyLeg_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TurkeyLeg_obj::__mClass,"__mClass");
};

#endif

Class TurkeyLeg_obj::__mClass;

void TurkeyLeg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TurkeyLeg"), hx::TCanCast< TurkeyLeg_obj> ,sStaticFields,sMemberFields,
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

void TurkeyLeg_obj::__boot()
{
}


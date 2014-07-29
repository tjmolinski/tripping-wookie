#include <hxcpp.h>

#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
#endif
#ifndef INCLUDED_Food
#include <Food.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif

Void Food_obj::__construct()
{
HX_STACK_FRAME("Food","new",0xc00462b0,"Food.new","Food.hx",8,0xec3282c0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct((int)0,(int)0);
	HX_STACK_LINE(10)
	this->spawn();
}
;
	return null();
}

//Food_obj::~Food_obj() { }

Dynamic Food_obj::__CreateEmpty() { return  new Food_obj; }
hx::ObjectPtr< Food_obj > Food_obj::__new()
{  hx::ObjectPtr< Food_obj > result = new Food_obj();
	result->__construct();
	return result;}

Dynamic Food_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Food_obj > result = new Food_obj();
	result->__construct();
	return result;}

Void Food_obj::spawn( ){
{
		HX_STACK_FRAME("Food","spawn",0xfc1c648b,"Food.spawn","Food.hx",13,0xec3282c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		int _g = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(14)
		Float _g1 = (Float(_g) / Float((int)2147483647));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(14)
		Float _g2 = (_g1 * ((::flixel::FlxG_obj::width - (int)50)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(14)
		Float _g3 = (_g2 + (int)50);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(14)
		this->set_x(_g3);
		HX_STACK_LINE(15)
		this->set_y((int)-20);
		HX_STACK_LINE(16)
		this->velocity->set_y((int)200);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Food_obj,spawn,(void))


Food_obj::Food_obj()
{
}

Dynamic Food_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"spawn") ) { return spawn_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Food_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Food_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("spawn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Food_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Food_obj::__mClass,"__mClass");
};

#endif

Class Food_obj::__mClass;

void Food_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Food"), hx::TCanCast< Food_obj> ,sStaticFields,sMemberFields,
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

void Food_obj::__boot()
{
}


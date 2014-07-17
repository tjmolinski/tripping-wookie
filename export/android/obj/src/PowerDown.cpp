#include <hxcpp.h>

#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
#endif
#ifndef INCLUDED_PowerDown
#include <PowerDown.h>
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

Void PowerDown_obj::__construct(int newX,int newY)
{
HX_STACK_FRAME("PowerDown","new",0x44e9d759,"PowerDown.new","PowerDown.hx",10,0xbb6e1637)
HX_STACK_THIS(this)
HX_STACK_ARG(newX,"newX")
HX_STACK_ARG(newY,"newY")
{
	HX_STACK_LINE(11)
	super::__construct(newX,newY);
	HX_STACK_LINE(12)
	this->makeGraphic((int)10,(int)10,(int)-65536,null(),null());
	HX_STACK_LINE(13)
	this->set_exists(false);
}
;
	return null();
}

//PowerDown_obj::~PowerDown_obj() { }

Dynamic PowerDown_obj::__CreateEmpty() { return  new PowerDown_obj; }
hx::ObjectPtr< PowerDown_obj > PowerDown_obj::__new(int newX,int newY)
{  hx::ObjectPtr< PowerDown_obj > result = new PowerDown_obj();
	result->__construct(newX,newY);
	return result;}

Dynamic PowerDown_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PowerDown_obj > result = new PowerDown_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PowerDown_obj::spawn( ){
{
		HX_STACK_FRAME("PowerDown","spawn",0x9cc71574,"PowerDown.spawn","PowerDown.hx",16,0xbb6e1637)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		int _g = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		Float _g1 = (Float(_g) / Float((int)2147483647));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(17)
		Float _g2 = (_g1 * ((::flixel::FlxG_obj::width - (int)50)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(17)
		Float _g3 = (_g2 + (int)50);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(17)
		this->reset(_g3,(int)-20);
		HX_STACK_LINE(18)
		this->velocity->set_y((int)200);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PowerDown_obj,spawn,(void))


PowerDown_obj::PowerDown_obj()
{
}

Dynamic PowerDown_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"spawn") ) { return spawn_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PowerDown_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PowerDown_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(PowerDown_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PowerDown_obj::__mClass,"__mClass");
};

#endif

Class PowerDown_obj::__mClass;

void PowerDown_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PowerDown"), hx::TCanCast< PowerDown_obj> ,sStaticFields,sMemberFields,
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

void PowerDown_obj::__boot()
{
}


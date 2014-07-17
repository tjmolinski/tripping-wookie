#include <hxcpp.h>

#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
#endif
#ifndef INCLUDED_PowerUp
#include <PowerUp.h>
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

Void PowerUp_obj::__construct(int newX,int newY)
{
HX_STACK_FRAME("PowerUp","new",0x616b7a92,"PowerUp.new","PowerUp.hx",10,0x5c467d1e)
HX_STACK_THIS(this)
HX_STACK_ARG(newX,"newX")
HX_STACK_ARG(newY,"newY")
{
	HX_STACK_LINE(11)
	super::__construct(newX,newY);
	HX_STACK_LINE(12)
	this->makeGraphic((int)10,(int)10,(int)-256,null(),null());
	HX_STACK_LINE(13)
	this->set_exists(false);
}
;
	return null();
}

//PowerUp_obj::~PowerUp_obj() { }

Dynamic PowerUp_obj::__CreateEmpty() { return  new PowerUp_obj; }
hx::ObjectPtr< PowerUp_obj > PowerUp_obj::__new(int newX,int newY)
{  hx::ObjectPtr< PowerUp_obj > result = new PowerUp_obj();
	result->__construct(newX,newY);
	return result;}

Dynamic PowerUp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PowerUp_obj > result = new PowerUp_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PowerUp_obj::spawn( ){
{
		HX_STACK_FRAME("PowerUp","spawn",0x1762b8ed,"PowerUp.spawn","PowerUp.hx",16,0x5c467d1e)
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
		this->velocity->set_y((int)100);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PowerUp_obj,spawn,(void))


PowerUp_obj::PowerUp_obj()
{
}

Dynamic PowerUp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"spawn") ) { return spawn_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PowerUp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PowerUp_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(PowerUp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PowerUp_obj::__mClass,"__mClass");
};

#endif

Class PowerUp_obj::__mClass;

void PowerUp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PowerUp"), hx::TCanCast< PowerUp_obj> ,sStaticFields,sMemberFields,
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

void PowerUp_obj::__boot()
{
}


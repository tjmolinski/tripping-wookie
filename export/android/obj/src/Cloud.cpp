#include <hxcpp.h>

#ifndef INCLUDED_Cloud
#include <Cloud.h>
#endif
#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
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

Void Cloud_obj::__construct()
{
HX_STACK_FRAME("Cloud","new",0xd8d3f8c7,"Cloud.new","Cloud.hx",9,0x84fd7c89)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	int _g = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(10)
	Float _g1 = (Float(_g) / Float((int)2147483647));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(10)
	Float _g2 = (_g1 * ::flixel::FlxG_obj::width);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(10)
	this->set_x(_g2);
	HX_STACK_LINE(11)
	int _g3 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(11)
	Float _g4 = (Float(_g3) / Float((int)2147483647));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(11)
	Float _g5 = (_g4 * (int)-50);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(11)
	Float _g6 = (_g5 - (int)64);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(11)
	this->set_y(_g6);
	HX_STACK_LINE(12)
	super::__construct(this->x,this->y);
	HX_STACK_LINE(13)
	this->loadGraphic(HX_CSTRING("images/cloud.png"),true,(int)64,(int)64,null(),null());
	HX_STACK_LINE(15)
	int _g7 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(15)
	Float depthRNG = (Float(_g7) / Float((int)2147483647));		HX_STACK_VAR(depthRNG,"depthRNG");
	HX_STACK_LINE(16)
	if (((depthRNG < .3))){
		HX_STACK_LINE(17)
		this->z = (int)4;
		HX_STACK_LINE(18)
		this->velocity->set_y((int)100);
	}
	else{
		HX_STACK_LINE(19)
		if (((depthRNG < .6))){
			HX_STACK_LINE(20)
			this->z = (int)3;
			HX_STACK_LINE(21)
			this->scale->set(.75,.75);
			HX_STACK_LINE(22)
			this->velocity->set_y((int)75);
		}
		else{
			HX_STACK_LINE(23)
			if (((depthRNG < .8))){
				HX_STACK_LINE(24)
				this->z = (int)2;
				HX_STACK_LINE(25)
				this->scale->set(.5,.5);
				HX_STACK_LINE(26)
				this->velocity->set_y((int)50);
			}
			else{
				HX_STACK_LINE(28)
				this->z = (int)1;
				HX_STACK_LINE(29)
				this->scale->set(.25,.25);
				HX_STACK_LINE(30)
				this->velocity->set_y((int)30);
			}
		}
	}
}
;
	return null();
}

//Cloud_obj::~Cloud_obj() { }

Dynamic Cloud_obj::__CreateEmpty() { return  new Cloud_obj; }
hx::ObjectPtr< Cloud_obj > Cloud_obj::__new()
{  hx::ObjectPtr< Cloud_obj > result = new Cloud_obj();
	result->__construct();
	return result;}

Dynamic Cloud_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cloud_obj > result = new Cloud_obj();
	result->__construct();
	return result;}

Void Cloud_obj::update( ){
{
		HX_STACK_FRAME("Cloud","update",0xb3235802,"Cloud.update","Cloud.hx",34,0x84fd7c89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::update();
		HX_STACK_LINE(36)
		if (((this->y > (::flixel::FlxG_obj::height + (int)64)))){
			HX_STACK_LINE(37)
			this->destroy();
		}
	}
return null();
}


Void Cloud_obj::stop( ){
{
		HX_STACK_FRAME("Cloud","stop",0xe3ff21bb,"Cloud.stop","Cloud.hx",42,0x84fd7c89)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->velocity->set_y((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cloud_obj,stop,(void))


Cloud_obj::Cloud_obj()
{
}

Dynamic Cloud_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Cloud_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Cloud_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("stop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cloud_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cloud_obj::__mClass,"__mClass");
};

#endif

Class Cloud_obj::__mClass;

void Cloud_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Cloud"), hx::TCanCast< Cloud_obj> ,sStaticFields,sMemberFields,
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

void Cloud_obj::__boot()
{
}


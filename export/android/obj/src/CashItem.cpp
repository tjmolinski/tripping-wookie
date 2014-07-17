#include <hxcpp.h>

#ifndef INCLUDED_CashItem
#include <CashItem.h>
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

Void CashItem_obj::__construct(int newX,int newY)
{
HX_STACK_FRAME("CashItem","new",0x87777d78,"CashItem.new","CashItem.hx",10,0x420ad8f8)
HX_STACK_THIS(this)
HX_STACK_ARG(newX,"newX")
HX_STACK_ARG(newY,"newY")
{
	HX_STACK_LINE(11)
	super::__construct(newX,newY);
	HX_STACK_LINE(12)
	this->makeGraphic((int)10,(int)10,(int)-16744448,null(),null());
	HX_STACK_LINE(13)
	this->set_exists(false);
}
;
	return null();
}

//CashItem_obj::~CashItem_obj() { }

Dynamic CashItem_obj::__CreateEmpty() { return  new CashItem_obj; }
hx::ObjectPtr< CashItem_obj > CashItem_obj::__new(int newX,int newY)
{  hx::ObjectPtr< CashItem_obj > result = new CashItem_obj();
	result->__construct(newX,newY);
	return result;}

Dynamic CashItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CashItem_obj > result = new CashItem_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void CashItem_obj::spawn( ){
{
		HX_STACK_FRAME("CashItem","spawn",0xdaa1c153,"CashItem.spawn","CashItem.hx",16,0x420ad8f8)
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


HX_DEFINE_DYNAMIC_FUNC0(CashItem_obj,spawn,(void))


CashItem_obj::CashItem_obj()
{
}

Dynamic CashItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"spawn") ) { return spawn_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CashItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CashItem_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(CashItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CashItem_obj::__mClass,"__mClass");
};

#endif

Class CashItem_obj::__mClass;

void CashItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CashItem"), hx::TCanCast< CashItem_obj> ,sStaticFields,sMemberFields,
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

void CashItem_obj::__boot()
{
}


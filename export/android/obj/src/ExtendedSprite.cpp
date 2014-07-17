#include <hxcpp.h>

#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
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

Void ExtendedSprite_obj::__construct(Float newX,Float newY)
{
HX_STACK_FRAME("ExtendedSprite","new",0x5d86e1b0,"ExtendedSprite.new","ExtendedSprite.hx",5,0x8ec4e3c0)
HX_STACK_THIS(this)
HX_STACK_ARG(newX,"newX")
HX_STACK_ARG(newY,"newY")
{
	HX_STACK_LINE(7)
	this->z = (int)0;
	HX_STACK_LINE(10)
	super::__construct(newX,newY,null());
}
;
	return null();
}

//ExtendedSprite_obj::~ExtendedSprite_obj() { }

Dynamic ExtendedSprite_obj::__CreateEmpty() { return  new ExtendedSprite_obj; }
hx::ObjectPtr< ExtendedSprite_obj > ExtendedSprite_obj::__new(Float newX,Float newY)
{  hx::ObjectPtr< ExtendedSprite_obj > result = new ExtendedSprite_obj();
	result->__construct(newX,newY);
	return result;}

Dynamic ExtendedSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExtendedSprite_obj > result = new ExtendedSprite_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


ExtendedSprite_obj::ExtendedSprite_obj()
{
}

Dynamic ExtendedSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExtendedSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ExtendedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("z"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ExtendedSprite_obj,z),HX_CSTRING("z")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("z"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExtendedSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExtendedSprite_obj::__mClass,"__mClass");
};

#endif

Class ExtendedSprite_obj::__mClass;

void ExtendedSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ExtendedSprite"), hx::TCanCast< ExtendedSprite_obj> ,sStaticFields,sMemberFields,
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

void ExtendedSprite_obj::__boot()
{
}


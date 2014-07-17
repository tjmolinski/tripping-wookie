#include <hxcpp.h>

#ifndef INCLUDED_Cloud
#include <Cloud.h>
#endif
#ifndef INCLUDED_CloudManager
#include <CloudManager.h>
#endif
#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif

Void CloudManager_obj::__construct()
{
HX_STACK_FRAME("CloudManager","new",0xc337828a,"CloudManager.new","CloudManager.hx",6,0x7bb59c26)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->enabled = false;
	HX_STACK_LINE(9)
	this->spawnTime = 3.0;
	HX_STACK_LINE(8)
	this->spawnBuffer = 0.0;
}
;
	return null();
}

//CloudManager_obj::~CloudManager_obj() { }

Dynamic CloudManager_obj::__CreateEmpty() { return  new CloudManager_obj; }
hx::ObjectPtr< CloudManager_obj > CloudManager_obj::__new()
{  hx::ObjectPtr< CloudManager_obj > result = new CloudManager_obj();
	result->__construct();
	return result;}

Dynamic CloudManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CloudManager_obj > result = new CloudManager_obj();
	result->__construct();
	return result;}

Void CloudManager_obj::update( ){
{
		HX_STACK_FRAME("CloudManager","update",0x37c00a1f,"CloudManager.update","CloudManager.hx",15,0x7bb59c26)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		if ((!(this->enabled))){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(20)
		if (((this->spawnBuffer > this->spawnTime))){
			HX_STACK_LINE(21)
			{
				HX_STACK_LINE(21)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(21)
				while((true)){
					HX_STACK_LINE(21)
					if ((!(((_g < (int)5))))){
						HX_STACK_LINE(21)
						break;
					}
					HX_STACK_LINE(21)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(22)
					::Cloud _g1 = ::Cloud_obj::__new();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(22)
					(hx::TCast< PlayState >::cast(::flixel::FlxG_obj::game->_state))->addToScene(_g1);
				}
			}
			HX_STACK_LINE(24)
			this->spawnBuffer = 0.0;
		}
		else{
			HX_STACK_LINE(26)
			hx::AddEq(this->spawnBuffer,::flixel::FlxG_obj::elapsed);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CloudManager_obj,update,(void))


CloudManager_obj::CloudManager_obj()
{
}

Dynamic CloudManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"spawnTime") ) { return spawnTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spawnBuffer") ) { return spawnBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CloudManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"spawnTime") ) { spawnTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spawnBuffer") ) { spawnBuffer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CloudManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("spawnBuffer"));
	outFields->push(HX_CSTRING("spawnTime"));
	outFields->push(HX_CSTRING("enabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CloudManager_obj,spawnBuffer),HX_CSTRING("spawnBuffer")},
	{hx::fsFloat,(int)offsetof(CloudManager_obj,spawnTime),HX_CSTRING("spawnTime")},
	{hx::fsBool,(int)offsetof(CloudManager_obj,enabled),HX_CSTRING("enabled")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("spawnBuffer"),
	HX_CSTRING("spawnTime"),
	HX_CSTRING("enabled"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CloudManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CloudManager_obj::__mClass,"__mClass");
};

#endif

Class CloudManager_obj::__mClass;

void CloudManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CloudManager"), hx::TCanCast< CloudManager_obj> ,sStaticFields,sMemberFields,
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

void CloudManager_obj::__boot()
{
}


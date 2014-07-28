#include <hxcpp.h>

#ifndef INCLUDED_Cloud
#include <Cloud.h>
#endif
#ifndef INCLUDED_CloudManager
#include <CloudManager.h>
#endif
#ifndef INCLUDED_CloudState
#include <CloudState.h>
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
HX_STACK_FRAME("CloudManager","new",0xc337828a,"CloudManager.new","CloudManager.hx",13,0x7bb59c26)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->enabled = false;
	HX_STACK_LINE(18)
	this->spawnTime = 3.0;
	HX_STACK_LINE(17)
	this->spawnBuffer = 0.0;
	HX_STACK_LINE(16)
	this->idleTime = 5.0;
	HX_STACK_LINE(15)
	this->idleBuffer = 0.0;
	HX_STACK_LINE(24)
	::flixel::group::FlxTypedGroup _g = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	this->pool = _g;
	HX_STACK_LINE(25)
	this->currentState = ::CloudState_obj::IDLE;
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
		HX_STACK_FRAME("CloudManager","update",0x37c00a1f,"CloudManager.update","CloudManager.hx",29,0x7bb59c26)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::CloudState _g = this->currentState;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(31)
				this->updateIdle();
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(33)
				this->updateMoving();
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(35)
				this->updateStopped();
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CloudManager_obj,update,(void))

Void CloudManager_obj::updateIdle( ){
{
		HX_STACK_FRAME("CloudManager","updateIdle",0x2385d8d3,"CloudManager.updateIdle","CloudManager.hx",40,0x7bb59c26)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		if (((this->idleBuffer > this->idleTime))){
			HX_STACK_LINE(41)
			this->currentState = ::CloudState_obj::MOVING;
		}
		else{
			HX_STACK_LINE(43)
			hx::AddEq(this->idleBuffer,::flixel::FlxG_obj::elapsed);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CloudManager_obj,updateIdle,(void))

Void CloudManager_obj::updateMoving( ){
{
		HX_STACK_FRAME("CloudManager","updateMoving",0x68c1520d,"CloudManager.updateMoving","CloudManager.hx",48,0x7bb59c26)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		if (((this->spawnBuffer > this->spawnTime))){
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(49)
				while((true)){
					HX_STACK_LINE(49)
					if ((!(((_g < (int)5))))){
						HX_STACK_LINE(49)
						break;
					}
					HX_STACK_LINE(49)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(50)
					::Cloud cloud = ::Cloud_obj::__new();		HX_STACK_VAR(cloud,"cloud");
					HX_STACK_LINE(51)
					this->pool->add(cloud);
					HX_STACK_LINE(52)
					(hx::TCast< PlayState >::cast(::flixel::FlxG_obj::game->_state))->addToScene(cloud);
				}
			}
			HX_STACK_LINE(54)
			this->spawnBuffer = 0.0;
		}
		else{
			HX_STACK_LINE(56)
			hx::AddEq(this->spawnBuffer,::flixel::FlxG_obj::elapsed);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CloudManager_obj,updateMoving,(void))

Void CloudManager_obj::updateStopped( ){
{
		HX_STACK_FRAME("CloudManager","updateStopped",0x368401ae,"CloudManager.updateStopped","CloudManager.hx",60,0x7bb59c26)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CloudManager_obj,updateStopped,(void))

Void CloudManager_obj::stopClouds( ){
{
		HX_STACK_FRAME("CloudManager","stopClouds",0x5d1fc616,"CloudManager.stopClouds","CloudManager.hx",63,0x7bb59c26)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->currentState = ::CloudState_obj::STOPPED;
		HX_STACK_LINE(65)
		this->pool->forEachExists(this->stopCloud_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CloudManager_obj,stopClouds,(void))

Void CloudManager_obj::stopCloud( ::Cloud cloud){
{
		HX_STACK_FRAME("CloudManager","stopCloud",0xa6dfffbd,"CloudManager.stopCloud","CloudManager.hx",69,0x7bb59c26)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cloud,"cloud")
		HX_STACK_LINE(69)
		cloud->stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CloudManager_obj,stopCloud,(void))


CloudManager_obj::CloudManager_obj()
{
}

void CloudManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CloudManager);
	HX_MARK_MEMBER_NAME(idleBuffer,"idleBuffer");
	HX_MARK_MEMBER_NAME(idleTime,"idleTime");
	HX_MARK_MEMBER_NAME(spawnBuffer,"spawnBuffer");
	HX_MARK_MEMBER_NAME(spawnTime,"spawnTime");
	HX_MARK_MEMBER_NAME(pool,"pool");
	HX_MARK_MEMBER_NAME(currentState,"currentState");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_END_CLASS();
}

void CloudManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(idleBuffer,"idleBuffer");
	HX_VISIT_MEMBER_NAME(idleTime,"idleTime");
	HX_VISIT_MEMBER_NAME(spawnBuffer,"spawnBuffer");
	HX_VISIT_MEMBER_NAME(spawnTime,"spawnTime");
	HX_VISIT_MEMBER_NAME(pool,"pool");
	HX_VISIT_MEMBER_NAME(currentState,"currentState");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
}

Dynamic CloudManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { return pool; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"idleTime") ) { return idleTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"spawnTime") ) { return spawnTime; }
		if (HX_FIELD_EQ(inName,"stopCloud") ) { return stopCloud_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"idleBuffer") ) { return idleBuffer; }
		if (HX_FIELD_EQ(inName,"updateIdle") ) { return updateIdle_dyn(); }
		if (HX_FIELD_EQ(inName,"stopClouds") ) { return stopClouds_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spawnBuffer") ) { return spawnBuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { return currentState; }
		if (HX_FIELD_EQ(inName,"updateMoving") ) { return updateMoving_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateStopped") ) { return updateStopped_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CloudManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { pool=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"idleTime") ) { idleTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"spawnTime") ) { spawnTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"idleBuffer") ) { idleBuffer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spawnBuffer") ) { spawnBuffer=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { currentState=inValue.Cast< ::CloudState >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CloudManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("idleBuffer"));
	outFields->push(HX_CSTRING("idleTime"));
	outFields->push(HX_CSTRING("spawnBuffer"));
	outFields->push(HX_CSTRING("spawnTime"));
	outFields->push(HX_CSTRING("pool"));
	outFields->push(HX_CSTRING("currentState"));
	outFields->push(HX_CSTRING("enabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CloudManager_obj,idleBuffer),HX_CSTRING("idleBuffer")},
	{hx::fsFloat,(int)offsetof(CloudManager_obj,idleTime),HX_CSTRING("idleTime")},
	{hx::fsFloat,(int)offsetof(CloudManager_obj,spawnBuffer),HX_CSTRING("spawnBuffer")},
	{hx::fsFloat,(int)offsetof(CloudManager_obj,spawnTime),HX_CSTRING("spawnTime")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(CloudManager_obj,pool),HX_CSTRING("pool")},
	{hx::fsObject /*::CloudState*/ ,(int)offsetof(CloudManager_obj,currentState),HX_CSTRING("currentState")},
	{hx::fsBool,(int)offsetof(CloudManager_obj,enabled),HX_CSTRING("enabled")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("idleBuffer"),
	HX_CSTRING("idleTime"),
	HX_CSTRING("spawnBuffer"),
	HX_CSTRING("spawnTime"),
	HX_CSTRING("pool"),
	HX_CSTRING("currentState"),
	HX_CSTRING("enabled"),
	HX_CSTRING("update"),
	HX_CSTRING("updateIdle"),
	HX_CSTRING("updateMoving"),
	HX_CSTRING("updateStopped"),
	HX_CSTRING("stopClouds"),
	HX_CSTRING("stopCloud"),
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


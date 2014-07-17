#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
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
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",11,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(11)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",14,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15)
		this->super::create();
		HX_STACK_LINE(17)
		::flixel::text::FlxText title = ::flixel::text::FlxText_obj::__new((int)0,(int)60,::flixel::FlxG_obj::width,HX_CSTRING("Shit Rockets"),null(),null());		HX_STACK_VAR(title,"title");
		HX_STACK_LINE(18)
		title->setFormat(null(),(int)48,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(19)
			title->set_borderStyle((int)2);
			HX_STACK_LINE(19)
			title->set_borderColor((int)-1);
			HX_STACK_LINE(19)
			title->set_borderSize((int)2);
			HX_STACK_LINE(19)
			title->set_borderQuality(Quality);
		}
		HX_STACK_LINE(20)
		::flixel::text::FlxTextFormat _g = ::flixel::text::FlxTextFormat_obj::__new((int)32832,false,false,null(),(int)0,(int)12);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		title->addFormat(_g,null(),null());
		HX_STACK_LINE(22)
		::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((int)0,(::flixel::FlxG_obj::height - (int)160),::flixel::FlxG_obj::width,HX_CSTRING("Tap to Play"),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		this->tapToContinue = _g1;
		HX_STACK_LINE(23)
		this->tapToContinue->setFormat(null(),(int)48,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::flixel::text::FlxText _this = this->tapToContinue;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(24)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(24)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(24)
			_this->set_borderColor((int)-1);
			HX_STACK_LINE(24)
			_this->set_borderSize((int)2);
			HX_STACK_LINE(24)
			_this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(25)
		::flixel::text::FlxTextFormat _g2 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(25)
		this->tapToContinue->addFormat(_g2,null(),null());
		HX_STACK_LINE(27)
		::flixel::FlxSprite _g3 = ::flixel::FlxSprite_obj::__new((int)0,(::flixel::FlxG_obj::height - (int)160),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(27)
		this->button = _g3;
		HX_STACK_LINE(28)
		this->button->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
		HX_STACK_LINE(30)
		this->add(title);
		HX_STACK_LINE(31)
		this->add(this->button);
		HX_STACK_LINE(32)
		this->add(this->tapToContinue);
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",36,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",39,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->super::update();
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(41)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(41)
			while((true)){
				HX_STACK_LINE(41)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(41)
					break;
				}
				HX_STACK_LINE(41)
				::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(41)
				++(_g);
				HX_STACK_LINE(42)
				if (((  ((touch->overlaps(this->tapToContinue,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
					HX_STACK_LINE(43)
					::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
					HX_STACK_LINE(43)
					::flixel::FlxG_obj::game->_requestedState = State;
				}
				HX_STACK_LINE(45)
				if (((  ((touch->overlaps(this->tapToContinue,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
					HX_STACK_LINE(46)
					this->button->set_color((int)-65536);
				}
				else{
					HX_STACK_LINE(48)
					this->button->set_color((int)-1);
				}
			}
		}
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(tapToContinue,"tapToContinue");
	HX_MARK_MEMBER_NAME(button,"button");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tapToContinue,"tapToContinue");
	HX_VISIT_MEMBER_NAME(button,"button");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tapToContinue") ) { return tapToContinue; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tapToContinue") ) { tapToContinue=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tapToContinue"));
	outFields->push(HX_CSTRING("button"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,tapToContinue),HX_CSTRING("tapToContinue")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,button),HX_CSTRING("button")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tapToContinue"),
	HX_CSTRING("button"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
}


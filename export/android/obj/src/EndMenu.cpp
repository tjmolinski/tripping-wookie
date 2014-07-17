#include <hxcpp.h>

#ifndef INCLUDED_EndMenu
#include <EndMenu.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
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

Void EndMenu_obj::__construct()
{
HX_STACK_FRAME("EndMenu","new",0xd642ccec,"EndMenu.new","EndMenu.hx",25,0x570f3404)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)140),::flixel::FlxG_obj::width,(HX_CSTRING("Food: ") + ::Reg_obj::food),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	this->food = _g;
	HX_STACK_LINE(27)
	this->food->setFormat(null(),(int)48,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::flixel::text::FlxText _this = this->food;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(28)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(28)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(28)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(28)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(28)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(29)
	::flixel::text::FlxTextFormat _g1 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	this->food->addFormat(_g1,null(),null());
	HX_STACK_LINE(31)
	::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)140),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(31)
	this->foodBtn = _g2;
	HX_STACK_LINE(32)
	this->foodBtn->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
	HX_STACK_LINE(34)
	::flixel::FlxG_obj::game->_state->add(this->foodBtn);
	HX_STACK_LINE(35)
	::flixel::FlxG_obj::game->_state->add(this->food);
	HX_STACK_LINE(37)
	::flixel::text::FlxText _g3 = ::flixel::text::FlxText_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)70),::flixel::FlxG_obj::width,(HX_CSTRING("Stomach: ") + ::Reg_obj::stomachSize),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(37)
	this->stomachSize = _g3;
	HX_STACK_LINE(38)
	this->stomachSize->setFormat(null(),(int)48,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::flixel::text::FlxText _this = this->stomachSize;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(39)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(39)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(39)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(39)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(39)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(40)
	::flixel::text::FlxTextFormat _g4 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(40)
	this->stomachSize->addFormat(_g4,null(),null());
	HX_STACK_LINE(42)
	::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)70),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(42)
	this->stomachBtn = _g5;
	HX_STACK_LINE(43)
	this->stomachBtn->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
	HX_STACK_LINE(45)
	::flixel::FlxG_obj::game->_state->add(this->stomachBtn);
	HX_STACK_LINE(46)
	::flixel::FlxG_obj::game->_state->add(this->stomachSize);
	HX_STACK_LINE(48)
	::flixel::text::FlxText _g6 = ::flixel::text::FlxText_obj::__new((int)0,(Float(::flixel::FlxG_obj::height) / Float((int)2)),::flixel::FlxG_obj::width,(HX_CSTRING("Metabolism: ") + ::Reg_obj::metabolism),null(),null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(48)
	this->metabolism = _g6;
	HX_STACK_LINE(49)
	this->metabolism->setFormat(null(),(int)48,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::flixel::text::FlxText _this = this->metabolism;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(50)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(50)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(50)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(50)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(50)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(51)
	::flixel::text::FlxTextFormat _g7 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(51)
	this->metabolism->addFormat(_g7,null(),null());
	HX_STACK_LINE(53)
	::flixel::FlxSprite _g8 = ::flixel::FlxSprite_obj::__new((int)0,(Float(::flixel::FlxG_obj::height) / Float((int)2)),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(53)
	this->metabolismBtn = _g8;
	HX_STACK_LINE(54)
	this->metabolismBtn->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
	HX_STACK_LINE(56)
	::flixel::FlxG_obj::game->_state->add(this->metabolismBtn);
	HX_STACK_LINE(57)
	::flixel::FlxG_obj::game->_state->add(this->metabolism);
	HX_STACK_LINE(59)
	::flixel::text::FlxText _g9 = ::flixel::text::FlxText_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) + (int)70),::flixel::FlxG_obj::width,(HX_CSTRING("Sphincter: ") + ::Reg_obj::sphincterStrength),null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(59)
	this->sphincterStrength = _g9;
	HX_STACK_LINE(60)
	this->sphincterStrength->setFormat(null(),(int)48,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::flixel::text::FlxText _this = this->sphincterStrength;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(61)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(61)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(61)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(61)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(61)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(62)
	::flixel::text::FlxTextFormat _g10 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(62)
	this->sphincterStrength->addFormat(_g10,null(),null());
	HX_STACK_LINE(64)
	::flixel::FlxSprite _g11 = ::flixel::FlxSprite_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) + (int)70),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(64)
	this->sphincterBtn = _g11;
	HX_STACK_LINE(65)
	this->sphincterBtn->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
	HX_STACK_LINE(67)
	::flixel::FlxG_obj::game->_state->add(this->sphincterBtn);
	HX_STACK_LINE(68)
	::flixel::FlxG_obj::game->_state->add(this->sphincterStrength);
	HX_STACK_LINE(70)
	::flixel::text::FlxText _g12 = ::flixel::text::FlxText_obj::__new((int)0,(::flixel::FlxG_obj::height - (int)160),::flixel::FlxG_obj::width,HX_CSTRING("Play Again"),null(),null());		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(70)
	this->playAgain = _g12;
	HX_STACK_LINE(71)
	this->playAgain->setFormat(null(),(int)48,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		::flixel::text::FlxText _this = this->playAgain;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(72)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(72)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(72)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(72)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(72)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(73)
	::flixel::text::FlxTextFormat _g13 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(73)
	this->playAgain->addFormat(_g13,null(),null());
	HX_STACK_LINE(75)
	::flixel::FlxSprite _g14 = ::flixel::FlxSprite_obj::__new((int)0,(::flixel::FlxG_obj::height - (int)160),null());		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(75)
	this->playAgainBtn = _g14;
	HX_STACK_LINE(76)
	this->playAgainBtn->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
	HX_STACK_LINE(78)
	::flixel::FlxG_obj::game->_state->add(this->playAgainBtn);
	HX_STACK_LINE(79)
	::flixel::FlxG_obj::game->_state->add(this->playAgain);
}
;
	return null();
}

//EndMenu_obj::~EndMenu_obj() { }

Dynamic EndMenu_obj::__CreateEmpty() { return  new EndMenu_obj; }
hx::ObjectPtr< EndMenu_obj > EndMenu_obj::__new()
{  hx::ObjectPtr< EndMenu_obj > result = new EndMenu_obj();
	result->__construct();
	return result;}

Dynamic EndMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EndMenu_obj > result = new EndMenu_obj();
	result->__construct();
	return result;}

Void EndMenu_obj::destroy( ){
{
		HX_STACK_FRAME("EndMenu","destroy",0x1fbc5f86,"EndMenu.destroy","EndMenu.hx",82,0x570f3404)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		this->metabolism->destroy();
		HX_STACK_LINE(84)
		this->metabolismBtn->destroy();
		HX_STACK_LINE(85)
		this->playAgain->destroy();
		HX_STACK_LINE(86)
		this->playAgainBtn->destroy();
		HX_STACK_LINE(87)
		this->sphincterStrength->destroy();
		HX_STACK_LINE(88)
		this->sphincterBtn->destroy();
		HX_STACK_LINE(89)
		this->stomachSize->destroy();
		HX_STACK_LINE(90)
		this->stomachBtn->destroy();
		HX_STACK_LINE(91)
		this->food->destroy();
		HX_STACK_LINE(92)
		this->foodBtn->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,destroy,(void))

Void EndMenu_obj::update( ){
{
		HX_STACK_FRAME("EndMenu","update",0x8825e8fd,"EndMenu.update","EndMenu.hx",96,0x570f3404)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(96)
		while((true)){
			HX_STACK_LINE(96)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(96)
				break;
			}
			HX_STACK_LINE(96)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(96)
			++(_g);
			HX_STACK_LINE(98)
			if (((  ((touch->overlaps(this->food,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(99)
				hx::AddEq(::Reg_obj::food,(int)1);
				HX_STACK_LINE(100)
				this->food->set_text((HX_CSTRING("Food: ") + ::Reg_obj::food));
			}
			HX_STACK_LINE(102)
			if (((  ((touch->overlaps(this->food,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
				HX_STACK_LINE(103)
				this->foodBtn->set_color((int)-65536);
			}
			else{
				HX_STACK_LINE(105)
				this->foodBtn->set_color((int)-1);
			}
			HX_STACK_LINE(109)
			if (((  ((touch->overlaps(this->stomachSize,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(110)
				hx::AddEq(::Reg_obj::stomachSize,(int)1);
				HX_STACK_LINE(111)
				this->stomachSize->set_text((HX_CSTRING("Stomach: ") + ::Reg_obj::stomachSize));
			}
			HX_STACK_LINE(113)
			if (((  ((touch->overlaps(this->stomachSize,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
				HX_STACK_LINE(114)
				this->stomachBtn->set_color((int)-65536);
			}
			else{
				HX_STACK_LINE(116)
				this->stomachBtn->set_color((int)-1);
			}
			HX_STACK_LINE(120)
			if (((  ((touch->overlaps(this->metabolism,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(121)
				hx::AddEq(::Reg_obj::metabolism,(int)1);
				HX_STACK_LINE(122)
				this->metabolism->set_text((HX_CSTRING("Metabolism: ") + ::Reg_obj::metabolism));
			}
			HX_STACK_LINE(124)
			if (((  ((touch->overlaps(this->metabolism,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
				HX_STACK_LINE(125)
				this->metabolismBtn->set_color((int)-65536);
			}
			else{
				HX_STACK_LINE(127)
				this->metabolismBtn->set_color((int)-1);
			}
			HX_STACK_LINE(131)
			if (((  ((touch->overlaps(this->sphincterStrength,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(132)
				hx::AddEq(::Reg_obj::sphincterStrength,(int)1);
				HX_STACK_LINE(133)
				this->sphincterStrength->set_text((HX_CSTRING("Sphincter: ") + ::Reg_obj::sphincterStrength));
			}
			HX_STACK_LINE(135)
			if (((  ((touch->overlaps(this->sphincterStrength,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
				HX_STACK_LINE(136)
				this->sphincterBtn->set_color((int)-65536);
			}
			else{
				HX_STACK_LINE(138)
				this->sphincterBtn->set_color((int)-1);
			}
			HX_STACK_LINE(142)
			if (((  ((touch->overlaps(this->playAgain,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(143)
				::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
				HX_STACK_LINE(143)
				::flixel::FlxG_obj::game->_requestedState = State;
			}
			HX_STACK_LINE(145)
			if (((  ((touch->overlaps(this->playAgain,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
				HX_STACK_LINE(146)
				this->playAgainBtn->set_color((int)-65536);
			}
			else{
				HX_STACK_LINE(148)
				this->playAgainBtn->set_color((int)-1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,update,(void))


EndMenu_obj::EndMenu_obj()
{
}

void EndMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EndMenu);
	HX_MARK_MEMBER_NAME(metabolism,"metabolism");
	HX_MARK_MEMBER_NAME(metabolismBtn,"metabolismBtn");
	HX_MARK_MEMBER_NAME(sphincterStrength,"sphincterStrength");
	HX_MARK_MEMBER_NAME(sphincterBtn,"sphincterBtn");
	HX_MARK_MEMBER_NAME(stomachSize,"stomachSize");
	HX_MARK_MEMBER_NAME(stomachBtn,"stomachBtn");
	HX_MARK_MEMBER_NAME(food,"food");
	HX_MARK_MEMBER_NAME(foodBtn,"foodBtn");
	HX_MARK_MEMBER_NAME(playAgain,"playAgain");
	HX_MARK_MEMBER_NAME(playAgainBtn,"playAgainBtn");
	HX_MARK_END_CLASS();
}

void EndMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(metabolism,"metabolism");
	HX_VISIT_MEMBER_NAME(metabolismBtn,"metabolismBtn");
	HX_VISIT_MEMBER_NAME(sphincterStrength,"sphincterStrength");
	HX_VISIT_MEMBER_NAME(sphincterBtn,"sphincterBtn");
	HX_VISIT_MEMBER_NAME(stomachSize,"stomachSize");
	HX_VISIT_MEMBER_NAME(stomachBtn,"stomachBtn");
	HX_VISIT_MEMBER_NAME(food,"food");
	HX_VISIT_MEMBER_NAME(foodBtn,"foodBtn");
	HX_VISIT_MEMBER_NAME(playAgain,"playAgain");
	HX_VISIT_MEMBER_NAME(playAgainBtn,"playAgainBtn");
}

Dynamic EndMenu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"food") ) { return food; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"foodBtn") ) { return foodBtn; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playAgain") ) { return playAgain; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"metabolism") ) { return metabolism; }
		if (HX_FIELD_EQ(inName,"stomachBtn") ) { return stomachBtn; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stomachSize") ) { return stomachSize; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sphincterBtn") ) { return sphincterBtn; }
		if (HX_FIELD_EQ(inName,"playAgainBtn") ) { return playAgainBtn; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"metabolismBtn") ) { return metabolismBtn; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sphincterStrength") ) { return sphincterStrength; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EndMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"food") ) { food=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"foodBtn") ) { foodBtn=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playAgain") ) { playAgain=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"metabolism") ) { metabolism=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stomachBtn") ) { stomachBtn=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stomachSize") ) { stomachSize=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sphincterBtn") ) { sphincterBtn=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playAgainBtn") ) { playAgainBtn=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"metabolismBtn") ) { metabolismBtn=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sphincterStrength") ) { sphincterStrength=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EndMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("metabolism"));
	outFields->push(HX_CSTRING("metabolismBtn"));
	outFields->push(HX_CSTRING("sphincterStrength"));
	outFields->push(HX_CSTRING("sphincterBtn"));
	outFields->push(HX_CSTRING("stomachSize"));
	outFields->push(HX_CSTRING("stomachBtn"));
	outFields->push(HX_CSTRING("food"));
	outFields->push(HX_CSTRING("foodBtn"));
	outFields->push(HX_CSTRING("playAgain"));
	outFields->push(HX_CSTRING("playAgainBtn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(EndMenu_obj,metabolism),HX_CSTRING("metabolism")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(EndMenu_obj,metabolismBtn),HX_CSTRING("metabolismBtn")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(EndMenu_obj,sphincterStrength),HX_CSTRING("sphincterStrength")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(EndMenu_obj,sphincterBtn),HX_CSTRING("sphincterBtn")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(EndMenu_obj,stomachSize),HX_CSTRING("stomachSize")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(EndMenu_obj,stomachBtn),HX_CSTRING("stomachBtn")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(EndMenu_obj,food),HX_CSTRING("food")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(EndMenu_obj,foodBtn),HX_CSTRING("foodBtn")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(EndMenu_obj,playAgain),HX_CSTRING("playAgain")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(EndMenu_obj,playAgainBtn),HX_CSTRING("playAgainBtn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("metabolism"),
	HX_CSTRING("metabolismBtn"),
	HX_CSTRING("sphincterStrength"),
	HX_CSTRING("sphincterBtn"),
	HX_CSTRING("stomachSize"),
	HX_CSTRING("stomachBtn"),
	HX_CSTRING("food"),
	HX_CSTRING("foodBtn"),
	HX_CSTRING("playAgain"),
	HX_CSTRING("playAgainBtn"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EndMenu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EndMenu_obj::__mClass,"__mClass");
};

#endif

Class EndMenu_obj::__mClass;

void EndMenu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("EndMenu"), hx::TCanCast< EndMenu_obj> ,sStaticFields,sMemberFields,
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

void EndMenu_obj::__boot()
{
}


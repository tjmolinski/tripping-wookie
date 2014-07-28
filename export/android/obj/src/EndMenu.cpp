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
HX_STACK_FRAME("EndMenu","new",0xd642ccec,"EndMenu.new","EndMenu.hx",65,0x570f3404)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(66)
	::String _g = this->getFoodString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(66)
	::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)130),::flixel::FlxG_obj::width,_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(66)
	this->food = _g1;
	HX_STACK_LINE(67)
	this->food->setFormat(null(),(int)32,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::flixel::text::FlxText _this = this->food;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(68)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(68)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(68)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(68)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(68)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(69)
	::flixel::text::FlxTextFormat _g2 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(69)
	this->food->addFormat(_g2,null(),null());
	HX_STACK_LINE(71)
	::flixel::FlxSprite _g3 = ::flixel::FlxSprite_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)140),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(71)
	this->foodBtn = _g3;
	HX_STACK_LINE(72)
	this->foodBtn->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
	HX_STACK_LINE(74)
	::flixel::FlxG_obj::game->_state->add(this->foodBtn);
	HX_STACK_LINE(75)
	::flixel::FlxG_obj::game->_state->add(this->food);
	HX_STACK_LINE(77)
	::String _g4 = this->getStomachString();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(77)
	::flixel::text::FlxText _g5 = ::flixel::text::FlxText_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)60),::flixel::FlxG_obj::width,_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(77)
	this->stomachSize = _g5;
	HX_STACK_LINE(78)
	this->stomachSize->setFormat(null(),(int)32,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::flixel::text::FlxText _this = this->stomachSize;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(79)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(79)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(79)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(79)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(79)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(80)
	::flixel::text::FlxTextFormat _g6 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(80)
	this->stomachSize->addFormat(_g6,null(),null());
	HX_STACK_LINE(82)
	::flixel::FlxSprite _g7 = ::flixel::FlxSprite_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)70),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(82)
	this->stomachBtn = _g7;
	HX_STACK_LINE(83)
	this->stomachBtn->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
	HX_STACK_LINE(85)
	::flixel::FlxG_obj::game->_state->add(this->stomachBtn);
	HX_STACK_LINE(86)
	::flixel::FlxG_obj::game->_state->add(this->stomachSize);
	HX_STACK_LINE(88)
	::String _g8 = this->getMetabolismString();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(88)
	::flixel::text::FlxText _g9 = ::flixel::text::FlxText_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) + (int)10),::flixel::FlxG_obj::width,_g8,null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(88)
	this->metabolism = _g9;
	HX_STACK_LINE(89)
	this->metabolism->setFormat(null(),(int)32,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		::flixel::text::FlxText _this = this->metabolism;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(90)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(90)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(90)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(90)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(90)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(91)
	::flixel::text::FlxTextFormat _g10 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(91)
	this->metabolism->addFormat(_g10,null(),null());
	HX_STACK_LINE(93)
	::flixel::FlxSprite _g11 = ::flixel::FlxSprite_obj::__new((int)0,(Float(::flixel::FlxG_obj::height) / Float((int)2)),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(93)
	this->metabolismBtn = _g11;
	HX_STACK_LINE(94)
	this->metabolismBtn->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
	HX_STACK_LINE(96)
	::flixel::FlxG_obj::game->_state->add(this->metabolismBtn);
	HX_STACK_LINE(97)
	::flixel::FlxG_obj::game->_state->add(this->metabolism);
	HX_STACK_LINE(99)
	::String _g12 = this->getSphincterString();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(99)
	::flixel::text::FlxText _g13 = ::flixel::text::FlxText_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) + (int)80),::flixel::FlxG_obj::width,_g12,null(),null());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(99)
	this->sphincterStrength = _g13;
	HX_STACK_LINE(100)
	this->sphincterStrength->setFormat(null(),(int)32,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		::flixel::text::FlxText _this = this->sphincterStrength;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(101)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(101)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(101)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(101)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(101)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(102)
	::flixel::text::FlxTextFormat _g14 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(102)
	this->sphincterStrength->addFormat(_g14,null(),null());
	HX_STACK_LINE(104)
	::flixel::FlxSprite _g15 = ::flixel::FlxSprite_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) + (int)70),null());		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(104)
	this->sphincterBtn = _g15;
	HX_STACK_LINE(105)
	this->sphincterBtn->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
	HX_STACK_LINE(107)
	::flixel::FlxG_obj::game->_state->add(this->sphincterBtn);
	HX_STACK_LINE(108)
	::flixel::FlxG_obj::game->_state->add(this->sphincterStrength);
	HX_STACK_LINE(110)
	::flixel::text::FlxText _g16 = ::flixel::text::FlxText_obj::__new((int)0,(::flixel::FlxG_obj::height - (int)160),::flixel::FlxG_obj::width,HX_CSTRING("Play Again"),null(),null());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(110)
	this->playAgain = _g16;
	HX_STACK_LINE(111)
	this->playAgain->setFormat(null(),(int)48,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		::flixel::text::FlxText _this = this->playAgain;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(112)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(112)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(112)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(112)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(112)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(113)
	::flixel::text::FlxTextFormat _g17 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)11);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(113)
	this->playAgain->addFormat(_g17,null(),null());
	HX_STACK_LINE(115)
	::flixel::FlxSprite _g18 = ::flixel::FlxSprite_obj::__new((int)0,(::flixel::FlxG_obj::height - (int)160),null());		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(115)
	this->playAgainBtn = _g18;
	HX_STACK_LINE(116)
	this->playAgainBtn->makeGraphic(::flixel::FlxG_obj::width,(int)60,(int)-1,null(),null());
	HX_STACK_LINE(118)
	::flixel::FlxG_obj::game->_state->add(this->playAgainBtn);
	HX_STACK_LINE(119)
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

int EndMenu_obj::getFoodPrice( ){
	HX_STACK_FRAME("EndMenu","getFoodPrice",0xbaa85189,"EndMenu.getFoodPrice","EndMenu.hx",26,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return (::Reg_obj::food * ::Reg_obj::foodPrice);
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getFoodPrice,return )

int EndMenu_obj::getFoodUpgradeAmount( ){
	HX_STACK_FRAME("EndMenu","getFoodUpgradeAmount",0x81749a94,"EndMenu.getFoodUpgradeAmount","EndMenu.hx",29,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return ::Reg_obj::food;
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getFoodUpgradeAmount,return )

::String EndMenu_obj::getFoodString( ){
	HX_STACK_FRAME("EndMenu","getFoodString",0xf875c5d1,"EndMenu.getFoodString","EndMenu.hx",31,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	int _g = this->getFoodPrice();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	::String _g1 = (HX_CSTRING("$") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	::String _g2 = (_g1 + HX_CSTRING(" for Food: "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(32)
	int _g3 = this->getFoodUpgradeAmount();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(32)
	return (_g2 + _g3);
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getFoodString,return )

int EndMenu_obj::getSphincterPrice( ){
	HX_STACK_FRAME("EndMenu","getSphincterPrice",0xb767793d,"EndMenu.getSphincterPrice","EndMenu.hx",36,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return (::Reg_obj::sphincterStrength * ::Reg_obj::sphincterStrengthPrice);
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getSphincterPrice,return )

int EndMenu_obj::getSphincterUpgradeAmount( ){
	HX_STACK_FRAME("EndMenu","getSphincterUpgradeAmount",0xedf09648,"EndMenu.getSphincterUpgradeAmount","EndMenu.hx",39,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return ::Reg_obj::sphincterStrength;
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getSphincterUpgradeAmount,return )

::String EndMenu_obj::getSphincterString( ){
	HX_STACK_FRAME("EndMenu","getSphincterString",0x22f95b9d,"EndMenu.getSphincterString","EndMenu.hx",41,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	int _g = this->getSphincterPrice();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	::String _g1 = (HX_CSTRING("$") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(42)
	::String _g2 = (_g1 + HX_CSTRING(" for Sphincter: "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(42)
	int _g3 = this->getSphincterUpgradeAmount();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(42)
	return (_g2 + _g3);
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getSphincterString,return )

int EndMenu_obj::getStomachPrice( ){
	HX_STACK_FRAME("EndMenu","getStomachPrice",0x9742eaa4,"EndMenu.getStomachPrice","EndMenu.hx",46,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return (::Reg_obj::stomachSize * ::Reg_obj::stomachSizePrice);
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getStomachPrice,return )

int EndMenu_obj::getStomachUpgradeAmount( ){
	HX_STACK_FRAME("EndMenu","getStomachUpgradeAmount",0x0f4646af,"EndMenu.getStomachUpgradeAmount","EndMenu.hx",49,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	return ::Reg_obj::stomachSize;
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getStomachUpgradeAmount,return )

::String EndMenu_obj::getStomachString( ){
	HX_STACK_FRAME("EndMenu","getStomachString",0x23212456,"EndMenu.getStomachString","EndMenu.hx",51,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	int _g = this->getStomachPrice();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	::String _g1 = (HX_CSTRING("$") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(52)
	::String _g2 = (_g1 + HX_CSTRING(" for Stomach: "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(52)
	int _g3 = this->getStomachUpgradeAmount();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(52)
	return (_g2 + _g3);
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getStomachString,return )

int EndMenu_obj::getMetabolismPrice( ){
	HX_STACK_FRAME("EndMenu","getMetabolismPrice",0x996a819e,"EndMenu.getMetabolismPrice","EndMenu.hx",56,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	return (::Reg_obj::metabolism * ::Reg_obj::metabolismPrice);
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getMetabolismPrice,return )

int EndMenu_obj::getMetabolismUpgradeAmount( ){
	HX_STACK_FRAME("EndMenu","getMetabolismUpgradeAmount",0x83b467a9,"EndMenu.getMetabolismUpgradeAmount","EndMenu.hx",59,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	return ::Reg_obj::metabolism;
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getMetabolismUpgradeAmount,return )

::String EndMenu_obj::getMetabolismString( ){
	HX_STACK_FRAME("EndMenu","getMetabolismString",0x039da81c,"EndMenu.getMetabolismString","EndMenu.hx",61,0x570f3404)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	int _g = this->getMetabolismPrice();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	::String _g1 = (HX_CSTRING("$") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(62)
	::String _g2 = (_g1 + HX_CSTRING(" for Metabolism: "));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(62)
	int _g3 = this->getMetabolismUpgradeAmount();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(62)
	return (_g2 + _g3);
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,getMetabolismString,return )

Void EndMenu_obj::destroy( ){
{
		HX_STACK_FRAME("EndMenu","destroy",0x1fbc5f86,"EndMenu.destroy","EndMenu.hx",122,0x570f3404)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		this->metabolism->destroy();
		HX_STACK_LINE(124)
		this->metabolismBtn->destroy();
		HX_STACK_LINE(125)
		this->playAgain->destroy();
		HX_STACK_LINE(126)
		this->playAgainBtn->destroy();
		HX_STACK_LINE(127)
		this->sphincterStrength->destroy();
		HX_STACK_LINE(128)
		this->sphincterBtn->destroy();
		HX_STACK_LINE(129)
		this->stomachSize->destroy();
		HX_STACK_LINE(130)
		this->stomachBtn->destroy();
		HX_STACK_LINE(131)
		this->food->destroy();
		HX_STACK_LINE(132)
		this->foodBtn->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EndMenu_obj,destroy,(void))

Void EndMenu_obj::update( ){
{
		HX_STACK_FRAME("EndMenu","update",0x8825e8fd,"EndMenu.update","EndMenu.hx",136,0x570f3404)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		while((true)){
			HX_STACK_LINE(136)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(136)
				break;
			}
			HX_STACK_LINE(136)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(136)
			++(_g);
			HX_STACK_LINE(138)
			int foodPrice = (::Reg_obj::food * ::Reg_obj::foodPrice);		HX_STACK_VAR(foodPrice,"foodPrice");
			HX_STACK_LINE(139)
			if (((foodPrice <= ::Reg_obj::cash))){
				HX_STACK_LINE(140)
				if (((  ((touch->overlaps(this->food,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
					HX_STACK_LINE(141)
					hx::SubEq(::Reg_obj::cash,foodPrice);
					HX_STACK_LINE(142)
					hx::AddEq(::Reg_obj::food,(int)1);
					HX_STACK_LINE(143)
					::String _g2 = this->getFoodString();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(143)
					this->food->set_text(_g2);
				}
			}
			HX_STACK_LINE(146)
			if (((  (((  (((foodPrice > ::Reg_obj::cash))) ? bool(touch->overlaps(this->food,null())) : bool(false) ))) ? bool((touch->_current > (int)0)) : bool(false) ))){
				HX_STACK_LINE(147)
				this->foodBtn->set_color((int)-8355712);
			}
			else{
				HX_STACK_LINE(148)
				if (((  ((touch->overlaps(this->food,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
					HX_STACK_LINE(149)
					this->foodBtn->set_color((int)-65536);
				}
				else{
					HX_STACK_LINE(151)
					this->foodBtn->set_color((int)-1);
				}
			}
			HX_STACK_LINE(155)
			int stomachPrice = (::Reg_obj::stomachSize * ::Reg_obj::stomachSizePrice);		HX_STACK_VAR(stomachPrice,"stomachPrice");
			HX_STACK_LINE(156)
			if (((stomachPrice <= ::Reg_obj::cash))){
				HX_STACK_LINE(157)
				if (((  ((touch->overlaps(this->stomachSize,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
					HX_STACK_LINE(158)
					hx::SubEq(::Reg_obj::cash,stomachPrice);
					HX_STACK_LINE(159)
					hx::AddEq(::Reg_obj::stomachSize,(int)1);
					HX_STACK_LINE(160)
					::String _g11 = this->getStomachString();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(160)
					this->stomachSize->set_text(_g11);
				}
			}
			HX_STACK_LINE(163)
			if (((  (((  (((stomachPrice > ::Reg_obj::cash))) ? bool(touch->overlaps(this->stomachSize,null())) : bool(false) ))) ? bool((touch->_current > (int)0)) : bool(false) ))){
				HX_STACK_LINE(164)
				this->stomachBtn->set_color((int)-8355712);
			}
			else{
				HX_STACK_LINE(165)
				if (((  ((touch->overlaps(this->stomachSize,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
					HX_STACK_LINE(166)
					this->stomachBtn->set_color((int)-65536);
				}
				else{
					HX_STACK_LINE(168)
					this->stomachBtn->set_color((int)-1);
				}
			}
			HX_STACK_LINE(172)
			int metabolismPrice = (::Reg_obj::metabolism * ::Reg_obj::metabolismPrice);		HX_STACK_VAR(metabolismPrice,"metabolismPrice");
			HX_STACK_LINE(173)
			if (((metabolismPrice <= ::Reg_obj::cash))){
				HX_STACK_LINE(174)
				if (((  ((touch->overlaps(this->metabolism,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
					HX_STACK_LINE(175)
					hx::SubEq(::Reg_obj::cash,metabolismPrice);
					HX_STACK_LINE(176)
					hx::AddEq(::Reg_obj::metabolism,(int)1);
					HX_STACK_LINE(177)
					::String _g2 = this->getMetabolismString();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(177)
					this->metabolism->set_text(_g2);
				}
			}
			HX_STACK_LINE(180)
			if (((  (((  (((metabolismPrice > ::Reg_obj::cash))) ? bool(touch->overlaps(this->metabolism,null())) : bool(false) ))) ? bool((touch->_current > (int)0)) : bool(false) ))){
				HX_STACK_LINE(181)
				this->metabolismBtn->set_color((int)-8355712);
			}
			else{
				HX_STACK_LINE(182)
				if (((  ((touch->overlaps(this->metabolism,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
					HX_STACK_LINE(183)
					this->metabolismBtn->set_color((int)-65536);
				}
				else{
					HX_STACK_LINE(185)
					this->metabolismBtn->set_color((int)-1);
				}
			}
			HX_STACK_LINE(189)
			int sphincterPrice = (::Reg_obj::sphincterStrength * ::Reg_obj::sphincterStrengthPrice);		HX_STACK_VAR(sphincterPrice,"sphincterPrice");
			HX_STACK_LINE(190)
			if (((sphincterPrice <= ::Reg_obj::cash))){
				HX_STACK_LINE(191)
				if (((  ((touch->overlaps(this->sphincterStrength,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
					HX_STACK_LINE(192)
					hx::SubEq(::Reg_obj::cash,sphincterPrice);
					HX_STACK_LINE(193)
					hx::AddEq(::Reg_obj::sphincterStrength,(int)1);
					HX_STACK_LINE(194)
					::String _g3 = this->getSphincterString();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(194)
					this->sphincterStrength->set_text(_g3);
				}
			}
			HX_STACK_LINE(197)
			if (((  (((  (((sphincterPrice > ::Reg_obj::cash))) ? bool(touch->overlaps(this->sphincterStrength,null())) : bool(false) ))) ? bool((touch->_current > (int)0)) : bool(false) ))){
				HX_STACK_LINE(198)
				this->sphincterBtn->set_color((int)-8355712);
			}
			else{
				HX_STACK_LINE(199)
				if (((  ((touch->overlaps(this->sphincterStrength,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
					HX_STACK_LINE(200)
					this->sphincterBtn->set_color((int)-65536);
				}
				else{
					HX_STACK_LINE(202)
					this->sphincterBtn->set_color((int)-1);
				}
			}
			HX_STACK_LINE(206)
			if (((  ((touch->overlaps(this->playAgain,null()))) ? bool((touch->_current == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(207)
				::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
				HX_STACK_LINE(207)
				::flixel::FlxG_obj::game->_requestedState = State;
			}
			HX_STACK_LINE(209)
			if (((  ((touch->overlaps(this->playAgain,null()))) ? bool((touch->_current > (int)0)) : bool(false) ))){
				HX_STACK_LINE(210)
				this->playAgainBtn->set_color((int)-65536);
			}
			else{
				HX_STACK_LINE(212)
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
		if (HX_FIELD_EQ(inName,"getFoodPrice") ) { return getFoodPrice_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"metabolismBtn") ) { return metabolismBtn; }
		if (HX_FIELD_EQ(inName,"getFoodString") ) { return getFoodString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getStomachPrice") ) { return getStomachPrice_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getStomachString") ) { return getStomachString_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sphincterStrength") ) { return sphincterStrength; }
		if (HX_FIELD_EQ(inName,"getSphincterPrice") ) { return getSphincterPrice_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getSphincterString") ) { return getSphincterString_dyn(); }
		if (HX_FIELD_EQ(inName,"getMetabolismPrice") ) { return getMetabolismPrice_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getMetabolismString") ) { return getMetabolismString_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getFoodUpgradeAmount") ) { return getFoodUpgradeAmount_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getStomachUpgradeAmount") ) { return getStomachUpgradeAmount_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSphincterUpgradeAmount") ) { return getSphincterUpgradeAmount_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getMetabolismUpgradeAmount") ) { return getMetabolismUpgradeAmount_dyn(); }
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
	HX_CSTRING("getFoodPrice"),
	HX_CSTRING("getFoodUpgradeAmount"),
	HX_CSTRING("getFoodString"),
	HX_CSTRING("getSphincterPrice"),
	HX_CSTRING("getSphincterUpgradeAmount"),
	HX_CSTRING("getSphincterString"),
	HX_CSTRING("getStomachPrice"),
	HX_CSTRING("getStomachUpgradeAmount"),
	HX_CSTRING("getStomachString"),
	HX_CSTRING("getMetabolismPrice"),
	HX_CSTRING("getMetabolismUpgradeAmount"),
	HX_CSTRING("getMetabolismString"),
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


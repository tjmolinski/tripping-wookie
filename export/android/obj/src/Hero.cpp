#include <hxcpp.h>

#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
#endif
#ifndef INCLUDED_Hero
#include <Hero.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Vector2
#include <Vector2.h>
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
#ifndef INCLUDED_flixel_input_FlxAccelerometer
#include <flixel/input/FlxAccelerometer.h>
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

Void Hero_obj::__construct(int newX,int newY)
{
HX_STACK_FRAME("Hero","new",0x1b0d1a0c,"Hero.new","Hero.hx",9,0x0144eae4)
HX_STACK_THIS(this)
HX_STACK_ARG(newX,"newX")
HX_STACK_ARG(newY,"newY")
{
	HX_STACK_LINE(36)
	this->startedEating = false;
	HX_STACK_LINE(27)
	this->shitEatTimer = 5.0;
	HX_STACK_LINE(26)
	this->shitEatBuffer = 0.0;
	HX_STACK_LINE(24)
	this->shitDecayTimer = 0.25;
	HX_STACK_LINE(23)
	this->shitDecayBuffer = 0.0;
	HX_STACK_LINE(21)
	this->FLOAT_SPEED = (int)200;
	HX_STACK_LINE(20)
	this->floating = false;
	HX_STACK_LINE(18)
	this->STOMACH_INTERVAL = (int)20;
	HX_STACK_LINE(17)
	this->SHIT_SPEED_DECAY = (int)1;
	HX_STACK_LINE(16)
	this->FRICTION = 0.8;
	HX_STACK_LINE(15)
	this->TILT_SPEED = (int)50;
	HX_STACK_LINE(14)
	this->vel = ::Vector2_obj::__new((int)0,(int)0);
	HX_STACK_LINE(13)
	this->shitting = false;
	HX_STACK_LINE(11)
	this->shitSpeed = (int)0;
	HX_STACK_LINE(39)
	super::__construct(newX,newY);
	HX_STACK_LINE(40)
	this->loadGraphic(HX_CSTRING("images/poopman.png"),true,(int)44,(int)108,null(),null());
	HX_STACK_LINE(42)
	::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)0,(int)100,::flixel::FlxG_obj::width,(this->shitEatTimer + HX_CSTRING(" sec")),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	this->timer = _g;
	HX_STACK_LINE(43)
	this->timer->setFormat(null(),(int)24,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::flixel::text::FlxText _this = this->timer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(44)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(44)
		_this->set_borderStyle((int)2);
		HX_STACK_LINE(44)
		_this->set_borderColor((int)-1);
		HX_STACK_LINE(44)
		_this->set_borderSize((int)2);
		HX_STACK_LINE(44)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(45)
	::flixel::text::FlxTextFormat _g1 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)12);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(45)
	this->timer->addFormat(_g1,null(),null());
	HX_STACK_LINE(46)
	(hx::TCast< PlayState >::cast(::flixel::FlxG_obj::game->_state))->add(this->timer);
	HX_STACK_LINE(51)
	this->metabolism = ::Reg_obj::metabolism;
	HX_STACK_LINE(52)
	this->sphincterStrength = ::Reg_obj::sphincterStrength;
	HX_STACK_LINE(53)
	this->stomachSize = ::Reg_obj::stomachSize;
	HX_STACK_LINE(54)
	this->food = ::Reg_obj::food;
	HX_STACK_LINE(55)
	this->cash = ::Reg_obj::cash;
}
;
	return null();
}

//Hero_obj::~Hero_obj() { }

Dynamic Hero_obj::__CreateEmpty() { return  new Hero_obj; }
hx::ObjectPtr< Hero_obj > Hero_obj::__new(int newX,int newY)
{  hx::ObjectPtr< Hero_obj > result = new Hero_obj();
	result->__construct(newX,newY);
	return result;}

Dynamic Hero_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hero_obj > result = new Hero_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Hero_obj::update( ){
{
		HX_STACK_FRAME("Hero","update",0xd8308fdd,"Hero.update","Hero.hx",58,0x0144eae4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		if ((this->shitting)){
			HX_STACK_LINE(61)
			Float sphincterControl = ((Float(this->sphincterStrength) / Float(((Float(this->TILT_SPEED) / Float((int)10))))) * this->TILT_SPEED);		HX_STACK_VAR(sphincterControl,"sphincterControl");
			HX_STACK_LINE(62)
			hx::SubEq(this->vel->x,(::flixel::FlxG_obj::accelerometer->x * sphincterControl));
			HX_STACK_LINE(66)
			if (((this->x > (::flixel::FlxG_obj::width - (int)44)))){
				HX_STACK_LINE(67)
				this->set_x((::flixel::FlxG_obj::width - (int)44));
				HX_STACK_LINE(68)
				this->vel->x = (int)0;
			}
			else{
				HX_STACK_LINE(69)
				if (((this->x < (int)0))){
					HX_STACK_LINE(70)
					this->set_x((int)0);
					HX_STACK_LINE(71)
					this->vel->x = (int)0;
				}
				else{
					HX_STACK_LINE(73)
					::Hero _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(73)
					_g->set_x((_g->x + (this->vel->x * ::flixel::FlxG_obj::elapsed)));
				}
			}
			HX_STACK_LINE(76)
			hx::MultEq(this->vel->x,this->FRICTION);
			HX_STACK_LINE(79)
			this->set_angle((this->vel->x * 0.07));
			HX_STACK_LINE(81)
			if (((this->shitDecayBuffer > this->shitDecayTimer))){
				HX_STACK_LINE(82)
				this->shitDecayBuffer = (int)0;
				HX_STACK_LINE(83)
				hx::SubEq(this->shitSpeed,this->SHIT_SPEED_DECAY);
			}
			else{
				HX_STACK_LINE(85)
				hx::AddEq(this->shitDecayBuffer,(Float(::flixel::FlxG_obj::elapsed) / Float(this->metabolism)));
			}
			HX_STACK_LINE(88)
			if ((this->floating)){
				HX_STACK_LINE(90)
				{
					HX_STACK_LINE(90)
					::Hero _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(90)
					_g->set_y((_g->y - (this->FLOAT_SPEED * ::flixel::FlxG_obj::elapsed)));
				}
				HX_STACK_LINE(91)
				if (((this->y <= (Float(::flixel::FlxG_obj::height) / Float((int)2))))){
					HX_STACK_LINE(92)
					this->floating = false;
				}
			}
		}
		else{
			HX_STACK_LINE(96)
			if (((this->shitEatBuffer > this->shitEatTimer))){
				HX_STACK_LINE(97)
				this->set_color((int)-1);
				HX_STACK_LINE(98)
				this->floating = true;
				HX_STACK_LINE(99)
				this->shitting = true;
				HX_STACK_LINE(100)
				this->timer->destroy();
			}
			else{
				HX_STACK_LINE(102)
				this->set_color((int)-16776961);
				HX_STACK_LINE(103)
				if (((this->shitSpeed < (this->stomachSize * this->STOMACH_INTERVAL)))){
					HX_STACK_LINE(104)
					{
						HX_STACK_LINE(104)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(104)
						Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(104)
						while((true)){
							HX_STACK_LINE(104)
							if ((!(((_g < _g1->length))))){
								HX_STACK_LINE(104)
								break;
							}
							HX_STACK_LINE(104)
							::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
							HX_STACK_LINE(104)
							++(_g);
							HX_STACK_LINE(105)
							if (((touch->_current == (int)2))){
								HX_STACK_LINE(106)
								hx::AddEq(this->shitSpeed,this->food);
								HX_STACK_LINE(107)
								this->set_color((int)-65536);
								HX_STACK_LINE(108)
								this->startedEating = true;
							}
						}
					}
					HX_STACK_LINE(111)
					if (((this->shitSpeed > (this->stomachSize * this->STOMACH_INTERVAL)))){
						HX_STACK_LINE(112)
						this->shitSpeed = (this->stomachSize * this->STOMACH_INTERVAL);
					}
				}
				HX_STACK_LINE(116)
				if ((this->startedEating)){
					HX_STACK_LINE(117)
					hx::AddEq(this->shitEatBuffer,::flixel::FlxG_obj::elapsed);
					HX_STACK_LINE(118)
					this->timer->set_text(((this->shitEatTimer - this->shitEatBuffer) + HX_CSTRING(" sec")));
				}
			}
		}
		HX_STACK_LINE(122)
		this->super::update();
	}
return null();
}


Void Hero_obj::ateSpoiledFood( ){
{
		HX_STACK_FRAME("Hero","ateSpoiledFood",0xf50658d4,"Hero.ateSpoiledFood","Hero.hx",126,0x0144eae4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		hx::SubEq(this->shitSpeed,(int)10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hero_obj,ateSpoiledFood,(void))

Void Hero_obj::ateFood( ){
{
		HX_STACK_FRAME("Hero","ateFood",0x2d978b7c,"Hero.ateFood","Hero.hx",129,0x0144eae4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		if (((this->shitSpeed < (this->stomachSize * this->STOMACH_INTERVAL)))){
			HX_STACK_LINE(131)
			hx::AddEq(this->shitSpeed,(int)20);
		}
		HX_STACK_LINE(134)
		if (((this->shitSpeed > (this->stomachSize * this->STOMACH_INTERVAL)))){
			HX_STACK_LINE(135)
			this->shitSpeed = (this->stomachSize * this->STOMACH_INTERVAL);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hero_obj,ateFood,(void))

Void Hero_obj::gotCash( ){
{
		HX_STACK_FRAME("Hero","gotCash",0xc84bf9cb,"Hero.gotCash","Hero.hx",140,0x0144eae4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		hx::AddEq(::Reg_obj::cash,(int)10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hero_obj,gotCash,(void))


Hero_obj::Hero_obj()
{
}

void Hero_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hero);
	HX_MARK_MEMBER_NAME(shitSpeed,"shitSpeed");
	HX_MARK_MEMBER_NAME(shitting,"shitting");
	HX_MARK_MEMBER_NAME(vel,"vel");
	HX_MARK_MEMBER_NAME(TILT_SPEED,"TILT_SPEED");
	HX_MARK_MEMBER_NAME(FRICTION,"FRICTION");
	HX_MARK_MEMBER_NAME(SHIT_SPEED_DECAY,"SHIT_SPEED_DECAY");
	HX_MARK_MEMBER_NAME(STOMACH_INTERVAL,"STOMACH_INTERVAL");
	HX_MARK_MEMBER_NAME(floating,"floating");
	HX_MARK_MEMBER_NAME(FLOAT_SPEED,"FLOAT_SPEED");
	HX_MARK_MEMBER_NAME(shitDecayBuffer,"shitDecayBuffer");
	HX_MARK_MEMBER_NAME(shitDecayTimer,"shitDecayTimer");
	HX_MARK_MEMBER_NAME(shitEatBuffer,"shitEatBuffer");
	HX_MARK_MEMBER_NAME(shitEatTimer,"shitEatTimer");
	HX_MARK_MEMBER_NAME(metabolism,"metabolism");
	HX_MARK_MEMBER_NAME(sphincterStrength,"sphincterStrength");
	HX_MARK_MEMBER_NAME(stomachSize,"stomachSize");
	HX_MARK_MEMBER_NAME(food,"food");
	HX_MARK_MEMBER_NAME(cash,"cash");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(startedEating,"startedEating");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Hero_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shitSpeed,"shitSpeed");
	HX_VISIT_MEMBER_NAME(shitting,"shitting");
	HX_VISIT_MEMBER_NAME(vel,"vel");
	HX_VISIT_MEMBER_NAME(TILT_SPEED,"TILT_SPEED");
	HX_VISIT_MEMBER_NAME(FRICTION,"FRICTION");
	HX_VISIT_MEMBER_NAME(SHIT_SPEED_DECAY,"SHIT_SPEED_DECAY");
	HX_VISIT_MEMBER_NAME(STOMACH_INTERVAL,"STOMACH_INTERVAL");
	HX_VISIT_MEMBER_NAME(floating,"floating");
	HX_VISIT_MEMBER_NAME(FLOAT_SPEED,"FLOAT_SPEED");
	HX_VISIT_MEMBER_NAME(shitDecayBuffer,"shitDecayBuffer");
	HX_VISIT_MEMBER_NAME(shitDecayTimer,"shitDecayTimer");
	HX_VISIT_MEMBER_NAME(shitEatBuffer,"shitEatBuffer");
	HX_VISIT_MEMBER_NAME(shitEatTimer,"shitEatTimer");
	HX_VISIT_MEMBER_NAME(metabolism,"metabolism");
	HX_VISIT_MEMBER_NAME(sphincterStrength,"sphincterStrength");
	HX_VISIT_MEMBER_NAME(stomachSize,"stomachSize");
	HX_VISIT_MEMBER_NAME(food,"food");
	HX_VISIT_MEMBER_NAME(cash,"cash");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(startedEating,"startedEating");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Hero_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"vel") ) { return vel; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"food") ) { return food; }
		if (HX_FIELD_EQ(inName,"cash") ) { return cash; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ateFood") ) { return ateFood_dyn(); }
		if (HX_FIELD_EQ(inName,"gotCash") ) { return gotCash_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shitting") ) { return shitting; }
		if (HX_FIELD_EQ(inName,"FRICTION") ) { return FRICTION; }
		if (HX_FIELD_EQ(inName,"floating") ) { return floating; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shitSpeed") ) { return shitSpeed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TILT_SPEED") ) { return TILT_SPEED; }
		if (HX_FIELD_EQ(inName,"metabolism") ) { return metabolism; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FLOAT_SPEED") ) { return FLOAT_SPEED; }
		if (HX_FIELD_EQ(inName,"stomachSize") ) { return stomachSize; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shitEatTimer") ) { return shitEatTimer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shitEatBuffer") ) { return shitEatBuffer; }
		if (HX_FIELD_EQ(inName,"startedEating") ) { return startedEating; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shitDecayTimer") ) { return shitDecayTimer; }
		if (HX_FIELD_EQ(inName,"ateSpoiledFood") ) { return ateSpoiledFood_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"shitDecayBuffer") ) { return shitDecayBuffer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SHIT_SPEED_DECAY") ) { return SHIT_SPEED_DECAY; }
		if (HX_FIELD_EQ(inName,"STOMACH_INTERVAL") ) { return STOMACH_INTERVAL; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sphincterStrength") ) { return sphincterStrength; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hero_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"vel") ) { vel=inValue.Cast< ::Vector2 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"food") ) { food=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cash") ) { cash=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shitting") ) { shitting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRICTION") ) { FRICTION=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"floating") ) { floating=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shitSpeed") ) { shitSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TILT_SPEED") ) { TILT_SPEED=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"metabolism") ) { metabolism=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FLOAT_SPEED") ) { FLOAT_SPEED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stomachSize") ) { stomachSize=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shitEatTimer") ) { shitEatTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shitEatBuffer") ) { shitEatBuffer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startedEating") ) { startedEating=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"shitDecayTimer") ) { shitDecayTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"shitDecayBuffer") ) { shitDecayBuffer=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SHIT_SPEED_DECAY") ) { SHIT_SPEED_DECAY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STOMACH_INTERVAL") ) { STOMACH_INTERVAL=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sphincterStrength") ) { sphincterStrength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hero_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("shitSpeed"));
	outFields->push(HX_CSTRING("shitting"));
	outFields->push(HX_CSTRING("vel"));
	outFields->push(HX_CSTRING("TILT_SPEED"));
	outFields->push(HX_CSTRING("FRICTION"));
	outFields->push(HX_CSTRING("SHIT_SPEED_DECAY"));
	outFields->push(HX_CSTRING("STOMACH_INTERVAL"));
	outFields->push(HX_CSTRING("floating"));
	outFields->push(HX_CSTRING("FLOAT_SPEED"));
	outFields->push(HX_CSTRING("shitDecayBuffer"));
	outFields->push(HX_CSTRING("shitDecayTimer"));
	outFields->push(HX_CSTRING("shitEatBuffer"));
	outFields->push(HX_CSTRING("shitEatTimer"));
	outFields->push(HX_CSTRING("metabolism"));
	outFields->push(HX_CSTRING("sphincterStrength"));
	outFields->push(HX_CSTRING("stomachSize"));
	outFields->push(HX_CSTRING("food"));
	outFields->push(HX_CSTRING("cash"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("startedEating"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Hero_obj,shitSpeed),HX_CSTRING("shitSpeed")},
	{hx::fsBool,(int)offsetof(Hero_obj,shitting),HX_CSTRING("shitting")},
	{hx::fsObject /*::Vector2*/ ,(int)offsetof(Hero_obj,vel),HX_CSTRING("vel")},
	{hx::fsFloat,(int)offsetof(Hero_obj,TILT_SPEED),HX_CSTRING("TILT_SPEED")},
	{hx::fsFloat,(int)offsetof(Hero_obj,FRICTION),HX_CSTRING("FRICTION")},
	{hx::fsInt,(int)offsetof(Hero_obj,SHIT_SPEED_DECAY),HX_CSTRING("SHIT_SPEED_DECAY")},
	{hx::fsInt,(int)offsetof(Hero_obj,STOMACH_INTERVAL),HX_CSTRING("STOMACH_INTERVAL")},
	{hx::fsBool,(int)offsetof(Hero_obj,floating),HX_CSTRING("floating")},
	{hx::fsInt,(int)offsetof(Hero_obj,FLOAT_SPEED),HX_CSTRING("FLOAT_SPEED")},
	{hx::fsFloat,(int)offsetof(Hero_obj,shitDecayBuffer),HX_CSTRING("shitDecayBuffer")},
	{hx::fsFloat,(int)offsetof(Hero_obj,shitDecayTimer),HX_CSTRING("shitDecayTimer")},
	{hx::fsFloat,(int)offsetof(Hero_obj,shitEatBuffer),HX_CSTRING("shitEatBuffer")},
	{hx::fsFloat,(int)offsetof(Hero_obj,shitEatTimer),HX_CSTRING("shitEatTimer")},
	{hx::fsInt,(int)offsetof(Hero_obj,metabolism),HX_CSTRING("metabolism")},
	{hx::fsInt,(int)offsetof(Hero_obj,sphincterStrength),HX_CSTRING("sphincterStrength")},
	{hx::fsInt,(int)offsetof(Hero_obj,stomachSize),HX_CSTRING("stomachSize")},
	{hx::fsInt,(int)offsetof(Hero_obj,food),HX_CSTRING("food")},
	{hx::fsInt,(int)offsetof(Hero_obj,cash),HX_CSTRING("cash")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Hero_obj,timer),HX_CSTRING("timer")},
	{hx::fsBool,(int)offsetof(Hero_obj,startedEating),HX_CSTRING("startedEating")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("shitSpeed"),
	HX_CSTRING("shitting"),
	HX_CSTRING("vel"),
	HX_CSTRING("TILT_SPEED"),
	HX_CSTRING("FRICTION"),
	HX_CSTRING("SHIT_SPEED_DECAY"),
	HX_CSTRING("STOMACH_INTERVAL"),
	HX_CSTRING("floating"),
	HX_CSTRING("FLOAT_SPEED"),
	HX_CSTRING("shitDecayBuffer"),
	HX_CSTRING("shitDecayTimer"),
	HX_CSTRING("shitEatBuffer"),
	HX_CSTRING("shitEatTimer"),
	HX_CSTRING("metabolism"),
	HX_CSTRING("sphincterStrength"),
	HX_CSTRING("stomachSize"),
	HX_CSTRING("food"),
	HX_CSTRING("cash"),
	HX_CSTRING("timer"),
	HX_CSTRING("startedEating"),
	HX_CSTRING("update"),
	HX_CSTRING("ateSpoiledFood"),
	HX_CSTRING("ateFood"),
	HX_CSTRING("gotCash"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hero_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hero_obj::__mClass,"__mClass");
};

#endif

Class Hero_obj::__mClass;

void Hero_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Hero"), hx::TCanCast< Hero_obj> ,sStaticFields,sMemberFields,
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

void Hero_obj::__boot()
{
}


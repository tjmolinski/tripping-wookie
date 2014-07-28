#include <hxcpp.h>

#ifndef INCLUDED_CashItem
#include <CashItem.h>
#endif
#ifndef INCLUDED_CloudManager
#include <CloudManager.h>
#endif
#ifndef INCLUDED_EndMenu
#include <EndMenu.h>
#endif
#ifndef INCLUDED_ExtendedSprite
#include <ExtendedSprite.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Hero
#include <Hero.h>
#endif
#ifndef INCLUDED_Pizza
#include <Pizza.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PowerDown
#include <PowerDown.h>
#endif
#ifndef INCLUDED_PowerUp
#include <PowerUp.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitter
#include <flixel/effects/particles/FlxEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#include <flixel/interfaces/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
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
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",23,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(32)
	this->pickupTimer = 2.0;
	HX_STACK_LINE(31)
	this->pickupBuffer = 0.0;
	HX_STACK_LINE(23)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::hitStuff( ::flixel::FlxObject obj1,::flixel::FlxObject obj2){
{
		HX_STACK_FRAME("PlayState","hitStuff",0x723d7ad2,"PlayState.hitStuff","PlayState.hx",45,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj1,"obj1")
		HX_STACK_ARG(obj2,"obj2")
		HX_STACK_LINE(46)
		::Class _g = ::Type_obj::getClass(obj1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		::String _g1 = ::Type_obj::getClassName(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		if (((_g1 == HX_CSTRING("PowerDown")))){
			HX_STACK_LINE(47)
			this->hero->ateSpoiledFood();
			HX_STACK_LINE(48)
			obj1->kill();
		}
		else{
			HX_STACK_LINE(50)
			::Class _g2 = ::Type_obj::getClass(obj1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(50)
			::String _g3 = ::Type_obj::getClassName(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(50)
			if (((_g3 == HX_CSTRING("Pizza")))){
				HX_STACK_LINE(51)
				int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(51)
				Array< ::Dynamic > _g11 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(51)
				while((true)){
					HX_STACK_LINE(51)
					if ((!(((_g4 < _g11->length))))){
						HX_STACK_LINE(51)
						break;
					}
					HX_STACK_LINE(51)
					::flixel::input::touch::FlxTouch touch = _g11->__get(_g4).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
					HX_STACK_LINE(51)
					++(_g4);
					HX_STACK_LINE(52)
					if (((touch->_current == (int)2))){
						HX_STACK_LINE(53)
						this->hero->ateFood();
						HX_STACK_LINE(54)
						this->hitContainer->remove(obj1,null());
						HX_STACK_LINE(55)
						obj1->kill();
					}
				}
			}
			else{
				HX_STACK_LINE(59)
				this->hero->gotCash();
				HX_STACK_LINE(60)
				this->cash->set_text((HX_CSTRING("Cash: $") + ::Reg_obj::cash));
				HX_STACK_LINE(61)
				obj1->kill();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,hitStuff,(void))

Void PlayState_obj::spawnCashItem( ){
{
		HX_STACK_FRAME("PlayState","spawnCashItem",0x6e8d39f0,"PlayState.spawnCashItem","PlayState.hx",65,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::CashItem pickup;		HX_STACK_VAR(pickup,"pickup");
		HX_STACK_LINE(66)
		pickup = hx::TCast< CashItem >::cast(this->cashitems->recycle(null(),null(),null(),null()));
		HX_STACK_LINE(67)
		pickup->spawn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,spawnCashItem,(void))

Void PlayState_obj::spawnPizza( ){
{
		HX_STACK_FRAME("PlayState","spawnPizza",0x88d62e7e,"PlayState.spawnPizza","PlayState.hx",70,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		::Pizza pizza = ::Pizza_obj::__new();		HX_STACK_VAR(pizza,"pizza");
		HX_STACK_LINE(72)
		this->hitContainer->add(pizza);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,spawnPizza,(void))

Void PlayState_obj::spawnPowerDown( ){
{
		HX_STACK_FRAME("PlayState","spawnPowerDown",0x1308fb3d,"PlayState.spawnPowerDown","PlayState.hx",75,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		::PowerDown pickup;		HX_STACK_VAR(pickup,"pickup");
		HX_STACK_LINE(76)
		pickup = hx::TCast< PowerDown >::cast(this->powerdowns->recycle(null(),null(),null(),null()));
		HX_STACK_LINE(77)
		pickup->spawn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,spawnPowerDown,(void))

Void PlayState_obj::spawnPowerUp( ){
{
		HX_STACK_FRAME("PlayState","spawnPowerUp",0xabb96c76,"PlayState.spawnPowerUp","PlayState.hx",80,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		::PowerUp pickup;		HX_STACK_VAR(pickup,"pickup");
		HX_STACK_LINE(81)
		pickup = hx::TCast< PowerUp >::cast(this->powerups->recycle(null(),null(),null(),null()));
		HX_STACK_LINE(82)
		pickup->spawn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,spawnPowerUp,(void))

int PlayState_obj::sortByZ( int order,::ExtendedSprite sprite1,::ExtendedSprite sprite2){
	HX_STACK_FRAME("PlayState","sortByZ",0x4a8fefd4,"PlayState.sortByZ","PlayState.hx",86,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_ARG(order,"order")
	HX_STACK_ARG(sprite1,"sprite1")
	HX_STACK_ARG(sprite2,"sprite2")
	HX_STACK_LINE(86)
	Float Value1 = sprite1->z;		HX_STACK_VAR(Value1,"Value1");
	HX_STACK_LINE(86)
	Float Value2 = sprite2->z;		HX_STACK_VAR(Value2,"Value2");
	HX_STACK_LINE(86)
	int result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(86)
	if (((Value1 < Value2))){
		HX_STACK_LINE(86)
		result = order;
	}
	else{
		HX_STACK_LINE(86)
		if (((Value1 > Value2))){
			HX_STACK_LINE(86)
			result = -(order);
		}
	}
	HX_STACK_LINE(86)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC3(PlayState_obj,sortByZ,return )

Void PlayState_obj::addToScene( ::ExtendedSprite object){
{
		HX_STACK_FRAME("PlayState","addToScene",0x38f8c721,"PlayState.addToScene","PlayState.hx",89,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(90)
		this->container->add(object);
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int Order = (int)-1;		HX_STACK_VAR(Order,"Order");
			HX_STACK_LINE(91)
			Dynamic _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->sortByZ_dyn()));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(91)
				Array< int > a1 = Array_obj< int >::__new().Add(Order);		HX_STACK_VAR(a1,"a1");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< int >,a1,Dynamic,f)
				int run(::ExtendedSprite a2,::ExtendedSprite a3){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","PlayState.hx",91,0xb30d7781)
					HX_STACK_ARG(a2,"a2")
					HX_STACK_ARG(a3,"a3")
					{
						HX_STACK_LINE(91)
						return f->__GetItem((int)0)(a1->__get((int)0),a2,a3).Cast< int >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC2(return)

				HX_STACK_LINE(91)
				_g =  Dynamic(new _Function_3_1(a1,f));
			}
			HX_STACK_LINE(91)
			this->container->members->__Field(HX_CSTRING("sort"),true)(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,addToScene,(void))

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",95,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->super::create();
		HX_STACK_LINE(98)
		this->currentState = ::GameState_obj::PLAYING;
		HX_STACK_LINE(99)
		::flixel::group::FlxTypedGroup _g = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		this->container = _g;
		HX_STACK_LINE(100)
		::flixel::group::FlxGroup _g1 = ::flixel::group::FlxGroup_obj::__new((int)100);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		this->hitContainer = _g1;
		HX_STACK_LINE(102)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(102)
		_g2 = hx::TCast< Int >::cast((Float(::flixel::FlxG_obj::width) / Float((int)2)));
		HX_STACK_LINE(102)
		int _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(102)
		_g3 = hx::TCast< Int >::cast((::flixel::FlxG_obj::height - (int)50));
		HX_STACK_LINE(102)
		::Hero _g4 = ::Hero_obj::__new(_g2,_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(102)
		this->hero = _g4;
		HX_STACK_LINE(103)
		::flixel::text::FlxText _g5 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,HX_CSTRING("0 MPH"),null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(103)
		this->speed = _g5;
		HX_STACK_LINE(104)
		this->speed->setFormat(null(),(int)24,(int)-16777216,HX_CSTRING("left"),null(),null(),null());
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			::flixel::text::FlxText _this = this->speed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(105)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(105)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(105)
			_this->set_borderColor((int)-1);
			HX_STACK_LINE(105)
			_this->set_borderSize((int)2);
			HX_STACK_LINE(105)
			_this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(106)
		::flixel::text::FlxTextFormat _g6 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)12);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(106)
		this->speed->addFormat(_g6,null(),null());
		HX_STACK_LINE(107)
		::flixel::text::FlxText _g7 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,(HX_CSTRING("Level: ") + ::Reg_obj::level),null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(107)
		this->level = _g7;
		HX_STACK_LINE(108)
		this->level->setFormat(null(),(int)24,(int)-16777216,HX_CSTRING("right"),null(),null(),null());
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			::flixel::text::FlxText _this = this->level;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(109)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(109)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(109)
			_this->set_borderColor((int)-1);
			HX_STACK_LINE(109)
			_this->set_borderSize((int)2);
			HX_STACK_LINE(109)
			_this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(110)
		::flixel::text::FlxTextFormat _g8 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)12);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(110)
		this->level->addFormat(_g8,null(),null());
		HX_STACK_LINE(112)
		::flixel::text::FlxText _g9 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,(HX_CSTRING("Cash: $") + ::Reg_obj::cash),null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(112)
		this->cash = _g9;
		HX_STACK_LINE(113)
		this->cash->setFormat(null(),(int)24,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(114)
		{
			HX_STACK_LINE(114)
			::flixel::text::FlxText _this = this->cash;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(114)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(114)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(114)
			_this->set_borderColor((int)-1);
			HX_STACK_LINE(114)
			_this->set_borderSize((int)2);
			HX_STACK_LINE(114)
			_this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(115)
		::flixel::text::FlxTextFormat _g10 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)12);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(115)
		this->cash->addFormat(_g10,null(),null());
		HX_STACK_LINE(117)
		::flixel::effects::particles::FlxEmitter _g11 = ::flixel::effects::particles::FlxEmitter_obj::__new((this->hero->x + (int)22),(this->hero->y + (int)54),(int)200);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(117)
		this->emitter = _g11;
		HX_STACK_LINE(118)
		this->emitter->setXSpeed((int)-70,(int)70);
		HX_STACK_LINE(119)
		this->emitter->setYSpeed((int)300,(int)400);
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(120)
			int _g13 = ::Std_obj::_int((Float(this->emitter->maxSize) / Float((int)2)));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(120)
			while((true)){
				HX_STACK_LINE(120)
				if ((!(((_g12 < _g13))))){
					HX_STACK_LINE(120)
					break;
				}
				HX_STACK_LINE(120)
				int i = (_g12)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(121)
				::flixel::effects::particles::FlxParticle _g121 = ::flixel::effects::particles::FlxParticle_obj::__new();		HX_STACK_VAR(_g121,"_g121");
				HX_STACK_LINE(121)
				this->brownPixel = _g121;
				HX_STACK_LINE(122)
				this->brownPixel->makeGraphic((int)5,(int)3,(int)-6927616,null(),null());
				HX_STACK_LINE(123)
				this->brownPixel->set_visible(false);
				HX_STACK_LINE(124)
				this->emitter->add(this->brownPixel);
				HX_STACK_LINE(125)
				::flixel::effects::particles::FlxParticle _g131 = ::flixel::effects::particles::FlxParticle_obj::__new();		HX_STACK_VAR(_g131,"_g131");
				HX_STACK_LINE(125)
				this->brownPixel = _g131;
				HX_STACK_LINE(126)
				this->brownPixel->makeGraphic((int)8,(int)5,(int)-6927616,null(),null());
				HX_STACK_LINE(127)
				this->brownPixel->set_visible(false);
				HX_STACK_LINE(128)
				this->emitter->add(this->brownPixel);
			}
		}
		HX_STACK_LINE(130)
		this->emitter->start(false,(int)3,.01,null(),null());
		HX_STACK_LINE(132)
		::CloudManager _g14 = ::CloudManager_obj::__new();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(132)
		this->cloudManager = _g14;
		HX_STACK_LINE(135)
		int numPickups = (int)2;		HX_STACK_VAR(numPickups,"numPickups");
		HX_STACK_LINE(136)
		::flixel::group::FlxGroup _g15 = ::flixel::group::FlxGroup_obj::__new(numPickups);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(136)
		this->powerups = _g15;
		HX_STACK_LINE(137)
		::flixel::group::FlxGroup _g16 = ::flixel::group::FlxGroup_obj::__new(numPickups);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(137)
		this->powerdowns = _g16;
		HX_STACK_LINE(138)
		::flixel::group::FlxGroup _g17 = ::flixel::group::FlxGroup_obj::__new(numPickups);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(138)
		this->cashitems = _g17;
		HX_STACK_LINE(139)
		::PowerUp powerup;		HX_STACK_VAR(powerup,"powerup");
		HX_STACK_LINE(140)
		::PowerDown powerdown;		HX_STACK_VAR(powerdown,"powerdown");
		HX_STACK_LINE(141)
		::CashItem cashitem;		HX_STACK_VAR(cashitem,"cashitem");
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(142)
			while((true)){
				HX_STACK_LINE(142)
				if ((!(((_g12 < numPickups))))){
					HX_STACK_LINE(142)
					break;
				}
				HX_STACK_LINE(142)
				int i = (_g12)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(143)
				::PowerUp _g18 = ::PowerUp_obj::__new((int)-100,(int)-100);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(143)
				powerup = _g18;
				HX_STACK_LINE(144)
				powerup->z = (int)100;
				HX_STACK_LINE(145)
				this->powerups->add(powerup);
				HX_STACK_LINE(147)
				::PowerDown _g19 = ::PowerDown_obj::__new((int)-100,(int)-100);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(147)
				powerdown = _g19;
				HX_STACK_LINE(148)
				powerdown->z = (int)100;
				HX_STACK_LINE(149)
				this->powerdowns->add(powerdown);
				HX_STACK_LINE(151)
				::CashItem _g20 = ::CashItem_obj::__new((int)-100,(int)-100);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(151)
				cashitem = _g20;
				HX_STACK_LINE(152)
				cashitem->z = (int)100;
				HX_STACK_LINE(153)
				this->cashitems->add(cashitem);
			}
		}
		HX_STACK_LINE(156)
		this->hero->z = (int)50;
		HX_STACK_LINE(157)
		this->add(this->powerups);
		HX_STACK_LINE(158)
		this->add(this->powerdowns);
		HX_STACK_LINE(159)
		this->add(this->cashitems);
		HX_STACK_LINE(160)
		this->add(this->emitter);
		HX_STACK_LINE(161)
		this->add(this->cash);
		HX_STACK_LINE(162)
		this->add(this->level);
		HX_STACK_LINE(163)
		this->add(this->speed);
		HX_STACK_LINE(164)
		this->container->add(this->hero);
		HX_STACK_LINE(165)
		this->add(this->container);
		HX_STACK_LINE(166)
		this->add(this->hitContainer);
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			int Order = (int)-1;		HX_STACK_VAR(Order,"Order");
			HX_STACK_LINE(167)
			Dynamic _g21;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(167)
			{
				HX_STACK_LINE(167)
				Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->sortByZ_dyn()));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(167)
				Array< int > a1 = Array_obj< int >::__new().Add(Order);		HX_STACK_VAR(a1,"a1");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< int >,a1,Dynamic,f)
				int run(::ExtendedSprite a2,::ExtendedSprite a3){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","PlayState.hx",167,0xb30d7781)
					HX_STACK_ARG(a2,"a2")
					HX_STACK_ARG(a3,"a3")
					{
						HX_STACK_LINE(167)
						return f->__GetItem((int)0)(a1->__get((int)0),a2,a3).Cast< int >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC2(return)

				HX_STACK_LINE(167)
				_g21 =  Dynamic(new _Function_3_1(a1,f));
			}
			HX_STACK_LINE(167)
			this->container->members->__Field(HX_CSTRING("sort"),true)(_g21);
		}
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",170,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		this->cash->set_text((HX_CSTRING("Cash: $") + ::Reg_obj::cash));
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			::GameState _g = this->currentState;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(174)
					this->updatePlaying();
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(176)
					this->updateShop();
				}
				;break;
			}
		}
		HX_STACK_LINE(178)
		this->super::update();
	}
return null();
}


Void PlayState_obj::updatePlaying( ){
{
		HX_STACK_FRAME("PlayState","updatePlaying",0x09163b94,"PlayState.updatePlaying","PlayState.hx",181,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		if (((this->hero->shitSpeed < (int)0))){
			HX_STACK_LINE(184)
			hx::AddEq(::Reg_obj::cash,(int)50);
			HX_STACK_LINE(185)
			::EndMenu _g = ::EndMenu_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(185)
			this->endMenu = _g;
			HX_STACK_LINE(186)
			this->emitter->destroy();
			HX_STACK_LINE(187)
			hx::AddEq(::Reg_obj::level,(int)1);
			HX_STACK_LINE(188)
			this->level->set_text((HX_CSTRING("Level: ") + ::Reg_obj::level));
			HX_STACK_LINE(189)
			this->currentState = ::GameState_obj::SHOP;
			HX_STACK_LINE(190)
			this->cloudManager->stopClouds();
		}
		else{
			HX_STACK_LINE(192)
			this->speed->set_text((this->hero->shitSpeed + HX_CSTRING(" MPH")));
			HX_STACK_LINE(194)
			this->emitter->set_x((this->hero->x + (int)22));
			HX_STACK_LINE(195)
			this->emitter->set_y((this->hero->y + (int)54));
		}
		HX_STACK_LINE(198)
		if (((this->pickupBuffer > this->pickupTimer))){
			HX_STACK_LINE(199)
			int _g1 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(199)
			Float _g2 = (Float(_g1) / Float((int)2147483647));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(199)
			if (((_g2 < .25))){
				HX_STACK_LINE(200)
				this->spawnPowerDown();
			}
			else{
				HX_STACK_LINE(201)
				int _g3 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(201)
				Float _g4 = (Float(_g3) / Float((int)2147483647));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(201)
				if (((_g4 < .75))){
					HX_STACK_LINE(202)
					this->spawnPizza();
				}
				else{
					HX_STACK_LINE(205)
					this->spawnCashItem();
				}
			}
			HX_STACK_LINE(207)
			this->pickupBuffer = (int)0;
		}
		else{
			HX_STACK_LINE(209)
			hx::AddEq(this->pickupBuffer,::flixel::FlxG_obj::elapsed);
		}
		HX_STACK_LINE(212)
		this->cloudManager->update();
		HX_STACK_LINE(214)
		::flixel::FlxG_obj::overlap(this->powerups,this->hero,this->hitStuff_dyn(),null());
		HX_STACK_LINE(215)
		::flixel::FlxG_obj::overlap(this->powerdowns,this->hero,this->hitStuff_dyn(),null());
		HX_STACK_LINE(216)
		::flixel::FlxG_obj::overlap(this->cashitems,this->hero,this->hitStuff_dyn(),null());
		HX_STACK_LINE(217)
		::flixel::FlxG_obj::overlap(this->hitContainer,this->hero,this->hitStuff_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,updatePlaying,(void))

Void PlayState_obj::updateShop( ){
{
		HX_STACK_FRAME("PlayState","updateShop",0x91203510,"PlayState.updateShop","PlayState.hx",221,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		this->endMenu->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,updateShop,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(hero,"hero");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(cash,"cash");
	HX_MARK_MEMBER_NAME(powerups,"powerups");
	HX_MARK_MEMBER_NAME(powerdowns,"powerdowns");
	HX_MARK_MEMBER_NAME(cashitems,"cashitems");
	HX_MARK_MEMBER_NAME(pickupBuffer,"pickupBuffer");
	HX_MARK_MEMBER_NAME(pickupTimer,"pickupTimer");
	HX_MARK_MEMBER_NAME(brownPixel,"brownPixel");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_MEMBER_NAME(endMenu,"endMenu");
	HX_MARK_MEMBER_NAME(cloudManager,"cloudManager");
	HX_MARK_MEMBER_NAME(currentState,"currentState");
	HX_MARK_MEMBER_NAME(container,"container");
	HX_MARK_MEMBER_NAME(hitContainer,"hitContainer");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hero,"hero");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(cash,"cash");
	HX_VISIT_MEMBER_NAME(powerups,"powerups");
	HX_VISIT_MEMBER_NAME(powerdowns,"powerdowns");
	HX_VISIT_MEMBER_NAME(cashitems,"cashitems");
	HX_VISIT_MEMBER_NAME(pickupBuffer,"pickupBuffer");
	HX_VISIT_MEMBER_NAME(pickupTimer,"pickupTimer");
	HX_VISIT_MEMBER_NAME(brownPixel,"brownPixel");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
	HX_VISIT_MEMBER_NAME(endMenu,"endMenu");
	HX_VISIT_MEMBER_NAME(cloudManager,"cloudManager");
	HX_VISIT_MEMBER_NAME(currentState,"currentState");
	HX_VISIT_MEMBER_NAME(container,"container");
	HX_VISIT_MEMBER_NAME(hitContainer,"hitContainer");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hero") ) { return hero; }
		if (HX_FIELD_EQ(inName,"cash") ) { return cash; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { return emitter; }
		if (HX_FIELD_EQ(inName,"endMenu") ) { return endMenu; }
		if (HX_FIELD_EQ(inName,"sortByZ") ) { return sortByZ_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"powerups") ) { return powerups; }
		if (HX_FIELD_EQ(inName,"hitStuff") ) { return hitStuff_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cashitems") ) { return cashitems; }
		if (HX_FIELD_EQ(inName,"container") ) { return container; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerdowns") ) { return powerdowns; }
		if (HX_FIELD_EQ(inName,"brownPixel") ) { return brownPixel; }
		if (HX_FIELD_EQ(inName,"spawnPizza") ) { return spawnPizza_dyn(); }
		if (HX_FIELD_EQ(inName,"addToScene") ) { return addToScene_dyn(); }
		if (HX_FIELD_EQ(inName,"updateShop") ) { return updateShop_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pickupTimer") ) { return pickupTimer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pickupBuffer") ) { return pickupBuffer; }
		if (HX_FIELD_EQ(inName,"cloudManager") ) { return cloudManager; }
		if (HX_FIELD_EQ(inName,"currentState") ) { return currentState; }
		if (HX_FIELD_EQ(inName,"hitContainer") ) { return hitContainer; }
		if (HX_FIELD_EQ(inName,"spawnPowerUp") ) { return spawnPowerUp_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"spawnCashItem") ) { return spawnCashItem_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePlaying") ) { return updatePlaying_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"spawnPowerDown") ) { return spawnPowerDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hero") ) { hero=inValue.Cast< ::Hero >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cash") ) { cash=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast< ::flixel::effects::particles::FlxEmitter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endMenu") ) { endMenu=inValue.Cast< ::EndMenu >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"powerups") ) { powerups=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cashitems") ) { cashitems=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerdowns") ) { powerdowns=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"brownPixel") ) { brownPixel=inValue.Cast< ::flixel::effects::particles::FlxParticle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pickupTimer") ) { pickupTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pickupBuffer") ) { pickupBuffer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cloudManager") ) { cloudManager=inValue.Cast< ::CloudManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentState") ) { currentState=inValue.Cast< ::GameState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitContainer") ) { hitContainer=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hero"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("level"));
	outFields->push(HX_CSTRING("cash"));
	outFields->push(HX_CSTRING("powerups"));
	outFields->push(HX_CSTRING("powerdowns"));
	outFields->push(HX_CSTRING("cashitems"));
	outFields->push(HX_CSTRING("pickupBuffer"));
	outFields->push(HX_CSTRING("pickupTimer"));
	outFields->push(HX_CSTRING("brownPixel"));
	outFields->push(HX_CSTRING("emitter"));
	outFields->push(HX_CSTRING("endMenu"));
	outFields->push(HX_CSTRING("cloudManager"));
	outFields->push(HX_CSTRING("currentState"));
	outFields->push(HX_CSTRING("container"));
	outFields->push(HX_CSTRING("hitContainer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Hero*/ ,(int)offsetof(PlayState_obj,hero),HX_CSTRING("hero")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,speed),HX_CSTRING("speed")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,level),HX_CSTRING("level")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,cash),HX_CSTRING("cash")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,powerups),HX_CSTRING("powerups")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,powerdowns),HX_CSTRING("powerdowns")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,cashitems),HX_CSTRING("cashitems")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,pickupBuffer),HX_CSTRING("pickupBuffer")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,pickupTimer),HX_CSTRING("pickupTimer")},
	{hx::fsObject /*::flixel::effects::particles::FlxParticle*/ ,(int)offsetof(PlayState_obj,brownPixel),HX_CSTRING("brownPixel")},
	{hx::fsObject /*::flixel::effects::particles::FlxEmitter*/ ,(int)offsetof(PlayState_obj,emitter),HX_CSTRING("emitter")},
	{hx::fsObject /*::EndMenu*/ ,(int)offsetof(PlayState_obj,endMenu),HX_CSTRING("endMenu")},
	{hx::fsObject /*::CloudManager*/ ,(int)offsetof(PlayState_obj,cloudManager),HX_CSTRING("cloudManager")},
	{hx::fsObject /*::GameState*/ ,(int)offsetof(PlayState_obj,currentState),HX_CSTRING("currentState")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,container),HX_CSTRING("container")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,hitContainer),HX_CSTRING("hitContainer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hero"),
	HX_CSTRING("speed"),
	HX_CSTRING("level"),
	HX_CSTRING("cash"),
	HX_CSTRING("powerups"),
	HX_CSTRING("powerdowns"),
	HX_CSTRING("cashitems"),
	HX_CSTRING("pickupBuffer"),
	HX_CSTRING("pickupTimer"),
	HX_CSTRING("brownPixel"),
	HX_CSTRING("emitter"),
	HX_CSTRING("endMenu"),
	HX_CSTRING("cloudManager"),
	HX_CSTRING("currentState"),
	HX_CSTRING("container"),
	HX_CSTRING("hitContainer"),
	HX_CSTRING("hitStuff"),
	HX_CSTRING("spawnCashItem"),
	HX_CSTRING("spawnPizza"),
	HX_CSTRING("spawnPowerDown"),
	HX_CSTRING("spawnPowerUp"),
	HX_CSTRING("sortByZ"),
	HX_CSTRING("addToScene"),
	HX_CSTRING("create"),
	HX_CSTRING("update"),
	HX_CSTRING("updatePlaying"),
	HX_CSTRING("updateShop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}


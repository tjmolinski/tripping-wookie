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
#ifndef INCLUDED_Hero
#include <Hero.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#include <flixel/interfaces/IFlxParticle.h>
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
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",18,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(27)
	this->pickupTimer = 10.0;
	HX_STACK_LINE(26)
	this->pickupBuffer = 0.0;
	HX_STACK_LINE(18)
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
		HX_STACK_FRAME("PlayState","hitStuff",0x723d7ad2,"PlayState.hitStuff","PlayState.hx",39,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj1,"obj1")
		HX_STACK_ARG(obj2,"obj2")
		HX_STACK_LINE(40)
		obj1->kill();
		HX_STACK_LINE(41)
		::Class _g = ::Type_obj::getClass(obj1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		::String _g1 = ::Type_obj::getClassName(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		if (((_g1 == HX_CSTRING("PowerDown")))){
			HX_STACK_LINE(42)
			this->hero->ateSpoiledFood();
		}
		else{
			HX_STACK_LINE(43)
			::Class _g2 = ::Type_obj::getClass(obj1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(43)
			::String _g3 = ::Type_obj::getClassName(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(43)
			if (((_g3 == HX_CSTRING("PowerUp")))){
				HX_STACK_LINE(44)
				this->hero->ateFood();
			}
			else{
				HX_STACK_LINE(46)
				this->hero->gotCash();
				HX_STACK_LINE(47)
				this->cash->set_text((HX_CSTRING("Cash: $") + ::Reg_obj::cash));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,hitStuff,(void))

Void PlayState_obj::spawnCashItem( ){
{
		HX_STACK_FRAME("PlayState","spawnCashItem",0x6e8d39f0,"PlayState.spawnCashItem","PlayState.hx",51,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		::CashItem pickup;		HX_STACK_VAR(pickup,"pickup");
		HX_STACK_LINE(52)
		pickup = hx::TCast< CashItem >::cast(this->cashitems->recycle(null(),null(),null(),null()));
		HX_STACK_LINE(53)
		pickup->spawn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,spawnCashItem,(void))

Void PlayState_obj::spawnPowerDown( ){
{
		HX_STACK_FRAME("PlayState","spawnPowerDown",0x1308fb3d,"PlayState.spawnPowerDown","PlayState.hx",56,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		::PowerDown pickup;		HX_STACK_VAR(pickup,"pickup");
		HX_STACK_LINE(57)
		pickup = hx::TCast< PowerDown >::cast(this->powerdowns->recycle(null(),null(),null(),null()));
		HX_STACK_LINE(58)
		pickup->spawn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,spawnPowerDown,(void))

Void PlayState_obj::spawnPowerUp( ){
{
		HX_STACK_FRAME("PlayState","spawnPowerUp",0xabb96c76,"PlayState.spawnPowerUp","PlayState.hx",61,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		::PowerUp pickup;		HX_STACK_VAR(pickup,"pickup");
		HX_STACK_LINE(62)
		pickup = hx::TCast< PowerUp >::cast(this->powerups->recycle(null(),null(),null(),null()));
		HX_STACK_LINE(63)
		pickup->spawn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,spawnPowerUp,(void))

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",66,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		this->super::create();
		HX_STACK_LINE(69)
		::flixel::group::FlxTypedGroup _g = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		this->container = _g;
		HX_STACK_LINE(71)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		_g1 = hx::TCast< Int >::cast((Float(::flixel::FlxG_obj::width) / Float((int)2)));
		HX_STACK_LINE(71)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(71)
		_g2 = hx::TCast< Int >::cast((::flixel::FlxG_obj::height - (int)50));
		HX_STACK_LINE(71)
		::Hero _g3 = ::Hero_obj::__new(_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(71)
		this->hero = _g3;
		HX_STACK_LINE(72)
		::flixel::text::FlxText _g4 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,HX_CSTRING("0 MPH"),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(72)
		this->speed = _g4;
		HX_STACK_LINE(73)
		this->speed->setFormat(null(),(int)24,(int)-16777216,HX_CSTRING("left"),null(),null(),null());
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::flixel::text::FlxText _this = this->speed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(74)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(74)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(74)
			_this->set_borderColor((int)-1);
			HX_STACK_LINE(74)
			_this->set_borderSize((int)2);
			HX_STACK_LINE(74)
			_this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(75)
		::flixel::text::FlxTextFormat _g5 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)12);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(75)
		this->speed->addFormat(_g5,null(),null());
		HX_STACK_LINE(76)
		::flixel::text::FlxText _g6 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,(HX_CSTRING("Level: ") + ::Reg_obj::level),null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(76)
		this->level = _g6;
		HX_STACK_LINE(77)
		this->level->setFormat(null(),(int)24,(int)-16777216,HX_CSTRING("right"),null(),null(),null());
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::flixel::text::FlxText _this = this->level;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(78)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(78)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(78)
			_this->set_borderColor((int)-1);
			HX_STACK_LINE(78)
			_this->set_borderSize((int)2);
			HX_STACK_LINE(78)
			_this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(79)
		::flixel::text::FlxTextFormat _g7 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)12);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(79)
		this->level->addFormat(_g7,null(),null());
		HX_STACK_LINE(81)
		::flixel::text::FlxText _g8 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,(HX_CSTRING("Cash: $") + ::Reg_obj::cash),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(81)
		this->cash = _g8;
		HX_STACK_LINE(82)
		this->cash->setFormat(null(),(int)24,(int)-16777216,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::flixel::text::FlxText _this = this->cash;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(83)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(83)
			_this->set_borderStyle((int)2);
			HX_STACK_LINE(83)
			_this->set_borderColor((int)-1);
			HX_STACK_LINE(83)
			_this->set_borderSize((int)2);
			HX_STACK_LINE(83)
			_this->set_borderQuality(Quality);
		}
		HX_STACK_LINE(84)
		::flixel::text::FlxTextFormat _g9 = ::flixel::text::FlxTextFormat_obj::__new((int)0,false,false,(int)16777215,(int)0,(int)12);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(84)
		this->cash->addFormat(_g9,null(),null());
		HX_STACK_LINE(86)
		::flixel::effects::particles::FlxEmitter _g10 = ::flixel::effects::particles::FlxEmitter_obj::__new((this->hero->x + (int)22),(this->hero->y + (int)54),(int)200);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(86)
		this->emitter = _g10;
		HX_STACK_LINE(87)
		this->emitter->setXSpeed((int)-70,(int)70);
		HX_STACK_LINE(88)
		this->emitter->setYSpeed((int)300,(int)400);
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(89)
			int _g12 = ::Std_obj::_int((Float(this->emitter->maxSize) / Float((int)2)));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(89)
			while((true)){
				HX_STACK_LINE(89)
				if ((!(((_g11 < _g12))))){
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(89)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(90)
				::flixel::effects::particles::FlxParticle _g111 = ::flixel::effects::particles::FlxParticle_obj::__new();		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(90)
				this->brownPixel = _g111;
				HX_STACK_LINE(91)
				this->brownPixel->makeGraphic((int)5,(int)3,(int)-6927616,null(),null());
				HX_STACK_LINE(92)
				this->brownPixel->set_visible(false);
				HX_STACK_LINE(93)
				this->emitter->add(this->brownPixel);
				HX_STACK_LINE(94)
				::flixel::effects::particles::FlxParticle _g121 = ::flixel::effects::particles::FlxParticle_obj::__new();		HX_STACK_VAR(_g121,"_g121");
				HX_STACK_LINE(94)
				this->brownPixel = _g121;
				HX_STACK_LINE(95)
				this->brownPixel->makeGraphic((int)8,(int)5,(int)-6927616,null(),null());
				HX_STACK_LINE(96)
				this->brownPixel->set_visible(false);
				HX_STACK_LINE(97)
				this->emitter->add(this->brownPixel);
			}
		}
		HX_STACK_LINE(99)
		this->emitter->start(false,(int)3,.01,null(),null());
		HX_STACK_LINE(101)
		::CloudManager _g13 = ::CloudManager_obj::__new();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(101)
		this->cloudManager = _g13;
		HX_STACK_LINE(103)
		this->cloudManager->enabled = true;
		HX_STACK_LINE(106)
		int numPickups = (int)2;		HX_STACK_VAR(numPickups,"numPickups");
		HX_STACK_LINE(107)
		::flixel::group::FlxGroup _g14 = ::flixel::group::FlxGroup_obj::__new(numPickups);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(107)
		this->powerups = _g14;
		HX_STACK_LINE(108)
		::flixel::group::FlxGroup _g15 = ::flixel::group::FlxGroup_obj::__new(numPickups);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(108)
		this->powerdowns = _g15;
		HX_STACK_LINE(109)
		::flixel::group::FlxGroup _g16 = ::flixel::group::FlxGroup_obj::__new(numPickups);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(109)
		this->cashitems = _g16;
		HX_STACK_LINE(110)
		::PowerUp powerup;		HX_STACK_VAR(powerup,"powerup");
		HX_STACK_LINE(111)
		::PowerDown powerdown;		HX_STACK_VAR(powerdown,"powerdown");
		HX_STACK_LINE(112)
		::CashItem cashitem;		HX_STACK_VAR(cashitem,"cashitem");
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(113)
			while((true)){
				HX_STACK_LINE(113)
				if ((!(((_g11 < numPickups))))){
					HX_STACK_LINE(113)
					break;
				}
				HX_STACK_LINE(113)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(114)
				::PowerUp _g17 = ::PowerUp_obj::__new((int)-100,(int)-100);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(114)
				powerup = _g17;
				HX_STACK_LINE(115)
				powerup->z = (int)100;
				HX_STACK_LINE(116)
				this->powerups->add(powerup);
				HX_STACK_LINE(118)
				::PowerDown _g18 = ::PowerDown_obj::__new((int)-100,(int)-100);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(118)
				powerdown = _g18;
				HX_STACK_LINE(119)
				powerdown->z = (int)100;
				HX_STACK_LINE(120)
				this->powerdowns->add(powerdown);
				HX_STACK_LINE(122)
				::CashItem _g19 = ::CashItem_obj::__new((int)-100,(int)-100);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(122)
				cashitem = _g19;
				HX_STACK_LINE(123)
				cashitem->z = (int)100;
				HX_STACK_LINE(124)
				this->cashitems->add(cashitem);
			}
		}
		HX_STACK_LINE(127)
		this->hero->z = (int)50;
		HX_STACK_LINE(128)
		this->add(this->powerups);
		HX_STACK_LINE(129)
		this->add(this->powerdowns);
		HX_STACK_LINE(130)
		this->add(this->cashitems);
		HX_STACK_LINE(131)
		this->add(this->emitter);
		HX_STACK_LINE(132)
		this->add(this->cash);
		HX_STACK_LINE(133)
		this->add(this->level);
		HX_STACK_LINE(134)
		this->add(this->speed);
		HX_STACK_LINE(135)
		this->container->add(this->hero);
		HX_STACK_LINE(136)
		this->add(this->container);
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int Order = (int)-1;		HX_STACK_VAR(Order,"Order");
			HX_STACK_LINE(137)
			Dynamic _g20;		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->sortByZ_dyn()));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(137)
				Array< int > a1 = Array_obj< int >::__new().Add(Order);		HX_STACK_VAR(a1,"a1");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< int >,a1,Dynamic,f)
				int run(::ExtendedSprite a2,::ExtendedSprite a3){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","PlayState.hx",137,0xb30d7781)
					HX_STACK_ARG(a2,"a2")
					HX_STACK_ARG(a3,"a3")
					{
						HX_STACK_LINE(137)
						return f->__GetItem((int)0)(a1->__get((int)0),a2,a3).Cast< int >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC2(return)

				HX_STACK_LINE(137)
				_g20 =  Dynamic(new _Function_3_1(a1,f));
			}
			HX_STACK_LINE(137)
			this->container->members->__Field(HX_CSTRING("sort"),true)(_g20);
		}
	}
return null();
}


int PlayState_obj::sortByZ( int order,::ExtendedSprite sprite1,::ExtendedSprite sprite2){
	HX_STACK_FRAME("PlayState","sortByZ",0x4a8fefd4,"PlayState.sortByZ","PlayState.hx",141,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_ARG(order,"order")
	HX_STACK_ARG(sprite1,"sprite1")
	HX_STACK_ARG(sprite2,"sprite2")
	HX_STACK_LINE(141)
	Float Value1 = sprite1->z;		HX_STACK_VAR(Value1,"Value1");
	HX_STACK_LINE(141)
	Float Value2 = sprite2->z;		HX_STACK_VAR(Value2,"Value2");
	HX_STACK_LINE(141)
	int result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(141)
	if (((Value1 < Value2))){
		HX_STACK_LINE(141)
		result = order;
	}
	else{
		HX_STACK_LINE(141)
		if (((Value1 > Value2))){
			HX_STACK_LINE(141)
			result = -(order);
		}
	}
	HX_STACK_LINE(141)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC3(PlayState_obj,sortByZ,return )

Void PlayState_obj::addToScene( ::ExtendedSprite object){
{
		HX_STACK_FRAME("PlayState","addToScene",0x38f8c721,"PlayState.addToScene","PlayState.hx",144,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(145)
		this->container->add(object);
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			int Order = (int)-1;		HX_STACK_VAR(Order,"Order");
			HX_STACK_LINE(146)
			Dynamic _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->sortByZ_dyn()));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(146)
				Array< int > a1 = Array_obj< int >::__new().Add(Order);		HX_STACK_VAR(a1,"a1");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< int >,a1,Dynamic,f)
				int run(::ExtendedSprite a2,::ExtendedSprite a3){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","PlayState.hx",146,0xb30d7781)
					HX_STACK_ARG(a2,"a2")
					HX_STACK_ARG(a3,"a3")
					{
						HX_STACK_LINE(146)
						return f->__GetItem((int)0)(a1->__get((int)0),a2,a3).Cast< int >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC2(return)

				HX_STACK_LINE(146)
				_g =  Dynamic(new _Function_3_1(a1,f));
			}
			HX_STACK_LINE(146)
			this->container->members->__Field(HX_CSTRING("sort"),true)(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,addToScene,(void))

Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",150,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",153,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		if (((this->endMenu == null()))){
			HX_STACK_LINE(155)
			if (((this->hero->shitSpeed < (int)0))){
				HX_STACK_LINE(157)
				::EndMenu _g = ::EndMenu_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(157)
				this->endMenu = _g;
				HX_STACK_LINE(158)
				this->emitter->destroy();
				HX_STACK_LINE(159)
				hx::AddEq(::Reg_obj::level,(int)1);
				HX_STACK_LINE(160)
				this->level->set_text((HX_CSTRING("Level: ") + ::Reg_obj::level));
			}
			else{
				HX_STACK_LINE(162)
				this->speed->set_text((this->hero->shitSpeed + HX_CSTRING(" MPH")));
				HX_STACK_LINE(164)
				this->emitter->set_x((this->hero->x + (int)22));
				HX_STACK_LINE(165)
				this->emitter->set_y((this->hero->y + (int)54));
			}
			HX_STACK_LINE(168)
			if (((this->pickupBuffer > this->pickupTimer))){
				HX_STACK_LINE(169)
				int _g1 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(169)
				Float _g2 = (Float(_g1) / Float((int)2147483647));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(169)
				if (((_g2 < .25))){
					HX_STACK_LINE(170)
					this->spawnPowerDown();
				}
				else{
					HX_STACK_LINE(171)
					int _g3 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(171)
					Float _g4 = (Float(_g3) / Float((int)2147483647));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(171)
					if (((_g4 < .75))){
						HX_STACK_LINE(172)
						this->spawnPowerUp();
					}
					else{
						HX_STACK_LINE(174)
						this->spawnCashItem();
					}
				}
				HX_STACK_LINE(176)
				this->pickupBuffer = (int)0;
			}
			else{
				HX_STACK_LINE(178)
				hx::AddEq(this->pickupBuffer,::flixel::FlxG_obj::elapsed);
			}
			HX_STACK_LINE(181)
			this->cloudManager->update();
			HX_STACK_LINE(183)
			::flixel::FlxG_obj::overlap(this->powerups,this->hero,this->hitStuff_dyn(),null());
			HX_STACK_LINE(184)
			::flixel::FlxG_obj::overlap(this->powerdowns,this->hero,this->hitStuff_dyn(),null());
			HX_STACK_LINE(185)
			::flixel::FlxG_obj::overlap(this->cashitems,this->hero,this->hitStuff_dyn(),null());
		}
		else{
			HX_STACK_LINE(187)
			this->endMenu->update();
		}
		HX_STACK_LINE(190)
		this->super::update();
	}
return null();
}



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
	HX_MARK_MEMBER_NAME(container,"container");
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
	HX_VISIT_MEMBER_NAME(container,"container");
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
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
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
		if (HX_FIELD_EQ(inName,"addToScene") ) { return addToScene_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pickupTimer") ) { return pickupTimer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pickupBuffer") ) { return pickupBuffer; }
		if (HX_FIELD_EQ(inName,"cloudManager") ) { return cloudManager; }
		if (HX_FIELD_EQ(inName,"spawnPowerUp") ) { return spawnPowerUp_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"spawnCashItem") ) { return spawnCashItem_dyn(); }
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
	outFields->push(HX_CSTRING("container"));
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
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,container),HX_CSTRING("container")},
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
	HX_CSTRING("container"),
	HX_CSTRING("hitStuff"),
	HX_CSTRING("spawnCashItem"),
	HX_CSTRING("spawnPowerDown"),
	HX_CSTRING("spawnPowerUp"),
	HX_CSTRING("create"),
	HX_CSTRING("sortByZ"),
	HX_CSTRING("addToScene"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
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


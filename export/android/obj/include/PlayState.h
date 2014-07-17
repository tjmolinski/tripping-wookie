#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(CloudManager)
HX_DECLARE_CLASS0(EndMenu)
HX_DECLARE_CLASS0(ExtendedSprite)
HX_DECLARE_CLASS0(Hero)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxEmitter)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxParticle)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxParticle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::Hero hero;
		::flixel::text::FlxText speed;
		::flixel::text::FlxText level;
		::flixel::text::FlxText cash;
		::flixel::group::FlxGroup powerups;
		::flixel::group::FlxGroup powerdowns;
		::flixel::group::FlxGroup cashitems;
		Float pickupBuffer;
		Float pickupTimer;
		::flixel::effects::particles::FlxParticle brownPixel;
		::flixel::effects::particles::FlxEmitter emitter;
		::EndMenu endMenu;
		::CloudManager cloudManager;
		::flixel::group::FlxTypedGroup container;
		virtual Void hitStuff( ::flixel::FlxObject obj1,::flixel::FlxObject obj2);
		Dynamic hitStuff_dyn();

		virtual Void spawnCashItem( );
		Dynamic spawnCashItem_dyn();

		virtual Void spawnPowerDown( );
		Dynamic spawnPowerDown_dyn();

		virtual Void spawnPowerUp( );
		Dynamic spawnPowerUp_dyn();

		virtual Void create( );

		virtual int sortByZ( int order,::ExtendedSprite sprite1,::ExtendedSprite sprite2);
		Dynamic sortByZ_dyn();

		virtual Void addToScene( ::ExtendedSprite object);
		Dynamic addToScene_dyn();

		virtual Void destroy( );

		virtual Void update( );

};


#endif /* INCLUDED_PlayState */ 

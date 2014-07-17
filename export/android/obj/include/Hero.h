#ifndef INCLUDED_Hero
#define INCLUDED_Hero

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <ExtendedSprite.h>
HX_DECLARE_CLASS0(ExtendedSprite)
HX_DECLARE_CLASS0(Hero)
HX_DECLARE_CLASS0(Vector2)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)


class HXCPP_CLASS_ATTRIBUTES  Hero_obj : public ::ExtendedSprite_obj{
	public:
		typedef ::ExtendedSprite_obj super;
		typedef Hero_obj OBJ_;
		Hero_obj();
		Void __construct(int newX,int newY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Hero_obj > __new(int newX,int newY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hero_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Hero"); }

		int shitSpeed;
		bool shitting;
		::Vector2 vel;
		Float TILT_SPEED;
		Float FRICTION;
		int SHIT_SPEED_DECAY;
		int STOMACH_INTERVAL;
		bool floating;
		int FLOAT_SPEED;
		Float shitDecayBuffer;
		Float shitDecayTimer;
		Float shitEatBuffer;
		Float shitEatTimer;
		int metabolism;
		int sphincterStrength;
		int stomachSize;
		int food;
		int cash;
		::flixel::text::FlxText timer;
		bool startedEating;
		virtual Void update( );

		virtual Void ateSpoiledFood( );
		Dynamic ateSpoiledFood_dyn();

		virtual Void ateFood( );
		Dynamic ateFood_dyn();

		virtual Void gotCash( );
		Dynamic gotCash_dyn();

};


#endif /* INCLUDED_Hero */ 

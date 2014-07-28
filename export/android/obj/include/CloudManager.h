#ifndef INCLUDED_CloudManager
#define INCLUDED_CloudManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Cloud)
HX_DECLARE_CLASS0(CloudManager)
HX_DECLARE_CLASS0(CloudState)
HX_DECLARE_CLASS0(ExtendedSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  CloudManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CloudManager_obj OBJ_;
		CloudManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CloudManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CloudManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CloudManager"); }

		Float idleBuffer;
		Float idleTime;
		Float spawnBuffer;
		Float spawnTime;
		::flixel::group::FlxTypedGroup pool;
		::CloudState currentState;
		bool enabled;
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void updateIdle( );
		Dynamic updateIdle_dyn();

		virtual Void updateMoving( );
		Dynamic updateMoving_dyn();

		virtual Void updateStopped( );
		Dynamic updateStopped_dyn();

		virtual Void stopClouds( );
		Dynamic stopClouds_dyn();

		virtual Void stopCloud( ::Cloud cloud);
		Dynamic stopCloud_dyn();

};


#endif /* INCLUDED_CloudManager */ 

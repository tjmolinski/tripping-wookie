#ifndef INCLUDED_CloudManager
#define INCLUDED_CloudManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CloudManager)


class HXCPP_CLASS_ATTRIBUTES  CloudManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CloudManager_obj OBJ_;
		CloudManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CloudManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CloudManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CloudManager"); }

		Float spawnBuffer;
		Float spawnTime;
		bool enabled;
		virtual Void update( );
		Dynamic update_dyn();

};


#endif /* INCLUDED_CloudManager */ 

#ifndef INCLUDED_Vector2
#define INCLUDED_Vector2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Vector2)


class HXCPP_CLASS_ATTRIBUTES  Vector2_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector2_obj OBJ_;
		Vector2_obj();
		Void __construct(Float newX,Float newY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vector2_obj > __new(Float newX,Float newY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Vector2"); }

		Float x;
		Float y;
};


#endif /* INCLUDED_Vector2 */ 

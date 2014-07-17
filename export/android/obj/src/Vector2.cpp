#include <hxcpp.h>

#ifndef INCLUDED_Vector2
#include <Vector2.h>
#endif

Void Vector2_obj::__construct(Float newX,Float newY)
{
HX_STACK_FRAME("Vector2","new",0x2b92e661,"Vector2.new","Vector2.hx",7,0xeef9c02f)
HX_STACK_THIS(this)
HX_STACK_ARG(newX,"newX")
HX_STACK_ARG(newY,"newY")
{
	HX_STACK_LINE(8)
	this->x = newX;
	HX_STACK_LINE(9)
	this->y = newY;
}
;
	return null();
}

//Vector2_obj::~Vector2_obj() { }

Dynamic Vector2_obj::__CreateEmpty() { return  new Vector2_obj; }
hx::ObjectPtr< Vector2_obj > Vector2_obj::__new(Float newX,Float newY)
{  hx::ObjectPtr< Vector2_obj > result = new Vector2_obj();
	result->__construct(newX,newY);
	return result;}

Dynamic Vector2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector2_obj > result = new Vector2_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Vector2_obj::Vector2_obj()
{
}

Dynamic Vector2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector2_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Vector2_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector2_obj::__mClass,"__mClass");
};

#endif

Class Vector2_obj::__mClass;

void Vector2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Vector2"), hx::TCanCast< Vector2_obj> ,sStaticFields,sMemberFields,
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

void Vector2_obj::__boot()
{
}


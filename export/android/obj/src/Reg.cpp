#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif

Void Reg_obj::__construct()
{
	return null();
}

//Reg_obj::~Reg_obj() { }

Dynamic Reg_obj::__CreateEmpty() { return  new Reg_obj; }
hx::ObjectPtr< Reg_obj > Reg_obj::__new()
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

Dynamic Reg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

int Reg_obj::metabolism;

int Reg_obj::sphincterStrength;

int Reg_obj::stomachSize;

int Reg_obj::food;

int Reg_obj::cash;

Dynamic Reg_obj::levels;

int Reg_obj::level;

Dynamic Reg_obj::scores;

int Reg_obj::score;

Array< ::Dynamic > Reg_obj::saves;


Reg_obj::Reg_obj()
{
}

Dynamic Reg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"food") ) { return food; }
		if (HX_FIELD_EQ(inName,"cash") ) { return cash; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"saves") ) { return saves; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"levels") ) { return levels; }
		if (HX_FIELD_EQ(inName,"scores") ) { return scores; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"metabolism") ) { return metabolism; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stomachSize") ) { return stomachSize; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sphincterStrength") ) { return sphincterStrength; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"food") ) { food=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cash") ) { cash=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"saves") ) { saves=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"levels") ) { levels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scores") ) { scores=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"metabolism") ) { metabolism=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stomachSize") ) { stomachSize=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sphincterStrength") ) { sphincterStrength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reg_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("metabolism"),
	HX_CSTRING("sphincterStrength"),
	HX_CSTRING("stomachSize"),
	HX_CSTRING("food"),
	HX_CSTRING("cash"),
	HX_CSTRING("levels"),
	HX_CSTRING("level"),
	HX_CSTRING("scores"),
	HX_CSTRING("score"),
	HX_CSTRING("saves"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Reg_obj::metabolism,"metabolism");
	HX_MARK_MEMBER_NAME(Reg_obj::sphincterStrength,"sphincterStrength");
	HX_MARK_MEMBER_NAME(Reg_obj::stomachSize,"stomachSize");
	HX_MARK_MEMBER_NAME(Reg_obj::food,"food");
	HX_MARK_MEMBER_NAME(Reg_obj::cash,"cash");
	HX_MARK_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_MARK_MEMBER_NAME(Reg_obj::level,"level");
	HX_MARK_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_MARK_MEMBER_NAME(Reg_obj::score,"score");
	HX_MARK_MEMBER_NAME(Reg_obj::saves,"saves");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Reg_obj::metabolism,"metabolism");
	HX_VISIT_MEMBER_NAME(Reg_obj::sphincterStrength,"sphincterStrength");
	HX_VISIT_MEMBER_NAME(Reg_obj::stomachSize,"stomachSize");
	HX_VISIT_MEMBER_NAME(Reg_obj::food,"food");
	HX_VISIT_MEMBER_NAME(Reg_obj::cash,"cash");
	HX_VISIT_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_VISIT_MEMBER_NAME(Reg_obj::level,"level");
	HX_VISIT_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_VISIT_MEMBER_NAME(Reg_obj::score,"score");
	HX_VISIT_MEMBER_NAME(Reg_obj::saves,"saves");
};

#endif

Class Reg_obj::__mClass;

void Reg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Reg"), hx::TCanCast< Reg_obj> ,sStaticFields,sMemberFields,
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

void Reg_obj::__boot()
{
	metabolism= (int)1;
	sphincterStrength= (int)1;
	stomachSize= (int)1;
	food= (int)1;
	cash= (int)0;
	levels= Dynamic( Array_obj<Dynamic>::__new());
	level= (int)0;
	scores= Dynamic( Array_obj<Dynamic>::__new());
	score= (int)0;
	saves= Array_obj< ::Dynamic >::__new();
}


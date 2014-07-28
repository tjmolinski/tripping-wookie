#include <hxcpp.h>

#ifndef INCLUDED_CloudState
#include <CloudState.h>
#endif

::CloudState CloudState_obj::IDLE;

::CloudState CloudState_obj::MOVING;

::CloudState CloudState_obj::STOPPED;

HX_DEFINE_CREATE_ENUM(CloudState_obj)

int CloudState_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("IDLE")) return 0;
	if (inName==HX_CSTRING("MOVING")) return 1;
	if (inName==HX_CSTRING("STOPPED")) return 2;
	return super::__FindIndex(inName);
}

int CloudState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("IDLE")) return 0;
	if (inName==HX_CSTRING("MOVING")) return 0;
	if (inName==HX_CSTRING("STOPPED")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CloudState_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("IDLE")) return IDLE;
	if (inName==HX_CSTRING("MOVING")) return MOVING;
	if (inName==HX_CSTRING("STOPPED")) return STOPPED;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("IDLE"),
	HX_CSTRING("MOVING"),
	HX_CSTRING("STOPPED"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CloudState_obj::IDLE,"IDLE");
	HX_MARK_MEMBER_NAME(CloudState_obj::MOVING,"MOVING");
	HX_MARK_MEMBER_NAME(CloudState_obj::STOPPED,"STOPPED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CloudState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CloudState_obj::IDLE,"IDLE");
	HX_VISIT_MEMBER_NAME(CloudState_obj::MOVING,"MOVING");
	HX_VISIT_MEMBER_NAME(CloudState_obj::STOPPED,"STOPPED");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class CloudState_obj::__mClass;

Dynamic __Create_CloudState_obj() { return new CloudState_obj; }

void CloudState_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CloudState"), hx::TCanCast< CloudState_obj >,sStaticFields,sMemberFields,
	&__Create_CloudState_obj, &__Create,
	&super::__SGetClass(), &CreateCloudState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CloudState_obj::__boot()
{
hx::Static(IDLE) = hx::CreateEnum< CloudState_obj >(HX_CSTRING("IDLE"),0);
hx::Static(MOVING) = hx::CreateEnum< CloudState_obj >(HX_CSTRING("MOVING"),1);
hx::Static(STOPPED) = hx::CreateEnum< CloudState_obj >(HX_CSTRING("STOPPED"),2);
}



#include <hxcpp.h>

#ifndef INCLUDED_PlayerState
#include <PlayerState.h>
#endif

::PlayerState PlayerState_obj::EATING;

::PlayerState PlayerState_obj::FINISHED;

::PlayerState PlayerState_obj::IDLE;

::PlayerState PlayerState_obj::SHITTING;

HX_DEFINE_CREATE_ENUM(PlayerState_obj)

int PlayerState_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("EATING")) return 1;
	if (inName==HX_CSTRING("FINISHED")) return 3;
	if (inName==HX_CSTRING("IDLE")) return 0;
	if (inName==HX_CSTRING("SHITTING")) return 2;
	return super::__FindIndex(inName);
}

int PlayerState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("EATING")) return 0;
	if (inName==HX_CSTRING("FINISHED")) return 0;
	if (inName==HX_CSTRING("IDLE")) return 0;
	if (inName==HX_CSTRING("SHITTING")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic PlayerState_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("EATING")) return EATING;
	if (inName==HX_CSTRING("FINISHED")) return FINISHED;
	if (inName==HX_CSTRING("IDLE")) return IDLE;
	if (inName==HX_CSTRING("SHITTING")) return SHITTING;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("IDLE"),
	HX_CSTRING("EATING"),
	HX_CSTRING("SHITTING"),
	HX_CSTRING("FINISHED"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerState_obj::EATING,"EATING");
	HX_MARK_MEMBER_NAME(PlayerState_obj::FINISHED,"FINISHED");
	HX_MARK_MEMBER_NAME(PlayerState_obj::IDLE,"IDLE");
	HX_MARK_MEMBER_NAME(PlayerState_obj::SHITTING,"SHITTING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayerState_obj::EATING,"EATING");
	HX_VISIT_MEMBER_NAME(PlayerState_obj::FINISHED,"FINISHED");
	HX_VISIT_MEMBER_NAME(PlayerState_obj::IDLE,"IDLE");
	HX_VISIT_MEMBER_NAME(PlayerState_obj::SHITTING,"SHITTING");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class PlayerState_obj::__mClass;

Dynamic __Create_PlayerState_obj() { return new PlayerState_obj; }

void PlayerState_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayerState"), hx::TCanCast< PlayerState_obj >,sStaticFields,sMemberFields,
	&__Create_PlayerState_obj, &__Create,
	&super::__SGetClass(), &CreatePlayerState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void PlayerState_obj::__boot()
{
hx::Static(EATING) = hx::CreateEnum< PlayerState_obj >(HX_CSTRING("EATING"),1);
hx::Static(FINISHED) = hx::CreateEnum< PlayerState_obj >(HX_CSTRING("FINISHED"),3);
hx::Static(IDLE) = hx::CreateEnum< PlayerState_obj >(HX_CSTRING("IDLE"),0);
hx::Static(SHITTING) = hx::CreateEnum< PlayerState_obj >(HX_CSTRING("SHITTING"),2);
}



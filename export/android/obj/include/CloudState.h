#ifndef INCLUDED_CloudState
#define INCLUDED_CloudState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CloudState)


class CloudState_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CloudState_obj OBJ_;

	public:
		CloudState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("CloudState"); }
		::String __ToString() const { return HX_CSTRING("CloudState.") + tag; }

		static ::CloudState IDLE;
		static inline ::CloudState IDLE_dyn() { return IDLE; }
		static ::CloudState MOVING;
		static inline ::CloudState MOVING_dyn() { return MOVING; }
		static ::CloudState STOPPED;
		static inline ::CloudState STOPPED_dyn() { return STOPPED; }
};


#endif /* INCLUDED_CloudState */ 

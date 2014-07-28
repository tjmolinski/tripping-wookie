#ifndef INCLUDED_PlayerState
#define INCLUDED_PlayerState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(PlayerState)


class PlayerState_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef PlayerState_obj OBJ_;

	public:
		PlayerState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("PlayerState"); }
		::String __ToString() const { return HX_CSTRING("PlayerState.") + tag; }

		static ::PlayerState EATING;
		static inline ::PlayerState EATING_dyn() { return EATING; }
		static ::PlayerState FINISHED;
		static inline ::PlayerState FINISHED_dyn() { return FINISHED; }
		static ::PlayerState IDLE;
		static inline ::PlayerState IDLE_dyn() { return IDLE; }
		static ::PlayerState SHITTING;
		static inline ::PlayerState SHITTING_dyn() { return SHITTING; }
};


#endif /* INCLUDED_PlayerState */ 

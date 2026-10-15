#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beHitLandDelivInfoRam_vtable[];
extern char beBaseInfoRam_vtable[];
}
struct UnknownGenRoot802D5CBC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D5CBC(){fn_8006665C(this);}
};
struct UnknownGenObject802D5CBC_0 : UnknownGenRoot802D5CBC {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802D5CBC_0(){unknown00=beBaseInfoRam_vtable;}
};
struct UnknownGenObject802D5CBC : UnknownGenObject802D5CBC_0 {
 UnknownGenRefMember unknown2C;
 char unknown30[64];
 inline ~UnknownGenObject802D5CBC(){unknown00=beHitLandDelivInfoRam_vtable;}
};
extern "C" {
void *beHitLandDelivInfoRam_vtableRead(){
 UnknownGenObject802D5CBC object;
 object.unknown00=beBaseInfoRam_vtable;
 object.unknown28.value=0;
 object.unknown00=beHitLandDelivInfoRam_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

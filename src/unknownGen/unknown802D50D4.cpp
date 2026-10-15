#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igTraversal_vtable[];
extern char igIntersectTraversal_vtable[];
extern char beHitLandModelTraversal_vtable[];
}
struct UnknownGenRoot802D50D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D50D4(){fn_8006665C(this);}
};
struct UnknownGenObject802D50D4_0 : UnknownGenRoot802D50D4 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802D50D4_0(){unknown00=igTraversal_vtable;}
};
struct UnknownGenObject802D50D4_1 : UnknownGenObject802D50D4_0 {
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[8];
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 inline ~UnknownGenObject802D50D4_1(){unknown00=igIntersectTraversal_vtable;}
};
struct UnknownGenObject802D50D4 : UnknownGenObject802D50D4_1 {
 char unknown3C[4];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject802D50D4(){unknown00=beHitLandModelTraversal_vtable;}
};
extern "C" {
void *beHitLandModelTraversal_vtableRead(){
 UnknownGenObject802D50D4 object;
 object.unknown00=igTraversal_vtable;
 object.unknown1C.value=0;
 object.unknown00=igIntersectTraversal_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 object.unknown00=beHitLandModelTraversal_vtable;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

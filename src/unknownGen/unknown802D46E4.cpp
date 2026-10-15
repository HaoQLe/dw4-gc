#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char beHitLandModelInfo_vtable[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802D46E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D46E4(){fn_8006665C(this);}
};
struct UnknownGenObject802D46E4_0 : UnknownGenRoot802D46E4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D46E4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802D46E4_1 : UnknownGenObject802D46E4_0 {
 inline ~UnknownGenObject802D46E4_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject802D46E4_2 : UnknownGenObject802D46E4_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802D46E4_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802D46E4 : UnknownGenObject802D46E4_2 {
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject802D46E4(){unknown00=beHitLandModelInfo_vtable;}
};
extern "C" {
void *beHitLandModelInfo_vtableRead(){
 UnknownGenObject802D46E4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=beHitLandModelInfo_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

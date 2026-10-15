#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char beFontInfo_vtable[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802D8A28 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D8A28(){fn_8006665C(this);}
};
struct UnknownGenObject802D8A28_0 : UnknownGenRoot802D8A28 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D8A28_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802D8A28_1 : UnknownGenObject802D8A28_0 {
 inline ~UnknownGenObject802D8A28_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject802D8A28_2 : UnknownGenObject802D8A28_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802D8A28_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802D8A28 : UnknownGenObject802D8A28_2 {
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject802D8A28(){unknown00=beFontInfo_vtable;}
};
extern "C" {
void *beFontInfo_vtableRead(){
 UnknownGenObject802D8A28 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=beFontInfo_vtable;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

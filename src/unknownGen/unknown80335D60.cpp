#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char lbl_804DCD14[];
extern char beNDMWSaveCtrlInfo_vtable[];
}
struct UnknownGenRoot80335D60 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80335D60(){fn_8006665C(this);}
};
struct UnknownGenObject80335D60_0 : UnknownGenRoot80335D60 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80335D60_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80335D60_1 : UnknownGenObject80335D60_0 {
 inline ~UnknownGenObject80335D60_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject80335D60_2 : UnknownGenObject80335D60_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject80335D60_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject80335D60 : UnknownGenObject80335D60_2 {
 char unknown1C[12];
 inline ~UnknownGenObject80335D60(){unknown00=beNDMWSaveCtrlInfo_vtable;}
};
extern "C" {
void *beNDMWSaveCtrlInfo_vtableRead(){
 UnknownGenObject80335D60 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=beNDMWSaveCtrlInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

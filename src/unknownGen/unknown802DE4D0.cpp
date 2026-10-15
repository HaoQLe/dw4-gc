#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char beDBManager_vtable[];
}
struct UnknownGenRoot802DE4D0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DE4D0(){fn_8006665C(this);}
};
struct UnknownGenObject802DE4D0_0 : UnknownGenRoot802DE4D0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DE4D0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DE4D0_1 : UnknownGenObject802DE4D0_0 {
 inline ~UnknownGenObject802DE4D0_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802DE4D0_2 : UnknownGenObject802DE4D0_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802DE4D0_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802DE4D0 : UnknownGenObject802DE4D0_2 {
 char unknown1C[4];
 inline ~UnknownGenObject802DE4D0(){unknown00=beDBManager_vtable;}
};
extern "C" {
void *beDBManager_vtableRead(){
 UnknownGenObject802DE4D0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=beDBManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char beAction2_vtable[];
extern char lbl_804DD724[];
}
struct UnknownGenRoot802E7328 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E7328(){fn_8006665C(this);}
};
struct UnknownGenObject802E7328_0 : UnknownGenRoot802E7328 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E7328_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E7328_1 : UnknownGenObject802E7328_0 {
 inline ~UnknownGenObject802E7328_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802E7328_2 : UnknownGenObject802E7328_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802E7328_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802E7328 : UnknownGenObject802E7328_2 {
 char unknown1C[4];
 inline ~UnknownGenObject802E7328(){unknown00=beAction2_vtable;}
};
extern "C" {
void *beAction2_vtableRead(){
 UnknownGenObject802E7328 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=beAction2_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

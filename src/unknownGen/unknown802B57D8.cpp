#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char beTimer_vtable[];
}
struct UnknownGenRoot802B57D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B57D8(){igObject_construct(this);}
};
struct UnknownGenObject802B57D8_0 : UnknownGenRoot802B57D8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B57D8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802B57D8_1 : UnknownGenObject802B57D8_0 {
 inline ~UnknownGenObject802B57D8_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802B57D8 : UnknownGenObject802B57D8_1 {
 char unknown0C[16];
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject802B57D8(){unknown00=beTimer_vtable;}
};
extern "C" {
void *beTimer_vtableRead(){
 UnknownGenObject802B57D8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=beTimer_vtable;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

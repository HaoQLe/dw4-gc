#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char beTargetObj_vtable[];
}
struct UnknownGenRoot802B70A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B70A0(){igObject_construct(this);}
};
struct UnknownGenObject802B70A0_0 : UnknownGenRoot802B70A0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B70A0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802B70A0_1 : UnknownGenObject802B70A0_0 {
 inline ~UnknownGenObject802B70A0_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802B70A0 : UnknownGenObject802B70A0_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject802B70A0(){unknown00=beTargetObj_vtable;}
};
extern "C" {
void *beTargetObj_vtableRead(){
 UnknownGenObject802B70A0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=beTargetObj_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

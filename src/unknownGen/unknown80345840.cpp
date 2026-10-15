#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804CBA60[];
extern char beNDMWAfsSetup_vtable[];
}
struct UnknownGenRoot80345840 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80345840(){igObject_construct(this);}
};
struct UnknownGenObject80345840_0 : UnknownGenRoot80345840 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80345840_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject80345840_1 : UnknownGenObject80345840_0 {
 inline ~UnknownGenObject80345840_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject80345840 : UnknownGenObject80345840_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject80345840(){unknown00=beNDMWAfsSetup_vtable;}
};
extern "C" {
void *beNDMWAfsSetup_vtableRead(){
 UnknownGenObject80345840 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=beNDMWAfsSetup_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

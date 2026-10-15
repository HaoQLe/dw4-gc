#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char beBkColorInfo_vtable[];
extern char lbl_804DCD14[];
}
struct UnknownGenRoot802E29A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E29A8(){igObject_construct(this);}
};
struct UnknownGenObject802E29A8_0 : UnknownGenRoot802E29A8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E29A8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802E29A8_1 : UnknownGenObject802E29A8_0 {
 inline ~UnknownGenObject802E29A8_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject802E29A8_2 : UnknownGenObject802E29A8_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802E29A8_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject802E29A8 : UnknownGenObject802E29A8_2 {
 char unknown1C[28];
 inline ~UnknownGenObject802E29A8(){unknown00=beBkColorInfo_vtable;}
};
extern "C" {
void *beBkColorInfo_vtableRead(){
 UnknownGenObject802E29A8 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=beBkColorInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

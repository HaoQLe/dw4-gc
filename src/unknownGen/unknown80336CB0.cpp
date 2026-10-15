#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char beNDMWPanelWazaInfoWork_vtable[];
}
struct UnknownGenRoot80336CB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80336CB0(){fn_8006665C(this);}
};
struct UnknownGenObject80336CB0 : UnknownGenRoot80336CB0 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 UnknownGenString unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80336CB0(){unknown00=beNDMWPanelWazaInfoWork_vtable;}
};
extern "C" {
void *beNDMWPanelWazaInfoWork_vtableRead(){
 UnknownGenObject80336CB0 object;
 object.unknown00=beNDMWPanelWazaInfoWork_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlAIMap_vtable[];
}
struct UnknownGenRoot802CA388 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CA388(){fn_8006665C(this);}
};
struct UnknownGenObject802CA388_0 : UnknownGenRoot802CA388 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CA388_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CA388 : UnknownGenObject802CA388_0 {
 char unknown0C[16];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 UnknownGenString unknown30;
 char unknown34[4];
 inline ~UnknownGenObject802CA388(){unknown00=beModelCtrlAIMap_vtable;}
};
extern "C" {
void *beModelCtrlAIMap_vtableRead(){
 UnknownGenObject802CA388 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlAIMap_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

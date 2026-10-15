#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char beFileListInfo_vtable[];
}
struct UnknownGenRoot802DA9F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DA9F4(){fn_8006665C(this);}
};
struct UnknownGenObject802DA9F4_0 : UnknownGenRoot802DA9F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DA9F4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DA9F4_1 : UnknownGenObject802DA9F4_0 {
 inline ~UnknownGenObject802DA9F4_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject802DA9F4 : UnknownGenObject802DA9F4_1 {
 char unknown0C[8];
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject802DA9F4(){unknown00=beFileListInfo_vtable;}
};
extern "C" {
void *beFileListInfo_vtableRead(){
 UnknownGenObject802DA9F4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=beFileListInfo_vtable;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

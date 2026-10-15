#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char beCriFxInfo_vtable[];
}
struct UnknownGenRoot802DF0E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DF0E0(){fn_8006665C(this);}
};
struct UnknownGenObject802DF0E0_0 : UnknownGenRoot802DF0E0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DF0E0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DF0E0_1 : UnknownGenObject802DF0E0_0 {
 inline ~UnknownGenObject802DF0E0_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject802DF0E0 : UnknownGenObject802DF0E0_1 {
 char unknown0C[8];
 UnknownGenString unknown14;
 char unknown18[8];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject802DF0E0(){unknown00=beCriFxInfo_vtable;}
};
extern "C" {
void *beCriFxInfo_vtableRead(){
 UnknownGenObject802DF0E0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=beCriFxInfo_vtable;
 object.unknown14.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

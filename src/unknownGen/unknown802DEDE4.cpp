#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beCriHandle_vtable[];
}
struct UnknownGenRoot802DEDE4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DEDE4(){fn_8006665C(this);}
};
struct UnknownGenObject802DEDE4_0 : UnknownGenRoot802DEDE4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DEDE4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DEDE4 : UnknownGenObject802DEDE4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject802DEDE4(){unknown00=beCriHandle_vtable;}
};
extern "C" {
void *beCriHandle_vtableRead(){
 UnknownGenObject802DEDE4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beCriHandle_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

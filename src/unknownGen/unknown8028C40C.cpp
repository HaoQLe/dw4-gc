#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char igSearchSceneGraph_vtable[];
}
struct UnknownGenRoot8028C40C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028C40C(){fn_8006665C(this);}
};
struct UnknownGenObject8028C40C_0 : UnknownGenRoot8028C40C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028C40C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8028C40C : UnknownGenObject8028C40C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenString unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject8028C40C(){unknown00=igSearchSceneGraph_vtable;}
};
extern "C" {
void *igSearchSceneGraph_vtableRead(){
 UnknownGenObject8028C40C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igSearchSceneGraph_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

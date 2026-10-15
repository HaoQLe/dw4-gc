#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char beOptInfo_vtable[];
}
struct UnknownGenRoot802C29AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C29AC(){fn_8006665C(this);}
};
struct UnknownGenObject802C29AC_0 : UnknownGenRoot802C29AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C29AC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802C29AC_1 : UnknownGenObject802C29AC_0 {
 inline ~UnknownGenObject802C29AC_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject802C29AC : UnknownGenObject802C29AC_1 {
 char unknown0C[16];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 char unknown24[4];
 inline ~UnknownGenObject802C29AC(){unknown00=beOptInfo_vtable;}
};
extern "C" {
void *beOptInfo_vtableRead(){
 UnknownGenObject802C29AC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=beOptInfo_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

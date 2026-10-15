#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char lbl_804727A4[];
extern char igNamedObject_vtable[];
extern char igAdxFile_vtable[];
}
struct UnknownGenRoot802AB278 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802AB278(){igObject_construct(this);}
};
struct UnknownGenObject802AB278_0 : UnknownGenRoot802AB278 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802AB278_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802AB278_1 : UnknownGenObject802AB278_0 {
 UnknownGenString unknown0C;
 char unknown10[24];
 UnknownGenString unknown28;
 inline ~UnknownGenObject802AB278_1(){unknown00=lbl_804727A4;}
};
struct UnknownGenObject802AB278 : UnknownGenObject802AB278_1 {
 char unknown2C[60];
 inline ~UnknownGenObject802AB278(){unknown00=igAdxFile_vtable;}
};
extern "C" {
void *igAdxFile_vtableRead(){
 UnknownGenObject802AB278 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804727A4;
 object.unknown0C.value=0;
 object.unknown28.value=0;
 object.unknown00=igAdxFile_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

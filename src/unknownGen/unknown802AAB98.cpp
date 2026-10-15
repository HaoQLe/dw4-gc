#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char igAdxAfsFile_vtable[];
extern char igFileName_vtable[];
}
struct UnknownGenRoot802AAB98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802AAB98(){igObject_construct(this);}
};
struct UnknownGenObject802AAB98_0 : UnknownGenRoot802AAB98 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802AAB98_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802AAB98_1 : UnknownGenObject802AAB98_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802AAB98_1(){unknown00=igFileName_vtable;}
};
struct UnknownGenObject802AAB98 : UnknownGenObject802AAB98_1 {
 char unknown10[16];
 inline ~UnknownGenObject802AAB98(){unknown00=igAdxAfsFile_vtable;}
};
extern "C" {
void *igAdxAfsFile_vtableRead(){
 UnknownGenObject802AAB98 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igFileName_vtable;
 object.unknown0C.value=0;
 object.unknown00=igAdxAfsFile_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

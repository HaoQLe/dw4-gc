#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beDataObjBoolList_vtable[];
}
struct UnknownGenRoot802DCDEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DCDEC(){igObject_construct(this);}
};
struct UnknownGenObject802DCDEC_0 : UnknownGenRoot802DCDEC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DCDEC_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DCDEC : UnknownGenObject802DCDEC_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802DCDEC(){unknown00=beDataObjBoolList_vtable;}
};
extern "C" {
void *beDataObjBoolList_vtableRead(){
 UnknownGenObject802DCDEC object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beDataObjBoolList_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

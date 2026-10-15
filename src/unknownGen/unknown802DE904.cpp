#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beCriSfpData_vtable[];
extern char lbl_804D5160[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802DE904 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DE904(){igObject_construct(this);}
};
struct UnknownGenObject802DE904_0 : UnknownGenRoot802DE904 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DE904_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DE904_1 : UnknownGenObject802DE904_0 {
 inline ~UnknownGenObject802DE904_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802DE904_2 : UnknownGenObject802DE904_1 {
 inline ~UnknownGenObject802DE904_2(){unknown00=lbl_804D5160;}
};
struct UnknownGenObject802DE904 : UnknownGenObject802DE904_2 {
 char unknown0C[36];
 inline ~UnknownGenObject802DE904(){unknown00=beCriSfpData_vtable;}
};
extern "C" {
void *beCriSfpData_vtableRead(){
 UnknownGenObject802DE904 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D5160;
 object.unknown00=beCriSfpData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

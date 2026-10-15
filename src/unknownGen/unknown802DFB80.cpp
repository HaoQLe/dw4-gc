#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char beCriAcxData_vtable[];
extern char lbl_804D5160[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802DFB80 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DFB80(){igObject_construct(this);}
};
struct UnknownGenObject802DFB80_0 : UnknownGenRoot802DFB80 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DFB80_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802DFB80_1 : UnknownGenObject802DFB80_0 {
 inline ~UnknownGenObject802DFB80_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802DFB80_2 : UnknownGenObject802DFB80_1 {
 inline ~UnknownGenObject802DFB80_2(){unknown00=lbl_804D5160;}
};
struct UnknownGenObject802DFB80 : UnknownGenObject802DFB80_2 {
 char unknown0C[20];
 inline ~UnknownGenObject802DFB80(){unknown00=beCriAcxData_vtable;}
};
extern "C" {
void *beCriAcxData_vtableRead(){
 UnknownGenObject802DFB80 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D5160;
 object.unknown00=beCriAcxData_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

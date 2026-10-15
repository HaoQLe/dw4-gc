#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char igNamedObject_vtable[];
extern char lbl_804DBC50[];
extern char beNDMWTitle2Option_vtable[];
}
struct UnknownGenRoot803261B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot803261B4(){igObject_construct(this);}
};
struct UnknownGenObject803261B4_0 : UnknownGenRoot803261B4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject803261B4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject803261B4_1 : UnknownGenObject803261B4_0 {
 inline ~UnknownGenObject803261B4_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject803261B4 : UnknownGenObject803261B4_1 {
 char unknown0C[52];
 inline ~UnknownGenObject803261B4(){unknown00=beNDMWTitle2Option_vtable;}
};
extern "C" {
void *beNDMWTitle2Option_vtableRead(){
 UnknownGenObject803261B4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=beNDMWTitle2Option_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

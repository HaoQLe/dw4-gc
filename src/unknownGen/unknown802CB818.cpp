#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlMOVEEX_vtable[];
}
struct UnknownGenRoot802CB818 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CB818(){fn_8006665C(this);}
};
struct UnknownGenObject802CB818_0 : UnknownGenRoot802CB818 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CB818_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802CB818 : UnknownGenObject802CB818_0 {
 char unknown0C[36];
 inline ~UnknownGenObject802CB818(){unknown00=beModelCtrlMOVEEX_vtable;}
};
extern "C" {
void *beModelCtrlMOVEEX_vtableRead(){
 UnknownGenObject802CB818 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=beModelCtrlMOVEEX_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

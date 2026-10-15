#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char igNamedObject_vtable[];
extern char beModelCtrlInfoDataAIH_vtable[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802C9B90 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C9B90(){fn_8006665C(this);}
};
struct UnknownGenObject802C9B90_0 : UnknownGenRoot802C9B90 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C9B90_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject802C9B90_1 : UnknownGenObject802C9B90_0 {
 inline ~UnknownGenObject802C9B90_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802C9B90 : UnknownGenObject802C9B90_1 {
 char unknown0C[36];
 inline ~UnknownGenObject802C9B90(){unknown00=beModelCtrlInfoDataAIH_vtable;}
};
extern "C" {
void *beModelCtrlInfoDataAIH_vtableRead(){
 UnknownGenObject802C9B90 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=beModelCtrlInfoDataAIH_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

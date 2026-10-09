#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D9BE8[];
}
struct UnknownGenRoot802C811C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C811C(){fn_8006665C(this);}
};
struct UnknownGenObject802C811C : UnknownGenRoot802C811C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject802C811C(){unknown00=lbl_804D9BE8;}
};
extern "C" {
void *beModelCtrlInfoHitBody_vtableRead(){
 UnknownGenObject802C811C object;
 object.unknown00=lbl_804D9BE8;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

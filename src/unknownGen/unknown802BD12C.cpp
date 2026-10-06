#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DB048[];
extern char lbl_804DB2EC[];
}
struct UnknownGenRoot802BD12C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802BD12C(){fn_8006665C(this);}
};
struct UnknownGenObject802BD12C_0 : UnknownGenRoot802BD12C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802BD12C_0(){unknown00=lbl_804DB2EC;}
};
struct UnknownGenObject802BD12C : UnknownGenObject802BD12C_0 {
 char unknown10[88];
 UnknownGenString unknown68;
 char unknown6C[36];
 inline ~UnknownGenObject802BD12C(){unknown00=lbl_804DB048;}
};
extern "C" {
void *fn_802BD12C(){
 UnknownGenObject802BD12C object;
 object.unknown00=lbl_804DB2EC;
 object.unknown0C.value=0;
 object.unknown00=lbl_804DB048;
 object.unknown68.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

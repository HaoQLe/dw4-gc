#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D7FE8[];
}
struct UnknownGenRoot802CFEF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CFEF0(){fn_8006665C(this);}
};
struct UnknownGenObject802CFEF0 : UnknownGenRoot802CFEF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802CFEF0(){unknown00=lbl_804D7FE8;}
};
extern "C" {
void *fn_802CFEF0(){
 UnknownGenObject802CFEF0 object;
 object.unknown00=lbl_804D7FE8;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

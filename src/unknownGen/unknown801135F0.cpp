#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804970B8[];
}
struct UnknownGenRoot801135F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801135F0(){fn_8006665C(this);}
};
struct UnknownGenObject801135F0 : UnknownGenRoot801135F0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801135F0(){unknown00=lbl_804970B8;}
};
extern "C" {
void *fn_801135F0(){
 UnknownGenObject801135F0 object;
 object.unknown00=lbl_804970B8;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B3B28[];
extern char lbl_804B761C[];
extern char lbl_804BA1D8[];
}
struct UnknownGenRoot801BE084 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BE084(){fn_8006665C(this);}
};
struct UnknownGenObject801BE084_0 : UnknownGenRoot801BE084 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject801BE084_0(){unknown00=lbl_804B3B28;}
};
struct UnknownGenObject801BE084_1 : UnknownGenObject801BE084_0 {
 inline ~UnknownGenObject801BE084_1(){unknown00=lbl_804BA1D8;}
};
struct UnknownGenObject801BE084 : UnknownGenObject801BE084_1 {
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BE084(){unknown00=lbl_804B761C;}
};
extern "C" {
void *fn_801BE084(){
 UnknownGenObject801BE084 object;
 object.unknown00=lbl_804B3B28;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_804BA1D8;
 object.unknown00=lbl_804B761C;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

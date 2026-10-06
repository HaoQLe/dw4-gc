#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B3810[];
extern char lbl_804B9324[];
}
struct UnknownGenRoot801AFAF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AFAF0(){fn_8006665C(this);}
};
struct UnknownGenObject801AFAF0_0 : UnknownGenRoot801AFAF0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AFAF0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801AFAF0_1 : UnknownGenObject801AFAF0_0 {
 inline ~UnknownGenObject801AFAF0_1(){unknown00=lbl_804B9324;}
};
struct UnknownGenObject801AFAF0 : UnknownGenObject801AFAF0_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801AFAF0(){unknown00=lbl_804B3810;}
};
extern "C" {
void *fn_801AFAF0(){
 UnknownGenObject801AFAF0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B9324;
 object.unknown00=lbl_804B3810;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

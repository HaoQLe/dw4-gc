#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B7ABC[];
}
struct UnknownGenRoot801BADE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BADE0(){fn_8006665C(this);}
};
struct UnknownGenObject801BADE0_0 : UnknownGenRoot801BADE0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BADE0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BADE0_1 : UnknownGenObject801BADE0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BADE0_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BADE0_2 : UnknownGenObject801BADE0_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801BADE0_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801BADE0 : UnknownGenObject801BADE0_2 {
 char unknown20[8];
 inline ~UnknownGenObject801BADE0(){unknown00=lbl_804B7ABC;}
};
extern "C" {
void *fn_801BADE0(){
 UnknownGenObject801BADE0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B7ABC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

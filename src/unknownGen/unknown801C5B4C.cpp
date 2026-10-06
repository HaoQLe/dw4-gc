#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B52F8[];
extern char lbl_804B6F0C[];
}
struct UnknownGenRoot801C5B4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C5B4C(){fn_8006665C(this);}
};
struct UnknownGenObject801C5B4C_0 : UnknownGenRoot801C5B4C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C5B4C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C5B4C_1 : UnknownGenObject801C5B4C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C5B4C_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801C5B4C_2 : UnknownGenObject801C5B4C_1 {
 inline ~UnknownGenObject801C5B4C_2(){unknown00=lbl_804B6F0C;}
};
struct UnknownGenObject801C5B4C : UnknownGenObject801C5B4C_2 {
 char unknown14[52];
 inline ~UnknownGenObject801C5B4C(){unknown00=lbl_804B52F8;}
};
extern "C" {
void *fn_801C5B4C(){
 UnknownGenObject801C5B4C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B6F0C;
 object.unknown00=lbl_804B52F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

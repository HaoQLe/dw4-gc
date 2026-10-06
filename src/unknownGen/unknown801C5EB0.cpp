#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B6F0C[];
}
struct UnknownGenRoot801C5EB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C5EB0(){fn_8006665C(this);}
};
struct UnknownGenObject801C5EB0_0 : UnknownGenRoot801C5EB0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C5EB0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C5EB0_1 : UnknownGenObject801C5EB0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C5EB0_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801C5EB0 : UnknownGenObject801C5EB0_1 {
 char unknown14[36];
 inline ~UnknownGenObject801C5EB0(){unknown00=lbl_804B6F0C;}
};
extern "C" {
void *fn_801C5EB0(){
 UnknownGenObject801C5EB0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B6F0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

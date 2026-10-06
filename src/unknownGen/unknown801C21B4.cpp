#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B4E20[];
}
struct UnknownGenRoot801C21B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C21B4(){fn_8006665C(this);}
};
struct UnknownGenObject801C21B4_0 : UnknownGenRoot801C21B4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C21B4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C21B4_1 : UnknownGenObject801C21B4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C21B4_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801C21B4_2 : UnknownGenObject801C21B4_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C21B4_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801C21B4 : UnknownGenObject801C21B4_2 {
 char unknown20[44];
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject801C21B4(){unknown00=lbl_804B4E20;}
};
extern "C" {
void *fn_801C21B4(){
 UnknownGenObject801C21B4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B4E20;
 object.unknown4C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

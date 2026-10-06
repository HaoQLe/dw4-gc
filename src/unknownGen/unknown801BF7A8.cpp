#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
}
struct UnknownGenRoot801BF7A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BF7A8(){fn_8006665C(this);}
};
struct UnknownGenObject801BF7A8_0 : UnknownGenRoot801BF7A8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BF7A8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BF7A8_1 : UnknownGenObject801BF7A8_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BF7A8_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BF7A8 : UnknownGenObject801BF7A8_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BF7A8(){unknown00=lbl_804B49CC;}
};
extern "C" {
void *fn_801BF7A8(){
 UnknownGenObject801BF7A8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

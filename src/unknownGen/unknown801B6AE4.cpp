#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_80493DD4[];
extern char lbl_804B3FD8[];
}
struct UnknownGenRoot801B6AE4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B6AE4(){fn_8006665C(this);}
};
struct UnknownGenObject801B6AE4_0 : UnknownGenRoot801B6AE4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B6AE4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B6AE4_1 : UnknownGenObject801B6AE4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801B6AE4_1(){unknown00=lbl_80493DD4;}
};
struct UnknownGenObject801B6AE4 : UnknownGenObject801B6AE4_1 {
 UnknownGenString unknown14;
 UnknownGenString unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject801B6AE4(){unknown00=lbl_804B3FD8;}
};
extern "C" {
void *fn_801B6AE4(){
 UnknownGenObject801B6AE4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493DD4;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B3FD8;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

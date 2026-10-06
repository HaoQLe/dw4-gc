#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804B58AC[];
}
struct UnknownGenRoot801CD928 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CD928(){fn_8006665C(this);}
};
struct UnknownGenObject801CD928_0 : UnknownGenRoot801CD928 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CD928_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801CD928_1 : UnknownGenObject801CD928_0 {
 inline ~UnknownGenObject801CD928_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801CD928 : UnknownGenObject801CD928_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801CD928(){unknown00=lbl_804B58AC;}
};
extern "C" {
void *fn_801CD928(){
 UnknownGenObject801CD928 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B58AC;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804B566C[];
}
struct UnknownGenRoot801CACA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CACA8(){fn_8006665C(this);}
};
struct UnknownGenObject801CACA8_0 : UnknownGenRoot801CACA8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CACA8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801CACA8_1 : UnknownGenObject801CACA8_0 {
 inline ~UnknownGenObject801CACA8_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801CACA8 : UnknownGenObject801CACA8_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801CACA8(){unknown00=lbl_804B566C;}
};
extern "C" {
void *fn_801CACA8(){
 UnknownGenObject801CACA8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B566C;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

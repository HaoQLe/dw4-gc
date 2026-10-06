#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804B3A54[];
}
struct UnknownGenRoot801B0AE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B0AE0(){fn_8006665C(this);}
};
struct UnknownGenObject801B0AE0_0 : UnknownGenRoot801B0AE0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B0AE0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B0AE0_1 : UnknownGenObject801B0AE0_0 {
 inline ~UnknownGenObject801B0AE0_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801B0AE0 : UnknownGenObject801B0AE0_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject801B0AE0(){unknown00=lbl_804B3A54;}
};
extern "C" {
void *fn_801B0AE0(){
 UnknownGenObject801B0AE0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B3A54;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

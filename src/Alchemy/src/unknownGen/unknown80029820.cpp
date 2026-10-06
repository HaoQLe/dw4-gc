#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047184C[];
extern char lbl_80472460[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot80029820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80029820(){fn_8006665C(this);}
};
struct UnknownGenObject80029820_0 : UnknownGenRoot80029820 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80029820_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80029820_1 : UnknownGenObject80029820_0 {
 inline ~UnknownGenObject80029820_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject80029820 : UnknownGenObject80029820_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject80029820(){unknown00=lbl_8047184C;}
};
extern "C" {
void *fn_80029820(){
 UnknownGenObject80029820 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_8047184C;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

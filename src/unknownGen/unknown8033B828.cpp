#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DCD14[];
extern char lbl_804E5EA4[];
}
struct UnknownGenRoot8033B828 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033B828(){fn_8006665C(this);}
};
struct UnknownGenObject8033B828_0 : UnknownGenRoot8033B828 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8033B828_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8033B828_1 : UnknownGenObject8033B828_0 {
 inline ~UnknownGenObject8033B828_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject8033B828_2 : UnknownGenObject8033B828_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject8033B828_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject8033B828 : UnknownGenObject8033B828_2 {
 char unknown1C[12];
 inline ~UnknownGenObject8033B828(){unknown00=lbl_804E5EA4;}
};
extern "C" {
void *fn_8033B828(){
 UnknownGenObject8033B828 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804E5EA4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804DCD14[];
extern char lbl_804E62B4[];
}
struct UnknownGenRoot803366C4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot803366C4(){fn_8006665C(this);}
};
struct UnknownGenObject803366C4_0 : UnknownGenRoot803366C4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject803366C4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject803366C4_1 : UnknownGenObject803366C4_0 {
 inline ~UnknownGenObject803366C4_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject803366C4_2 : UnknownGenObject803366C4_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject803366C4_2(){unknown00=lbl_804DCD14;}
};
struct UnknownGenObject803366C4 : UnknownGenObject803366C4_2 {
 char unknown1C[12];
 inline ~UnknownGenObject803366C4(){unknown00=lbl_804E62B4;}
};
extern "C" {
void *fn_803366C4(){
 UnknownGenObject803366C4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804DCD14;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown00=lbl_804E62B4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

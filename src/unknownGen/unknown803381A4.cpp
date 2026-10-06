#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804E71E8[];
}
struct UnknownGenRoot803381A4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot803381A4(){fn_8006665C(this);}
};
struct UnknownGenObject803381A4_0 : UnknownGenRoot803381A4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject803381A4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject803381A4_1 : UnknownGenObject803381A4_0 {
 inline ~UnknownGenObject803381A4_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject803381A4_2 : UnknownGenObject803381A4_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject803381A4_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject803381A4 : UnknownGenObject803381A4_2 {
 char unknown1C[20];
 inline ~UnknownGenObject803381A4(){unknown00=lbl_804E71E8;}
};
extern "C" {
void *fn_803381A4(){
 UnknownGenObject803381A4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804E71E8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

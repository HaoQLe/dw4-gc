#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804EA898[];
}
struct UnknownGenRoot803268C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot803268C0(){fn_8006665C(this);}
};
struct UnknownGenObject803268C0_0 : UnknownGenRoot803268C0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject803268C0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject803268C0_1 : UnknownGenObject803268C0_0 {
 inline ~UnknownGenObject803268C0_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject803268C0_2 : UnknownGenObject803268C0_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject803268C0_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject803268C0 : UnknownGenObject803268C0_2 {
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[16];
 inline ~UnknownGenObject803268C0(){unknown00=lbl_804EA898;}
};
extern "C" {
void *fn_803268C0(){
 UnknownGenObject803268C0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804EA898;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804E0368[];
}
struct UnknownGenRoot802B8158 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B8158(){fn_8006665C(this);}
};
struct UnknownGenObject802B8158_0 : UnknownGenRoot802B8158 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B8158_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B8158_1 : UnknownGenObject802B8158_0 {
 inline ~UnknownGenObject802B8158_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802B8158_2 : UnknownGenObject802B8158_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802B8158_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802B8158 : UnknownGenObject802B8158_2 {
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject802B8158(){unknown00=lbl_804E0368;}
};
extern "C" {
void *beStaticInfoCtl_vtableRead(){
 UnknownGenObject802B8158 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804E0368;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

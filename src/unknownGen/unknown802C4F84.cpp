#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804E0740[];
}
struct UnknownGenRoot802C4F84 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C4F84(){fn_8006665C(this);}
};
struct UnknownGenObject802C4F84_0 : UnknownGenRoot802C4F84 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C4F84_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C4F84_1 : UnknownGenObject802C4F84_0 {
 inline ~UnknownGenObject802C4F84_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802C4F84_2 : UnknownGenObject802C4F84_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802C4F84_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802C4F84 : UnknownGenObject802C4F84_2 {
 char unknown1C[4];
 UnknownGenRefMember unknown20;
 UnknownGenString unknown24;
 inline ~UnknownGenObject802C4F84(){unknown00=lbl_804E0740;}
};
extern "C" {
void *beMovie_vtableRead(){
 UnknownGenObject802C4F84 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804E0740;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804CE958[];
}
struct UnknownGenRoot802AD328 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802AD328(){fn_8006665C(this);}
};
struct UnknownGenObject802AD328_0 : UnknownGenRoot802AD328 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802AD328_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802AD328_1 : UnknownGenObject802AD328_0 {
 inline ~UnknownGenObject802AD328_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802AD328 : UnknownGenObject802AD328_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[4];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject802AD328(){unknown00=lbl_804CE958;}
};
extern "C" {
void *igMovieManager_vtableRead(){
 UnknownGenObject802AD328 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804CE958;
 object.unknown10.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

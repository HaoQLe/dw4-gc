#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804DA15C[];
}
struct UnknownGenRoot802C4550 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C4550(){fn_8006665C(this);}
};
struct UnknownGenObject802C4550_0 : UnknownGenRoot802C4550 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C4550_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C4550_1 : UnknownGenObject802C4550_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject802C4550_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject802C4550_2 : UnknownGenObject802C4550_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802C4550_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject802C4550 : UnknownGenObject802C4550_2 {
 char unknown20[88];
 inline ~UnknownGenObject802C4550(){unknown00=lbl_804DA15C;}
};
extern "C" {
void *beNodeAnim_vtableRead(){
 UnknownGenObject802C4550 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804DA15C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

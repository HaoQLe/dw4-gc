#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D8390[];
}
struct UnknownGenRoot802CEB88 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CEB88(){fn_8006665C(this);}
};
struct UnknownGenObject802CEB88_0 : UnknownGenRoot802CEB88 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CEB88_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CEB88 : UnknownGenObject802CEB88_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject802CEB88(){unknown00=lbl_804D8390;}
};
extern "C" {
void *beMessengerGroup_vtableRead(){
 UnknownGenObject802CEB88 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D8390;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

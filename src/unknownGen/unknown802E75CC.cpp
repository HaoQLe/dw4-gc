#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD3C0[];
}
struct UnknownGenRoot802E75CC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E75CC(){fn_8006665C(this);}
};
struct UnknownGenObject802E75CC_0 : UnknownGenRoot802E75CC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E75CC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E75CC_1 : UnknownGenObject802E75CC_0 {
 inline ~UnknownGenObject802E75CC_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802E75CC : UnknownGenObject802E75CC_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject802E75CC(){unknown00=lbl_804DD3C0;}
};
extern "C" {
void *be_vtableRead(){
 UnknownGenObject802E75CC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD3C0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

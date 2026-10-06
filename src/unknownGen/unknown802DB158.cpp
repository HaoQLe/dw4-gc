#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DDDAC[];
}
struct UnknownGenRoot802DB158 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DB158(){fn_8006665C(this);}
};
struct UnknownGenObject802DB158_0 : UnknownGenRoot802DB158 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DB158_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DB158_1 : UnknownGenObject802DB158_0 {
 inline ~UnknownGenObject802DB158_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802DB158 : UnknownGenObject802DB158_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject802DB158(){unknown00=lbl_804DDDAC;}
};
extern "C" {
void *fn_802DB158(){
 UnknownGenObject802DB158 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DDDAC;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

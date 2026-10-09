#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D3790[];
}
struct UnknownGenRoot802E6AC8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E6AC8(){fn_8006665C(this);}
};
struct UnknownGenObject802E6AC8_0 : UnknownGenRoot802E6AC8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E6AC8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E6AC8 : UnknownGenObject802E6AC8_0 {
 UnknownGenString unknown0C;
 char unknown10[4];
 UnknownGenString unknown14;
 inline ~UnknownGenObject802E6AC8(){unknown00=lbl_804D3790;}
};
extern "C" {
void *beAction2MOTIONSET_vtableRead(){
 UnknownGenObject802E6AC8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D3790;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

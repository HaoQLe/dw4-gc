#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D91E8[];
}
struct UnknownGenRoot802CABC8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CABC8(){fn_8006665C(this);}
};
struct UnknownGenObject802CABC8_0 : UnknownGenRoot802CABC8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CABC8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CABC8 : UnknownGenObject802CABC8_0 {
 char unknown0C[36];
 inline ~UnknownGenObject802CABC8(){unknown00=lbl_804D91E8;}
};
extern "C" {
void *fn_802CABC8(){
 UnknownGenObject802CABC8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D91E8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

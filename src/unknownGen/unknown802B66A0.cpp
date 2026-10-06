#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804DBEE8[];
}
struct UnknownGenRoot802B66A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802B66A0(){fn_8006665C(this);}
};
struct UnknownGenObject802B66A0_0 : UnknownGenRoot802B66A0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802B66A0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802B66A0 : UnknownGenObject802B66A0_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802B66A0(){unknown00=lbl_804DBEE8;}
};
extern "C" {
void *fn_802B66A0(){
 UnknownGenObject802B66A0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBEE8;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

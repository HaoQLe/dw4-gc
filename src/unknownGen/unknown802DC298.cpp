#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D57B8[];
}
struct UnknownGenRoot802DC298 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DC298(){fn_8006665C(this);}
};
struct UnknownGenObject802DC298_0 : UnknownGenRoot802DC298 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802DC298_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802DC298 : UnknownGenObject802DC298_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802DC298(){unknown00=lbl_804D57B8;}
};
extern "C" {
void *fn_802DC298(){
 UnknownGenObject802DC298 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D57B8;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

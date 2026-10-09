#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D9080[];
}
struct UnknownGenRoot802CB1AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CB1AC(){fn_8006665C(this);}
};
struct UnknownGenObject802CB1AC_0 : UnknownGenRoot802CB1AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CB1AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CB1AC : UnknownGenObject802CB1AC_0 {
 char unknown0C[4];
 inline ~UnknownGenObject802CB1AC(){unknown00=lbl_804D9080;}
};
extern "C" {
void *beModelCtrlWCHECK_vtableRead(){
 UnknownGenObject802CB1AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D9080;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

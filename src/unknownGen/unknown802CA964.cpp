#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D9260[];
}
struct UnknownGenRoot802CA964 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CA964(){fn_8006665C(this);}
};
struct UnknownGenObject802CA964_0 : UnknownGenRoot802CA964 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CA964_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CA964 : UnknownGenObject802CA964_0 {
 char unknown0C[20];
 inline ~UnknownGenObject802CA964(){unknown00=lbl_804D9260;}
};
extern "C" {
void *fn_802CA964(){
 UnknownGenObject802CA964 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D9260;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

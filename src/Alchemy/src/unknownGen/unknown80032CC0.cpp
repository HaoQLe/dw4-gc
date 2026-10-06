#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot80032CC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032CC0(){fn_8006665C(this);}
};
struct UnknownGenObject80032CC0_0 : UnknownGenRoot80032CC0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80032CC0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80032CC0 : UnknownGenObject80032CC0_0 {
 char unknown0C[20];
 inline ~UnknownGenObject80032CC0(){unknown00=lbl_80472EF4;}
};
extern "C" {
void *fn_80032CC0(){
 UnknownGenObject80032CC0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

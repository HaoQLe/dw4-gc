#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D8F90[];
}
struct UnknownGenRoot802CB56C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CB56C(){fn_8006665C(this);}
};
struct UnknownGenObject802CB56C_0 : UnknownGenRoot802CB56C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CB56C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CB56C : UnknownGenObject802CB56C_0 {
 UnknownGenString unknown0C;
 UnknownGenString unknown10;
 char unknown14[4];
 inline ~UnknownGenObject802CB56C(){unknown00=lbl_804D8F90;}
};
extern "C" {
void *fn_802CB56C(){
 UnknownGenObject802CB56C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D8F90;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

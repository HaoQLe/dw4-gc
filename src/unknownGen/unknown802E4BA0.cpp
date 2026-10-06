#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D3E0C[];
extern char lbl_804D3E68[];
}
struct UnknownGenRoot802E4BA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E4BA0(){fn_8006665C(this);}
};
struct UnknownGenObject802E4BA0_0 : UnknownGenRoot802E4BA0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802E4BA0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802E4BA0_1 : UnknownGenObject802E4BA0_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject802E4BA0_1(){unknown00=lbl_804D3E68;}
};
struct UnknownGenObject802E4BA0 : UnknownGenObject802E4BA0_1 {
 char unknown10[32];
 inline ~UnknownGenObject802E4BA0(){unknown00=lbl_804D3E0C;}
};
extern "C" {
void *fn_802E4BA0(){
 UnknownGenObject802E4BA0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804D3E68;
 object.unknown0C.value=0;
 object.unknown00=lbl_804D3E0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E47B8[];
}
struct UnknownGenRoot80343AA4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80343AA4(){fn_8006665C(this);}
};
struct UnknownGenObject80343AA4 : UnknownGenRoot80343AA4 {
 char unknown04[16];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject80343AA4(){unknown00=lbl_804E47B8;}
};
extern "C" {
void *beNDMWShinkaCtrl_vtableRead(){
 UnknownGenObject80343AA4 object;
 object.unknown00=lbl_804E47B8;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E5034[];
}
struct UnknownGenRoot80340584 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80340584(){fn_8006665C(this);}
};
struct UnknownGenObject80340584 : UnknownGenRoot80340584 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject80340584(){unknown00=lbl_804E5034;}
};
extern "C" {
void *fn_80340584(){
 UnknownGenObject80340584 object;
 object.unknown00=lbl_804E5034;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

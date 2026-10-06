#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804BBB64[];
}
struct UnknownGenRoot80218B40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218B40(){fn_8006665C(this);}
};
struct UnknownGenObject80218B40 : UnknownGenRoot80218B40 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80218B40(){unknown00=lbl_804BBB64;}
};
extern "C" {
void *fn_80218B40(){
 UnknownGenObject80218B40 object;
 object.unknown00=lbl_804BBB64;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

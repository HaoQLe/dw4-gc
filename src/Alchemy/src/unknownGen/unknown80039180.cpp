#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8008CE04(void *);
extern char lbl_80473AE8[];
}
struct UnknownGenRoot80039180 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80039180(){fn_8008CE04(this);}
};
struct UnknownGenObject80039180 : UnknownGenRoot80039180 {
 char unknown04[112];
 UnknownGenRefMember unknown74;
 char unknown78[8];
 UnknownGenRefMember unknown80;
 char unknown84[140];
 inline ~UnknownGenObject80039180(){unknown00=lbl_80473AE8;}
};
extern "C" {
void *fn_80039180(){
 UnknownGenObject80039180 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

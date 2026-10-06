#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80471FCC[];
}
struct UnknownGenRoot8002CB34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002CB34(){fn_8006665C(this);}
};
struct UnknownGenObject8002CB34 : UnknownGenRoot8002CB34 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8002CB34(){unknown00=lbl_80471FCC;}
};
extern "C" {
void *fn_8002CB34(){
 UnknownGenObject8002CB34 object;
 object.unknown00=lbl_80471FCC;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

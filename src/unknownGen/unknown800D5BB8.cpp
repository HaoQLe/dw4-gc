#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80491134[];
extern char lbl_8049304C[];
extern char lbl_804930AC[];
}
struct UnknownGenRoot800D5BB8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D5BB8(){fn_8006665C(this);}
};
struct UnknownGenObject800D5BB8 : UnknownGenRoot800D5BB8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[36];
 inline ~UnknownGenObject800D5BB8(){unknown00=lbl_80491134;}
};
extern "C" {
void *fn_800D5BB8(){
 UnknownGenObject800D5BB8 object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_8049304C;
 object.unknown00=lbl_80491134;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

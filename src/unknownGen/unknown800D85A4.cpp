#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804914EC[];
extern char lbl_804926E0[];
}
struct UnknownGenRoot800D85A4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D85A4(){fn_8006665C(this);}
};
struct UnknownGenObject800D85A4_0 : UnknownGenRoot800D85A4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800D85A4_0(){unknown00=lbl_804926E0;}
};
struct UnknownGenObject800D85A4 : UnknownGenObject800D85A4_0 {
 char unknown0C[20];
 inline ~UnknownGenObject800D85A4(){unknown00=lbl_804914EC;}
};
extern "C" {
void *fn_800D85A4(){
 UnknownGenObject800D85A4 object;
 object.unknown00=lbl_804926E0;
 object.unknown08.value=0;
 object.unknown00=lbl_804914EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80497600[];
}
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){fn_8006665C(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=lbl_80497600;}
};
extern "C" {
void *fn_8010F79C(){
 UnknownGenObject8010F79C object;
 object.unknown00=lbl_80497600;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

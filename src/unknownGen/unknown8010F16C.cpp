#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496040[];
}
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){fn_8006665C(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=lbl_80496040;}
};
extern "C" {
void *fn_8010F16C(){
 UnknownGenObject8010F16C object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

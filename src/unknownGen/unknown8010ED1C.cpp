#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496040[];
extern char lbl_8049799C[];
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){fn_8006665C(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=lbl_8049799C;}
};
extern "C" {
void *fn_8010ED1C(){
 UnknownGenObject8010ED1C object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_8049799C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496040[];
extern char lbl_80497940[];
extern char lbl_80497E78[];
}
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){fn_8006665C(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=lbl_80497940;}
};
extern "C" {
void *fn_8010EF2C(){
 UnknownGenObject8010EF2C object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497940;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

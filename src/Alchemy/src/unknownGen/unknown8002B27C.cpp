#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800632A4(void *);
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_80471A08[];
extern char lbl_80476088[];
}
struct UnknownGenRoot8002B27C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002B27C(){fn_800632A4(this);}
};
struct UnknownGenObject8002B27C_0 : UnknownGenRoot8002B27C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002B27C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002B27C_1 : UnknownGenObject8002B27C_0 {
 inline ~UnknownGenObject8002B27C_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject8002B27C_2 : UnknownGenObject8002B27C_1 {
 char unknown10[56];
 UnknownGenRefMember unknown48;
 UnknownGenString unknown4C;
 inline ~UnknownGenObject8002B27C_2(){unknown00=lbl_80476088;}
};
struct UnknownGenObject8002B27C : UnknownGenObject8002B27C_2 {
 char unknown50[16];
 inline ~UnknownGenObject8002B27C(){unknown00=lbl_80471A08;}
};
extern "C" {
void *fn_8002B27C(){
 UnknownGenObject8002B27C object;
 object.unknown00=lbl_80471A08;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

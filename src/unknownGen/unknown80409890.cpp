#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496040[];
extern char lbl_804F1118[];
}
struct UnknownGenRoot80409890 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80409890(){fn_8006665C(this);}
};
struct UnknownGenObject80409890_0 : UnknownGenRoot80409890 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80409890_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject80409890 : UnknownGenObject80409890_0 {
 char unknown0C[4];
 inline ~UnknownGenObject80409890(){unknown00=lbl_804F1118;}
};
extern "C" {
void *fn_80409890(){
 UnknownGenObject80409890 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_804F1118;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

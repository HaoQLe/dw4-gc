#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496040[];
extern char lbl_80497E78[];
}
struct UnknownGenRoot80111594 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111594(){fn_8006665C(this);}
};
struct UnknownGenObject80111594_0 : UnknownGenRoot80111594 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80111594_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject80111594 : UnknownGenObject80111594_0 {
 char unknown0C[36];
 inline ~UnknownGenObject80111594(){unknown00=lbl_80497E78;}
};
extern "C" {
void *fn_80111594(){
 UnknownGenObject80111594 object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

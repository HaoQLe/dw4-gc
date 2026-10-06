#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E4E9C[];
}
struct UnknownGenRoot80340A3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80340A3C(){fn_8006665C(this);}
};
struct UnknownGenObject80340A3C : UnknownGenRoot80340A3C {
 char unknown04[44];
 UnknownGenString unknown30;
 UnknownGenString unknown34;
 char unknown38[24];
 inline ~UnknownGenObject80340A3C(){unknown00=lbl_804E4E9C;}
};
extern "C" {
void *fn_80340A3C(){
 UnknownGenObject80340A3C object;
 object.unknown00=lbl_804E4E9C;
 object.unknown30.value=0;
 object.unknown34.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

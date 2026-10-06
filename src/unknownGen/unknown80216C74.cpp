#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804BC948[];
}
struct UnknownGenRoot80216C74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80216C74(){fn_8006665C(this);}
};
struct UnknownGenObject80216C74 : UnknownGenRoot80216C74 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80216C74(){unknown00=lbl_804BC948;}
};
extern "C" {
void *fn_80216C74(){
 UnknownGenObject80216C74 object;
 object.unknown00=lbl_804BC948;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

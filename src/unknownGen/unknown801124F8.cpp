#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80497424[];
}
struct UnknownGenRoot801124F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801124F8(){fn_8006665C(this);}
};
struct UnknownGenObject801124F8 : UnknownGenRoot801124F8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801124F8(){unknown00=lbl_80497424;}
};
extern "C" {
void *fn_801124F8(){
 UnknownGenObject801124F8 object;
 object.unknown00=lbl_80497424;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

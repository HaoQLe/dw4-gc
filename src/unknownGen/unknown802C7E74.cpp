#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D9C58[];
}
struct UnknownGenRoot802C7E74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C7E74(){fn_8006665C(this);}
};
struct UnknownGenObject802C7E74 : UnknownGenRoot802C7E74 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[36];
 inline ~UnknownGenObject802C7E74(){unknown00=lbl_804D9C58;}
};
extern "C" {
void *beModelCtrlInfoAI_vtableRead(){
 UnknownGenObject802C7E74 object;
 object.unknown00=lbl_804D9C58;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

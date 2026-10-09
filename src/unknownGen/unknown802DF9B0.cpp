#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D4D74[];
}
struct UnknownGenObject802DF9B0_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *beCriSndf_vtableRead(){
 UnknownGenObject802DF9B0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804D4D74;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

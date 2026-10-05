#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E5260[];
extern char lbl_804E5334[];
}
struct UnknownGenObject8033FE2C {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_8033FE2C(){
 UnknownGenObject8033FE2C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804E5334;
 object.unknown00=lbl_804E5260;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E51E8[];
extern char lbl_804E5334[];
}
struct UnknownGenObject80340048 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80340048(){
 UnknownGenObject80340048 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804E5334;
 object.unknown00=lbl_804E51E8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

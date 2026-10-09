#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CE744[];
}
struct UnknownGenObject802AC0B0_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igCriMovieData_vtableRead(){
 UnknownGenObject802AC0B0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804CE744;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

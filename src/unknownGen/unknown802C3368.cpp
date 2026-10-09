#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804DA610[];
extern char lbl_804DA674[];
}
struct UnknownGenObject802C3368_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beNumVerDataList_vtableRead(){
 UnknownGenObject802C3368_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804DA674;
 object.unknown00=lbl_804DA610;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

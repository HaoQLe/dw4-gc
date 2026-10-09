#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804D5C68[];
extern char lbl_804D5CCC[];
}
struct UnknownGenObject802DB4FC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *beDemoManagerWorkList_vtableRead(){
 UnknownGenObject802DB4FC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804D5CCC;
 object.unknown00=lbl_804D5C68;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

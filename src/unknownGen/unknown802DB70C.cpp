#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D5BAC[];
}
struct UnknownGenRoot802DB70C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DB70C(){fn_8006665C(this);}
};
struct UnknownGenObject802DB70C : UnknownGenRoot802DB70C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802DB70C(){unknown00=lbl_804D5BAC;}
};
extern "C" {
void *beDemoManagerWork_vtableRead(){
 UnknownGenObject802DB70C object;
 object.unknown00=lbl_804D5BAC;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

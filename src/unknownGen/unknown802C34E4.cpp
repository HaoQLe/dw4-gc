#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DA554[];
}
struct UnknownGenRoot802C34E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C34E4(){fn_8006665C(this);}
};
struct UnknownGenObject802C34E4 : UnknownGenRoot802C34E4 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802C34E4(){unknown00=lbl_804DA554;}
};
extern "C" {
void *beNumVerData_vtableRead(){
 UnknownGenObject802C34E4 object;
 object.unknown00=lbl_804DA554;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

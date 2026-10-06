#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DAA14[];
}
struct UnknownGenRoot802C184C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C184C(){fn_8006665C(this);}
};
struct UnknownGenObject802C184C : UnknownGenRoot802C184C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject802C184C(){unknown00=lbl_804DAA14;}
};
extern "C" {
void *fn_802C184C(){
 UnknownGenObject802C184C object;
 object.unknown00=lbl_804DAA14;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CBB90[];
extern char lbl_804F1494[];
}
struct UnknownGenRoot80404CEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80404CEC(){fn_8006665C(this);}
};
struct UnknownGenObject80404CEC : UnknownGenRoot80404CEC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80404CEC(){unknown00=lbl_804F1494;}
};
extern "C" {
void *fn_80404CEC(){
 UnknownGenObject80404CEC object;
 object.unknown00=lbl_804CBB90;
 object.unknown00=lbl_804F1494;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

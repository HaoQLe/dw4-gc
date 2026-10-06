#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CBB90[];
extern char lbl_804F1438[];
}
struct UnknownGenRoot80404F4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80404F4C(){fn_8006665C(this);}
};
struct UnknownGenObject80404F4C : UnknownGenRoot80404F4C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80404F4C(){unknown00=lbl_804F1438;}
};
extern "C" {
void *fn_80404F4C(){
 UnknownGenObject80404F4C object;
 object.unknown00=lbl_804CBB90;
 object.unknown00=lbl_804F1438;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CD764[];
}
struct UnknownGenRoot802AB6B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802AB6B8(){fn_8006665C(this);}
};
struct UnknownGenObject802AB6B8 : UnknownGenRoot802AB6B8 {
 char unknown04[36];
 UnknownGenString unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject802AB6B8(){unknown00=lbl_804CD764;}
};
extern "C" {
void *fn_802AB6B8(){
 UnknownGenObject802AB6B8 object;
 object.unknown00=lbl_804CD764;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

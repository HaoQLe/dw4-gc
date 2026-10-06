#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D9E80[];
extern char lbl_804DEFCC[];
}
struct UnknownGenRoot802C5A44 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C5A44(){fn_8006665C(this);}
};
struct UnknownGenObject802C5A44 : UnknownGenRoot802C5A44 {
 char unknown04[20];
 UnknownGenString unknown18;
 UnknownGenString unknown1C;
 char unknown20[32];
 inline ~UnknownGenObject802C5A44(){unknown00=lbl_804DEFCC;}
};
extern "C" {
void *fn_802C5A44(){
 UnknownGenObject802C5A44 object;
 object.unknown00=lbl_804D9E80;
 object.unknown00=lbl_804DEFCC;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D4DE4[];
}
struct UnknownGenRoot802DF684 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802DF684(){fn_8006665C(this);}
};
struct UnknownGenObject802DF684 : UnknownGenRoot802DF684 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject802DF684(){unknown00=lbl_804D4DE4;}
};
extern "C" {
void *beCriAudio_vtableRead(){
 UnknownGenObject802DF684 object;
 object.unknown00=lbl_804D4DE4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

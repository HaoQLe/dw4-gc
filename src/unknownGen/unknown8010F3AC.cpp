#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80496100[];
extern char lbl_80497724[];
}
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){fn_8006665C(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=lbl_80496100;}
};
extern "C" {
void *fn_8010F3AC(){
 UnknownGenObject8010F3AC object;
 object.unknown00=lbl_80497724;
 object.unknown00=lbl_80496100;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

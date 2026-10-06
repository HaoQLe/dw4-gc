#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CB9E8[];
extern char lbl_804CC018[];
}
struct UnknownGenRoot802845AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802845AC(){fn_8006665C(this);}
};
struct UnknownGenObject802845AC : UnknownGenRoot802845AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802845AC(){unknown00=lbl_804CC018;}
};
extern "C" {
void *fn_802845AC(){
 UnknownGenObject802845AC object;
 object.unknown00=lbl_804CB9E8;
 object.unknown00=lbl_804CC018;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

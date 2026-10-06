#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80058ABC(void *);
extern char lbl_8046F904[];
}
struct UnknownGenRoot80039994 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80039994(){fn_80058ABC(this);}
};
struct UnknownGenObject80039994 : UnknownGenRoot80039994 {
 char unknown04[144];
 UnknownGenRefMember unknown94;
 char unknown98[8];
 inline ~UnknownGenObject80039994(){unknown00=lbl_8046F904;}
};
extern "C" {
void *fn_80039994(){
 UnknownGenObject80039994 object;
 object.unknown00=lbl_8046F904;
 object.unknown94.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D9EFC[];
}
struct UnknownGenRoot802C5334 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C5334(){fn_8006665C(this);}
};
struct UnknownGenObject802C5334 : UnknownGenRoot802C5334 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802C5334(){unknown00=lbl_804D9EFC;}
};
extern "C" {
void *fn_802C5334(){
 UnknownGenObject802C5334 object;
 object.unknown00=lbl_804D9EFC;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D6BFC[];
}
struct UnknownGenRoot802D6A50 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D6A50(){fn_8006665C(this);}
};
struct UnknownGenObject802D6A50 : UnknownGenRoot802D6A50 {
 char unknown04[16];
 UnknownGenRefMember unknown14;
 char unknown18[4];
 UnknownGenString unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject802D6A50(){unknown00=lbl_804D6BFC;}
};
extern "C" {
void *beGeneraterInfoWork_vtableRead(){
 UnknownGenObject802D6A50 object;
 object.unknown00=lbl_804D6BFC;
 object.unknown14.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

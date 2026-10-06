#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047617C[];
}
struct UnknownGenRoot8002A9D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002A9D4(){fn_8006665C(this);}
};
struct UnknownGenObject8002A9D4 : UnknownGenRoot8002A9D4 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject8002A9D4(){unknown00=lbl_8047617C;}
};
extern "C" {
void *fn_8002A9D4(){
 UnknownGenObject8002A9D4 object;
 object.unknown00=lbl_8047617C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

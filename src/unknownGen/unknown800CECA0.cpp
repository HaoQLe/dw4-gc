#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804921D4[];
}
struct UnknownGenRoot800CECA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CECA0(){fn_8006665C(this);}
};
struct UnknownGenObject800CECA0_0 : UnknownGenRoot800CECA0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CECA0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800CECA0 : UnknownGenObject800CECA0_0 {
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800CECA0(){unknown00=lbl_804921D4;}
};
extern "C" {
void *fn_800CECA0(){
 UnknownGenObject800CECA0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804921D4;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

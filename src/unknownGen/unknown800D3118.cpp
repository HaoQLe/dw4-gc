#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804939D0[];
}
struct UnknownGenRoot800D3118 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D3118(){fn_8006665C(this);}
};
struct UnknownGenObject800D3118_0 : UnknownGenRoot800D3118 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D3118_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D3118 : UnknownGenObject800D3118_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800D3118(){unknown00=lbl_804939D0;}
};
extern "C" {
void *fn_800D3118(){
 UnknownGenObject800D3118 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804939D0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

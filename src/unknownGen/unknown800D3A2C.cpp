#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_8049371C[];
}
struct UnknownGenRoot800D3A2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D3A2C(){fn_8006665C(this);}
};
struct UnknownGenObject800D3A2C_0 : UnknownGenRoot800D3A2C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D3A2C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D3A2C : UnknownGenObject800D3A2C_0 {
 char unknown0C[4];
 UnknownGenString unknown10;
 char unknown14[16];
 UnknownGenRefMember unknown24;
 char unknown28[16];
 inline ~UnknownGenObject800D3A2C(){unknown00=lbl_8049371C;}
};
extern "C" {
void *fn_800D3A2C(){
 UnknownGenObject800D3A2C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_8049371C;
 object.unknown10.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

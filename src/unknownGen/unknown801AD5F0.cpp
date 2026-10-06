#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B3644[];
extern char lbl_804B39E8[];
}
struct UnknownGenRoot801AD5F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AD5F0(){fn_8006665C(this);}
};
struct UnknownGenObject801AD5F0 : UnknownGenRoot801AD5F0 {
 char unknown04[20];
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[4];
 UnknownGenRefMember unknown24;
 char unknown28[48];
 inline ~UnknownGenObject801AD5F0(){unknown00=lbl_804B3644;}
};
extern "C" {
void *fn_801AD5F0(){
 UnknownGenObject801AD5F0 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B3644;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

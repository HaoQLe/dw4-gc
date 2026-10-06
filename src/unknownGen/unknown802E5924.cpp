#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D3BD8[];
extern char lbl_804DCDF0[];
}
struct UnknownGenRoot802E5924 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E5924(){fn_8006665C(this);}
};
struct UnknownGenObject802E5924_0 : UnknownGenRoot802E5924 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802E5924_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject802E5924 : UnknownGenObject802E5924_0 {
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 UnknownGenRefMember unknown34;
 UnknownGenRefMember unknown38;
 char unknown3C[4];
 inline ~UnknownGenObject802E5924(){unknown00=lbl_804D3BD8;}
};
extern "C" {
void *fn_802E5924(){
 UnknownGenObject802E5924 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804D3BD8;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown34.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

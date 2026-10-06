#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804DE34C[];
}
struct UnknownGenRoot802D5538 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D5538(){fn_8006665C(this);}
};
struct UnknownGenObject802D5538 : UnknownGenRoot802D5538 {
 char unknown04[28];
 UnknownGenString unknown20;
 char unknown24[12];
 UnknownGenRefMember unknown30;
 char unknown34[4];
 UnknownGenRefMember unknown38;
 char unknown3C[12];
 inline ~UnknownGenObject802D5538(){unknown00=lbl_804DE34C;}
};
extern "C" {
void *fn_802D5538(){
 UnknownGenObject802D5538 object;
 object.unknown00=lbl_804DE34C;
 object.unknown20.value=0;
 object.unknown30.value=0;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

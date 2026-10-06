#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B39E8[];
extern char lbl_804B3DCC[];
}
struct UnknownGenRoot801B4AA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4AA0(){fn_8006665C(this);}
};
struct UnknownGenObject801B4AA0 : UnknownGenRoot801B4AA0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[52];
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 inline ~UnknownGenObject801B4AA0(){unknown00=lbl_804B3DCC;}
};
extern "C" {
void *fn_801B4AA0(){
 UnknownGenObject801B4AA0 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B3DCC;
 object.unknown08.value=0;
 object.unknown40.value=0;
 object.unknown44.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

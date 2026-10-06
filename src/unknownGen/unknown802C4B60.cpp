#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804D9F7C[];
extern char lbl_804DBC50[];
}
struct UnknownGenRoot802C4B60 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C4B60(){fn_8006665C(this);}
};
struct UnknownGenObject802C4B60_0 : UnknownGenRoot802C4B60 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C4B60_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C4B60_1 : UnknownGenObject802C4B60_0 {
 inline ~UnknownGenObject802C4B60_1(){unknown00=lbl_804DBC50;}
};
struct UnknownGenObject802C4B60 : UnknownGenObject802C4B60_1 {
 char unknown0C[4];
 UnknownGenString unknown10;
 UnknownGenString unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[12];
 inline ~UnknownGenObject802C4B60(){unknown00=lbl_804D9F7C;}
};
extern "C" {
void *fn_802C4B60(){
 UnknownGenObject802C4B60 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804DBC50;
 object.unknown00=lbl_804D9F7C;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

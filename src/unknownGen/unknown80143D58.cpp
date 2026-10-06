#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A9BE8[];
extern char lbl_804A9C44[];
}
struct UnknownGenRoot80143D58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80143D58(){fn_8006665C(this);}
};
struct UnknownGenObject80143D58 : UnknownGenRoot80143D58 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenString unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject80143D58(){unknown00=lbl_804A9BE8;}
};
extern "C" {
void *fn_80143D58(){
 UnknownGenObject80143D58 object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9BE8;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

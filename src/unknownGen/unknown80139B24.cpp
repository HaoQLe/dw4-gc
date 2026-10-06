#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A4428[];
extern char lbl_804AA298[];
}
struct UnknownGenRoot80139B24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139B24(){fn_8006665C(this);}
};
struct UnknownGenObject80139B24_0 : UnknownGenRoot80139B24 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80139B24_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject80139B24 : UnknownGenObject80139B24_0 {
 UnknownGenString unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80139B24(){unknown00=lbl_804A4428;}
};
extern "C" {
void *fn_80139B24(){
 UnknownGenObject80139B24 object;
 object.unknown00=lbl_804AA298;
 object.unknown08.value=0;
 object.unknown00=lbl_804A4428;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80495AD8[];
extern char lbl_8049652C[];
extern char lbl_80496704[];
}
struct UnknownGenRoot801131E8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801131E8(){fn_8006665C(this);}
};
struct UnknownGenObject801131E8 : UnknownGenRoot801131E8 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 char unknown2C[4];
 inline ~UnknownGenObject801131E8(){unknown00=lbl_80496704;}
};
extern "C" {
void *fn_801131E8(){
 UnknownGenObject801131E8 object;
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_8049652C;
 object.unknown00=lbl_80496704;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

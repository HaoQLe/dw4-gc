#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804E613C[];
extern char lbl_804E732C[];
}
struct UnknownGenRoot8033764C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8033764C(){fn_8006665C(this);}
};
struct UnknownGenObject8033764C_0 : UnknownGenRoot8033764C {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[4];
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 inline ~UnknownGenObject8033764C_0(){unknown00=lbl_804E613C;}
};
struct UnknownGenObject8033764C : UnknownGenObject8033764C_0 {
 char unknown34[8];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 char unknown44[12];
 inline ~UnknownGenObject8033764C(){unknown00=lbl_804E732C;}
};
extern "C" {
void *fn_8033764C(){
 UnknownGenObject8033764C object;
 object.unknown00=lbl_804E613C;
 object.unknown24.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 object.unknown00=lbl_804E732C;
 object.unknown3C.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

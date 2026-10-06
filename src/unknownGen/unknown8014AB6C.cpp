#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804A8B3C[];
}
struct UnknownGenRoot8014AB6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014AB6C(){fn_8006665C(this);}
};
struct UnknownGenObject8014AB6C_0 : UnknownGenRoot8014AB6C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8014AB6C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8014AB6C : UnknownGenObject8014AB6C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject8014AB6C(){unknown00=lbl_804A8B3C;}
};
extern "C" {
void *fn_8014AB6C(){
 UnknownGenObject8014AB6C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804A8B3C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804A3E10[];
}
struct UnknownGenRoot8013719C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013719C(){fn_8006665C(this);}
};
struct UnknownGenObject8013719C : UnknownGenRoot8013719C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject8013719C(){unknown00=lbl_804A3E10;}
};
extern "C" {
void *fn_8013719C(){
 UnknownGenObject8013719C object;
 object.unknown00=lbl_804A3E10;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CCC54[];
}
struct UnknownGenRoot8028E17C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028E17C(){fn_8006665C(this);}
};
struct UnknownGenObject8028E17C : UnknownGenRoot8028E17C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8028E17C(){unknown00=lbl_804CCC54;}
};
extern "C" {
void *fn_8028E17C(){
 UnknownGenObject8028E17C object;
 object.unknown00=lbl_804CCC54;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

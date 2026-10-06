#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804763F0[];
}
struct UnknownGenRoot8002856C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002856C(){fn_8006665C(this);}
};
struct UnknownGenObject8002856C : UnknownGenRoot8002856C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8002856C(){unknown00=lbl_804763F0;}
};
extern "C" {
void *fn_8002856C(){
 UnknownGenObject8002856C object;
 object.unknown00=lbl_804763F0;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

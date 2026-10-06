#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CCDD4[];
}
struct UnknownGenRoot8028D52C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028D52C(){fn_8006665C(this);}
};
struct UnknownGenObject8028D52C : UnknownGenRoot8028D52C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8028D52C(){unknown00=lbl_804CCDD4;}
};
extern "C" {
void *fn_8028D52C(){
 UnknownGenObject8028D52C object;
 object.unknown00=lbl_804CCDD4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

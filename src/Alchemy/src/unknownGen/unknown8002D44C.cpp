#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804722E8[];
}
struct UnknownGenRoot8002D44C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002D44C(){fn_8006665C(this);}
};
struct UnknownGenObject8002D44C : UnknownGenRoot8002D44C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject8002D44C(){unknown00=lbl_804722E8;}
};
extern "C" {
void *fn_8002D44C(){
 UnknownGenObject8002D44C object;
 object.unknown00=lbl_804722E8;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

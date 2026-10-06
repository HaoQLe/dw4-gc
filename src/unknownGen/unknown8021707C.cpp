#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804BC7C8[];
}
struct UnknownGenRoot8021707C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8021707C(){fn_8006665C(this);}
};
struct UnknownGenObject8021707C_0 : UnknownGenRoot8021707C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8021707C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8021707C : UnknownGenObject8021707C_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8021707C(){unknown00=lbl_804BC7C8;}
};
extern "C" {
void *fn_8021707C(){
 UnknownGenObject8021707C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804BC7C8;
 object.unknown0C.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

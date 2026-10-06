#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_80493DD4[];
}
struct UnknownGenRoot8021732C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8021732C(){fn_8006665C(this);}
};
struct UnknownGenObject8021732C_0 : UnknownGenRoot8021732C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8021732C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8021732C : UnknownGenObject8021732C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject8021732C(){unknown00=lbl_80493DD4;}
};
extern "C" {
void *fn_8021732C(){
 UnknownGenObject8021732C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493DD4;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

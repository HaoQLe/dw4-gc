#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80471F20[];
extern char lbl_80472EF4[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot8002C848 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002C848(){fn_8006665C(this);}
};
struct UnknownGenObject8002C848_0 : UnknownGenRoot8002C848 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C848_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002C848_1 : UnknownGenObject8002C848_0 {
 inline ~UnknownGenObject8002C848_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject8002C848 : UnknownGenObject8002C848_1 {
 char unknown0C[52];
 inline ~UnknownGenObject8002C848(){unknown00=lbl_80471F20;}
};
extern "C" {
void *fn_8002C848(){
 UnknownGenObject8002C848 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_80471F20;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80471E78[];
extern char lbl_804727A4[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot8002C134 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002C134(){fn_8006665C(this);}
};
struct UnknownGenObject8002C134_0 : UnknownGenRoot8002C134 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C134_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002C134_1 : UnknownGenObject8002C134_0 {
 UnknownGenString unknown0C;
 char unknown10[24];
 UnknownGenString unknown28;
 inline ~UnknownGenObject8002C134_1(){unknown00=lbl_804727A4;}
};
struct UnknownGenObject8002C134 : UnknownGenObject8002C134_1 {
 char unknown2C[28];
 inline ~UnknownGenObject8002C134(){unknown00=lbl_80471E78;}
};
extern "C" {
void *fn_8002C134(){
 UnknownGenObject8002C134 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804727A4;
 object.unknown0C.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_80471E78;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

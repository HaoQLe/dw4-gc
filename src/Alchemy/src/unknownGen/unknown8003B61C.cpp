#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047043C[];
extern char lbl_804727A4[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot8003B61C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003B61C(){fn_8006665C(this);}
};
struct UnknownGenObject8003B61C_0 : UnknownGenRoot8003B61C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003B61C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8003B61C_1 : UnknownGenObject8003B61C_0 {
 UnknownGenString unknown0C;
 char unknown10[24];
 UnknownGenString unknown28;
 inline ~UnknownGenObject8003B61C_1(){unknown00=lbl_804727A4;}
};
struct UnknownGenObject8003B61C : UnknownGenObject8003B61C_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8003B61C(){unknown00=lbl_8047043C;}
};
extern "C" {
void *fn_8003B61C(){
 UnknownGenObject8003B61C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804727A4;
 object.unknown0C.value=0;
 object.unknown28.value=0;
 object.unknown00=lbl_8047043C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80475E9C[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot8002C61C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002C61C(){fn_8006665C(this);}
};
struct UnknownGenObject8002C61C_0 : UnknownGenRoot8002C61C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C61C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002C61C : UnknownGenObject8002C61C_0 {
 char unknown0C[20];
 inline ~UnknownGenObject8002C61C(){unknown00=lbl_80475E9C;}
};
extern "C" {
void *fn_8002C61C(){
 UnknownGenObject8002C61C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80475E9C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

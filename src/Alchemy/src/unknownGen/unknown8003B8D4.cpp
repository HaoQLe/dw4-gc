#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804704E4[];
extern char lbl_80472550[];
}
struct UnknownGenRoot8003B8D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003B8D4(){fn_8006665C(this);}
};
struct UnknownGenObject8003B8D4_0 : UnknownGenRoot8003B8D4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003B8D4_0(){unknown00=lbl_80472550;}
};
struct UnknownGenObject8003B8D4 : UnknownGenObject8003B8D4_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8003B8D4(){unknown00=lbl_804704E4;}
};
extern "C" {
void *fn_8003B8D4(){
 UnknownGenObject8003B8D4 object;
 object.unknown00=lbl_80472550;
 object.unknown08.value=0;
 object.unknown00=lbl_804704E4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

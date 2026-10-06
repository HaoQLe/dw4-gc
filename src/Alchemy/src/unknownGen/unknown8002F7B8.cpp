#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472550[];
}
struct UnknownGenRoot8002F7B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002F7B8(){fn_8006665C(this);}
};
struct UnknownGenObject8002F7B8 : UnknownGenRoot8002F7B8 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8002F7B8(){unknown00=lbl_80472550;}
};
extern "C" {
void *fn_8002F7B8(){
 UnknownGenObject8002F7B8 object;
 object.unknown00=lbl_80472550;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

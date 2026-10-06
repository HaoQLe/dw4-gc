#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
}
struct UnknownGenRoot80029CA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80029CA8(){fn_8006665C(this);}
};
struct UnknownGenObject80029CA8 : UnknownGenRoot80029CA8 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80029CA8(){unknown00=lbl_8047650C;}
};
extern "C" {
void *fn_80029CA8(){
 UnknownGenObject80029CA8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

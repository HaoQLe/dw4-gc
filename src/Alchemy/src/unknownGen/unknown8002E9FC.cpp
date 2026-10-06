#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80472460[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot8002E9FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002E9FC(){fn_8006665C(this);}
};
struct UnknownGenObject8002E9FC_0 : UnknownGenRoot8002E9FC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002E9FC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002E9FC : UnknownGenObject8002E9FC_0 {
 char unknown0C[20];
 inline ~UnknownGenObject8002E9FC(){unknown00=lbl_80472460;}
};
extern "C" {
void *fn_8002E9FC(){
 UnknownGenObject8002E9FC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

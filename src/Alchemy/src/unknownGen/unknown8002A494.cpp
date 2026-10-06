#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804718B0[];
extern char lbl_80472460[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot8002A494 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002A494(){fn_8006665C(this);}
};
struct UnknownGenObject8002A494_0 : UnknownGenRoot8002A494 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002A494_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002A494_1 : UnknownGenObject8002A494_0 {
 inline ~UnknownGenObject8002A494_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject8002A494 : UnknownGenObject8002A494_1 {
 char unknown0C[20];
 inline ~UnknownGenObject8002A494(){unknown00=lbl_804718B0;}
};
extern "C" {
void *fn_8002A494(){
 UnknownGenObject8002A494 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804718B0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

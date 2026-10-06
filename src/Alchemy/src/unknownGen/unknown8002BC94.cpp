#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80471B6C[];
extern char lbl_80472460[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot8002BC94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002BC94(){fn_8006665C(this);}
};
struct UnknownGenObject8002BC94_0 : UnknownGenRoot8002BC94 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002BC94_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002BC94_1 : UnknownGenObject8002BC94_0 {
 inline ~UnknownGenObject8002BC94_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject8002BC94 : UnknownGenObject8002BC94_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8002BC94(){unknown00=lbl_80471B6C;}
};
extern "C" {
void *fn_8002BC94(){
 UnknownGenObject8002BC94 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_80471B6C;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

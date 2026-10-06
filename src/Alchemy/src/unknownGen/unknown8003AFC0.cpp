#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80470110[];
extern char lbl_80470C94[];
extern char lbl_8047650C[];
}
struct UnknownGenRoot8003AFC0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003AFC0(){fn_8006665C(this);}
};
struct UnknownGenObject8003AFC0_0 : UnknownGenRoot8003AFC0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8003AFC0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8003AFC0_1 : UnknownGenObject8003AFC0_0 {
 inline ~UnknownGenObject8003AFC0_1(){unknown00=lbl_80470C94;}
};
struct UnknownGenObject8003AFC0 : UnknownGenObject8003AFC0_1 {
 char unknown0C[884];
 UnknownGenRefMember unknown380;
 char unknown384[12];
 inline ~UnknownGenObject8003AFC0(){unknown00=lbl_80470110;}
};
extern "C" {
void *fn_8003AFC0(){
 UnknownGenObject8003AFC0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80470C94;
 object.unknown00=lbl_80470110;
 object.unknown380.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

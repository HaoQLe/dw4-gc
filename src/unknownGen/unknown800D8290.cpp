#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80473000[];
extern char lbl_80491608[];
extern char lbl_80492CD4[];
extern char lbl_80493EEC[];
}
struct UnknownGenRoot800D8290 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D8290(){fn_8006665C(this);}
};
struct UnknownGenObject800D8290_0 : UnknownGenRoot800D8290 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject800D8290_0(){unknown00=lbl_80473000;}
};
struct UnknownGenObject800D8290_1 : UnknownGenObject800D8290_0 {
 inline ~UnknownGenObject800D8290_1(){unknown00=lbl_80493EEC;}
};
struct UnknownGenObject800D8290_2 : UnknownGenObject800D8290_1 {
 inline ~UnknownGenObject800D8290_2(){unknown00=lbl_80492CD4;}
};
struct UnknownGenObject800D8290 : UnknownGenObject800D8290_2 {
 char unknown14[140];
 inline ~UnknownGenObject800D8290(){unknown00=lbl_80491608;}
};
extern "C" {
void *fn_800D8290(){
 UnknownGenObject800D8290 object;
 object.unknown00=lbl_80473000;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_80493EEC;
 object.unknown00=lbl_80492CD4;
 object.unknown00=lbl_80491608;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

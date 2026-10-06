#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_80473000[];
extern char lbl_80491580[];
extern char lbl_80492D58[];
extern char lbl_80493EEC[];
}
struct UnknownGenRoot800D7B98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D7B98(){fn_8006665C(this);}
};
struct UnknownGenObject800D7B98_0 : UnknownGenRoot800D7B98 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject800D7B98_0(){unknown00=lbl_80473000;}
};
struct UnknownGenObject800D7B98_1 : UnknownGenObject800D7B98_0 {
 inline ~UnknownGenObject800D7B98_1(){unknown00=lbl_80493EEC;}
};
struct UnknownGenObject800D7B98_2 : UnknownGenObject800D7B98_1 {
 inline ~UnknownGenObject800D7B98_2(){unknown00=lbl_80492D58;}
};
struct UnknownGenObject800D7B98 : UnknownGenObject800D7B98_2 {
 char unknown14[28];
 inline ~UnknownGenObject800D7B98(){unknown00=lbl_80491580;}
};
extern "C" {
void *fn_800D7B98(){
 UnknownGenObject800D7B98 object;
 object.unknown00=lbl_80473000;
 object.unknown08.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_80493EEC;
 object.unknown00=lbl_80492D58;
 object.unknown00=lbl_80491580;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

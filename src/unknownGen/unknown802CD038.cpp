#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804D8908[];
}
struct UnknownGenRoot802CD038 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802CD038(){fn_8006665C(this);}
};
struct UnknownGenObject802CD038_0 : UnknownGenRoot802CD038 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802CD038_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802CD038_1 : UnknownGenObject802CD038_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject802CD038_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject802CD038_2 : UnknownGenObject802CD038_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802CD038_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject802CD038 : UnknownGenObject802CD038_2 {
 char unknown20[4];
 UnknownGenRefMember unknown24;
 char unknown28[24];
 inline ~UnknownGenObject802CD038(){unknown00=lbl_804D8908;}
};
extern "C" {
void *fn_802CD038(){
 UnknownGenObject802CD038 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804D8908;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

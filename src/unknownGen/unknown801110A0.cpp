#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8006665C(void *);
void fn_801113D0();
extern char lbl_8047650C[];
extern char lbl_8049640C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern void *lbl_805621F4;
extern void *lbl_80563710;
}
struct UnknownGenRoot80111118 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80111118(){fn_8006665C(this);}
};
struct UnknownGenObject80111118_0 : UnknownGenRoot80111118 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80111118_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80111118_1 : UnknownGenObject80111118_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80111118_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject80111118_2 : UnknownGenObject80111118_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject80111118_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject80111118 : UnknownGenObject80111118_2 {
 char unknown20[8];
 inline ~UnknownGenObject80111118(){unknown00=lbl_8049640C;}
};
extern "C" {
void *fn_801110A0(){
 if(!lbl_80563710) lbl_80563710=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563710;
}
void *igGuiComponentNode_getMeta(){
 if(!lbl_80563710 || !(reinterpret_cast<unsigned int *>(lbl_80563710)[0x24/4]&4)) fn_801113D0();
 return lbl_80563710;
}
void *igGuiComponentNode_vtableRead(){
 UnknownGenObject80111118 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_8049640C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

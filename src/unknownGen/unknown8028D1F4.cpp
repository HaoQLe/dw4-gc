#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804CCE30[];
}
struct UnknownGenRoot8028D1F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028D1F4(){fn_8006665C(this);}
};
struct UnknownGenObject8028D1F4_0 : UnknownGenRoot8028D1F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8028D1F4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8028D1F4_1 : UnknownGenObject8028D1F4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject8028D1F4_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject8028D1F4_2 : UnknownGenObject8028D1F4_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject8028D1F4_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject8028D1F4 : UnknownGenObject8028D1F4_2 {
 UnknownGenRefMember unknown20;
 char unknown24[60];
 inline ~UnknownGenObject8028D1F4(){unknown00=lbl_804CCE30;}
};
extern "C" {
void *fn_8028D1F4(){
 UnknownGenObject8028D1F4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804CCE30;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

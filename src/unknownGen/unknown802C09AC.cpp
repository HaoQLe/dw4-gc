#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804DABA4[];
}
struct UnknownGenRoot802C09AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802C09AC(){fn_8006665C(this);}
};
struct UnknownGenObject802C09AC_0 : UnknownGenRoot802C09AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802C09AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802C09AC_1 : UnknownGenObject802C09AC_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject802C09AC_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject802C09AC_2 : UnknownGenObject802C09AC_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject802C09AC_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject802C09AC : UnknownGenObject802C09AC_2 {
 char unknown20[8];
 inline ~UnknownGenObject802C09AC(){unknown00=lbl_804DABA4;}
};
extern "C" {
void *fn_802C09AC(){
 UnknownGenObject802C09AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804DABA4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

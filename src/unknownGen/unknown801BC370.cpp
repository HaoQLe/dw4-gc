#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B4038[];
extern char lbl_804B459C[];
}
struct UnknownGenRoot801BC370 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BC370(){fn_8006665C(this);}
};
struct UnknownGenObject801BC370_0 : UnknownGenRoot801BC370 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BC370_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BC370_1 : UnknownGenObject801BC370_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BC370_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BC370 : UnknownGenObject801BC370_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BC370(){unknown00=lbl_804B459C;}
};
extern "C" {
void *fn_801BC370(){
 UnknownGenObject801BC370 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B459C;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

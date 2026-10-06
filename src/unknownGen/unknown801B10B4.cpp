#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B3AB8[];
}
struct UnknownGenRoot801B10B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B10B4(){fn_8006665C(this);}
};
struct UnknownGenObject801B10B4_0 : UnknownGenRoot801B10B4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B10B4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B10B4 : UnknownGenObject801B10B4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801B10B4(){unknown00=lbl_804B3AB8;}
};
extern "C" {
void *fn_801B10B4(){
 UnknownGenObject801B10B4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B3AB8;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

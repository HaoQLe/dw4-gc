#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804B59D8[];
}
struct UnknownGenRoot801CD4F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CD4F4(){fn_8006665C(this);}
};
struct UnknownGenObject801CD4F4_0 : UnknownGenRoot801CD4F4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801CD4F4_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801CD4F4 : UnknownGenObject801CD4F4_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject801CD4F4(){unknown00=lbl_804B59D8;}
};
extern "C" {
void *fn_801CD4F4(){
 UnknownGenObject801CD4F4 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B59D8;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

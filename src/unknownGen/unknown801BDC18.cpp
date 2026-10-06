#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B7684[];
}
struct UnknownGenRoot801BDC18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BDC18(){fn_8006665C(this);}
};
struct UnknownGenObject801BDC18 : UnknownGenRoot801BDC18 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801BDC18(){unknown00=lbl_804B7684;}
};
extern "C" {
void *fn_801BDC18(){
 UnknownGenObject801BDC18 object;
 object.unknown00=lbl_804B7684;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B5C7C[];
}
struct UnknownGenRoot801CCB18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CCB18(){fn_8006665C(this);}
};
struct UnknownGenObject801CCB18 : UnknownGenRoot801CCB18 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801CCB18(){unknown00=lbl_804B5C7C;}
};
extern "C" {
void *fn_801CCB18(){
 UnknownGenObject801CCB18 object;
 object.unknown00=lbl_804B5C7C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

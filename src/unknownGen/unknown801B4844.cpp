#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B8658[];
}
struct UnknownGenRoot801B4844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4844(){fn_8006665C(this);}
};
struct UnknownGenObject801B4844 : UnknownGenRoot801B4844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801B4844(){unknown00=lbl_804B8658;}
};
extern "C" {
void *fn_801B4844(){
 UnknownGenObject801B4844 object;
 object.unknown00=lbl_804B8658;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

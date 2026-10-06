#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B8120[];
extern char lbl_804B817C[];
}
struct UnknownGenRoot801B7D58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B7D58(){fn_8006665C(this);}
};
struct UnknownGenObject801B7D58 : UnknownGenRoot801B7D58 {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801B7D58(){unknown00=lbl_804B8120;}
};
extern "C" {
void *fn_801B7D58(){
 UnknownGenObject801B7D58 object;
 object.unknown00=lbl_804B817C;
 object.unknown00=lbl_804B8120;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047A61C[];
extern char lbl_8047D514[];
}
struct UnknownGenRoot800ABD34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800ABD34(){fn_8006665C(this);}
};
struct UnknownGenObject800ABD34 : UnknownGenRoot800ABD34 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800ABD34(){unknown00=lbl_8047A61C;}
};
extern "C" {
void *fn_800ABD34(){
 UnknownGenObject800ABD34 object;
 object.unknown00=lbl_8047D514;
 object.unknown00=lbl_8047A61C;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

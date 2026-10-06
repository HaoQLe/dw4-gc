#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047D4B8[];
}
struct UnknownGenRoot800BAEA8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800BAEA8(){fn_8006665C(this);}
};
struct UnknownGenObject800BAEA8 : UnknownGenRoot800BAEA8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject800BAEA8(){unknown00=lbl_8047D4B8;}
};
extern "C" {
void *fn_800BAEA8(){
 UnknownGenObject800BAEA8 object;
 object.unknown00=lbl_8047D4B8;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

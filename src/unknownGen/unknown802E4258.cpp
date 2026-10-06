#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804D4110[];
extern char lbl_804DCDF0[];
}
struct UnknownGenRoot802E4258 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802E4258(){fn_8006665C(this);}
};
struct UnknownGenObject802E4258_0 : UnknownGenRoot802E4258 {
 char unknown04[36];
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject802E4258_0(){unknown00=lbl_804DCDF0;}
};
struct UnknownGenObject802E4258 : UnknownGenObject802E4258_0 {
 char unknown2C[4];
 inline ~UnknownGenObject802E4258(){unknown00=lbl_804D4110;}
};
extern "C" {
void *fn_802E4258(){
 UnknownGenObject802E4258 object;
 object.unknown00=lbl_804DCDF0;
 object.unknown28.value=0;
 object.unknown00=lbl_804D4110;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

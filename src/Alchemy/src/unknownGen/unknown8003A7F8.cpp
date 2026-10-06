#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8046FAFC[];
extern char lbl_8046FE98[];
}
struct UnknownGenRoot8003A7F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A7F8(){fn_8006665C(this);}
};
struct UnknownGenObject8003A7F8_0 : UnknownGenRoot8003A7F8 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8003A7F8_0(){unknown00=lbl_8046FAFC;}
};
struct UnknownGenObject8003A7F8 : UnknownGenObject8003A7F8_0 {
 char unknown10[96];
 inline ~UnknownGenObject8003A7F8(){unknown00=lbl_8046FE98;}
};
extern "C" {
void *fn_8003A7F8(){
 UnknownGenObject8003A7F8 object;
 object.unknown00=lbl_8046FAFC;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown00=lbl_8046FE98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

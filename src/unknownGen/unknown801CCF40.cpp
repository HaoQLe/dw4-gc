#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804B5B58[];
}
struct UnknownGenRoot801CCF40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801CCF40(){fn_8006665C(this);}
};
struct UnknownGenObject801CCF40 : UnknownGenRoot801CCF40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801CCF40(){unknown00=lbl_804B5B58;}
};
extern "C" {
void *fn_801CCF40(){
 UnknownGenObject801CCF40 object;
 object.unknown00=lbl_804B5B58;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

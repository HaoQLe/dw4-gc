#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_804CB6C8[];
extern char lbl_804CBF40[];
}
struct UnknownGenRoot80285844 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285844(){fn_8006665C(this);}
};
struct UnknownGenObject80285844 : UnknownGenRoot80285844 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject80285844(){unknown00=lbl_804CBF40;}
};
extern "C" {
void *fn_80285844(){
 UnknownGenObject80285844 object;
 object.unknown00=lbl_804CB6C8;
 object.unknown00=lbl_804CBF40;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

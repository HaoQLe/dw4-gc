#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void fn_80071108(void *);
void *fn_80071144(void *,void *);
void igShortMetaField_register();
extern char lbl_80471914[];
extern char lbl_80476848[];
extern void *igShortMetaField_meta;
void igShortMetaField_arkRegister();
}
struct UnknownGenRoot80025B04 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80025B04(){fn_80071108(this);}
};
struct UnknownGenObject80025B04_0 : UnknownGenRoot80025B04 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80025B04_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80025B04 : UnknownGenObject80025B04_0 {
 char unknown10[48];
 inline ~UnknownGenObject80025B04(){unknown00=lbl_80476848;}
};
extern "C" {
void *fn_80025B04(){
 UnknownGenObject80025B04 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EBC8(void *);
void *fn_8003EC04(void *,void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void igBoolMetaField_register();
extern char lbl_80471914[];
extern char lbl_80473E30[];
extern void *igBoolMetaField_meta;
extern void *lbl_805621F4;
void igBoolMetaField_arkRegister();
}
struct UnknownGenRoot80038778 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80038778(){fn_8003EBC8(this);}
};
struct UnknownGenObject80038778_0 : UnknownGenRoot80038778 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80038778_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80038778 : UnknownGenObject80038778_0 {
 char unknown10[48];
 inline ~UnknownGenObject80038778(){unknown00=lbl_80473E30;}
};
extern "C" {
void *fn_80038778(){
 UnknownGenObject80038778 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igBoolMetaField_arkRegister(){
 meta_registerNow((int)igBoolMetaField_register);
}
}
#pragma pop

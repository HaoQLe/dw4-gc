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
void *igShortArrayMetaField_virtual54(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  igShortMetaField_arkRegister();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_80071144(object,a);
 return object;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800535B8(void *);
void *fn_800535F4(void *,void *);
void meta_registerNow(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void igIntMetaField_register();
extern char lbl_80471914[];
extern char lbl_80475B60[];
extern void *igIntMetaField_meta;
void igIntMetaField_arkRegister();
}
struct UnknownGenRoot8002E308 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002E308(){fn_800535B8(this);}
};
struct UnknownGenObject8002E308_0 : UnknownGenRoot8002E308 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002E308_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002E308 : UnknownGenObject8002E308_0 {
 char unknown10[48];
 inline ~UnknownGenObject8002E308(){unknown00=lbl_80475B60;}
};
extern "C" {
void *igIntArrayMetaField_virtual54(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  igIntMetaField_arkRegister();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_800535F4(object,a);
 return object;
}
}
#pragma pop

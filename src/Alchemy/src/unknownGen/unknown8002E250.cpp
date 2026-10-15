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
void igIntMetaField_registerNow();
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
  igIntMetaField_registerNow();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_800535F4(object,a);
 return object;
}
void *igIntMetaField_getMeta(){
 if(!igIntMetaField_meta || !(reinterpret_cast<unsigned int *>(igIntMetaField_meta)[0x24/4]&4)) igIntMetaField_registerNow();
 return igIntMetaField_meta;
}
void *fn_8002E308(){
 UnknownGenObject8002E308 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIntMetaField_registerNow(){
 meta_registerNow((int)igIntMetaField_register);
}
}
#pragma pop

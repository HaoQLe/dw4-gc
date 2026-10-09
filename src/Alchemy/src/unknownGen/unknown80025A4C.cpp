#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void fn_80071108(void *);
void *fn_80071144(void *,void *);
void igShortMetaField_register();
extern char lbl_80471914[];
extern char lbl_80476848[];
extern void *lbl_805615D8;
void fn_80025B8C();
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
  fn_80025B8C();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_80071144(object,a);
 return object;
}
void *igShortMetaField_getMeta(){
 if(!lbl_805615D8 || !(reinterpret_cast<unsigned int *>(lbl_805615D8)[0x24/4]&4)) fn_80025B8C();
 return lbl_805615D8;
}
void *fn_80025B04(){
 UnknownGenObject80025B04 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80025B8C(){
 fn_80066188((int)igShortMetaField_register);
}
}
#pragma pop

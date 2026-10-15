#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003FF90(void *);
void *fn_8003FFCC(void *,void *);
void meta_registerNow(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void igCharMetaField_register();
extern char lbl_80471914[];
extern char lbl_80473F24[];
extern void *igCharMetaField_meta;
void igCharMetaField_arkRegister();
}
struct UnknownGenRoot80037C78 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80037C78(){fn_8003FF90(this);}
};
struct UnknownGenObject80037C78_0 : UnknownGenRoot80037C78 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80037C78_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80037C78 : UnknownGenObject80037C78_0 {
 char unknown10[48];
 inline ~UnknownGenObject80037C78(){unknown00=lbl_80473F24;}
};
extern "C" {
void *igCharArrayMetaField_virtual54(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  igCharMetaField_arkRegister();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_8003FFCC(object,a);
 return object;
}
}
#pragma pop

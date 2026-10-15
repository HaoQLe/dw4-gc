#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void *fn_80034048();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igMetaField_register();
extern char lbl_80467774[];
extern char igCompoundMetaField_className[];
extern char lbl_8055D660[4];
extern char lbl_8055D664[4];
extern char lbl_8055D668[4];
extern char lbl_8055D66C[4];
extern void *igCompoundMetaField_meta;
extern void *lbl_80561E14;
extern void *lbl_805621F4;
void *igCompoundMetaField_getMeta();
void igCompoundMetaField_registerNow();
void igCompoundMetaField_register();
void *igCompoundMetaField_getMetaCall();
void igCompoundMetaField_fieldInit();
}
extern "C" {
void *igCompoundMetaField_getMeta(){
 if(!igCompoundMetaField_meta || !(reinterpret_cast<unsigned int *>(igCompoundMetaField_meta)[0x24/4]&4)) igCompoundMetaField_registerNow();
 return igCompoundMetaField_meta;
}
void igCompoundMetaField_registerNow(){
 meta_registerNow((int)igCompoundMetaField_register);
}
void igCompoundMetaField_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igCompoundMetaField_meta,(int)igMetaField_register,(int)fn_80021D70,(int)igCompoundMetaField_getMetaCall,(int)igCompoundMetaField_className,56,0,(int)igCompoundMetaField_fieldInit,0,(int)lbl_80467774);
}
void *igCompoundMetaField_getMetaCall(){return igCompoundMetaField_getMeta();}
void igCompoundMetaField_fieldInit(){
 void *value0=igCompoundMetaField_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055D660,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80034048();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_8055D664,lbl_8055D668,lbl_8055D66C,value1);
}
void fn_80037A54(){
 if(!lbl_80561E14){
  void *object=(lbl_80561E14=meta_createInstance(igCompoundMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E14));
   reinterpret_cast<short *>(lbl_80561E14)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E14);
  }
 }
}
int fn_80037AEC(){return 1;}
}
#pragma pop

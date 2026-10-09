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
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void igMetaField_register();
extern char lbl_80467774[];
extern char lbl_80467780[];
extern char lbl_8055D660[4];
extern char lbl_8055D664[4];
extern char lbl_8055D668[4];
extern char lbl_8055D66C[4];
extern void *lbl_80561E10;
extern void *lbl_80561E14;
extern void *lbl_805621F4;
void *igCompoundMetaField_getMeta();
void fn_80037910();
void igCompoundMetaField_register();
void *igCompoundMetaField_getMetaCall();
void igCompoundMetaField_fieldInit();
}
extern "C" {
void *igCompoundMetaField_getMeta(){
 if(!lbl_80561E10 || !(reinterpret_cast<unsigned int *>(lbl_80561E10)[0x24/4]&4)) fn_80037910();
 return lbl_80561E10;
}
void fn_80037910(){
 fn_80066188((int)igCompoundMetaField_register);
}
void igCompoundMetaField_register(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_80561E10,(int)igMetaField_register,(int)fn_80021D70,(int)igCompoundMetaField_getMetaCall,(int)lbl_80467780,56,0,(int)igCompoundMetaField_fieldInit,0,(int)lbl_80467774);
}
void *igCompoundMetaField_getMetaCall(){return igCompoundMetaField_getMeta();}
void igCompoundMetaField_fieldInit(){
 void *value0=lbl_80561E10;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D660,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80034048();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055D664,lbl_8055D668,lbl_8055D66C,value1);
}
void fn_80037A54(){
 if(!lbl_80561E14){
  void *object=(lbl_80561E14=fn_8006546C(lbl_80561E10,fn_800607F4(lbl_805621F4)));
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

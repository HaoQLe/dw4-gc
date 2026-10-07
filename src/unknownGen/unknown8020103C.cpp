#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80065704(void *,int);
void fn_801D4F14(void *,void *);
void fn_801D4FBC(void *,void *);
void fn_801D5190(void *,void *);
void fn_801D524C(void *,void *);
void fn_801EAD50(void *);
void fn_80200720();
void fn_8020136C(void *,void *);
void fn_802062E0(void *,int,int);
void fn_802063E8(void *);
extern void *lbl_80565884;
extern void *lbl_80565888;
extern void *lbl_8056588C;
extern void *lbl_80565890;
extern void *lbl_8056589C;
extern void *lbl_805658A0;
extern void *lbl_805658A4;
extern void *lbl_805658A8;
extern void *lbl_805658AC;
extern void *lbl_805658BC;
extern void *lbl_805658C0;
extern void *lbl_805658C8;
extern void *lbl_805658CC;
extern void *lbl_80565904;
extern void *lbl_80565908;
extern void *lbl_8056590C;
extern void *lbl_80565910;
extern void *lbl_80565914;
}
class UnknownGenV8020103C_0 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
 virtual void s20();
 virtual void s24();
 virtual void s28();
 virtual void s2C();
 virtual void s30();
 virtual void s34();
 virtual void s38();
 virtual void s3C();
 virtual void s40();
 virtual void s44();
 virtual void s48();
 virtual void s4C();
 virtual void s50();
 virtual void s54();
 virtual void * s58();
};
extern "C" {
void fn_8020103C(int p0){
 void *value4;
 void *value5;
 void *value1;
 void *value3;
 value4=reinterpret_cast<UnknownGenV8020103C_0 *>((void *)p0)->s58();
 value5=fn_80065704(value4,1);
 if((int)(int)value5==0){
  fn_80200720();
  void *value0=lbl_80565904;
  if(value0){
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
    lbl_80565904=(void *)0;
   }
  }
  void *value2=lbl_80565908;
  if(value2){
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
    lbl_80565908=(void *)0;
   }
  }
 }
 fn_801EAD50((void *)p0);
}
void fn_802010F8(int p0,int p1){
 void *value0;
 fn_802062E0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+68),0,0);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+52);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136)==1){
  fn_801D5190(value0,lbl_8056590C);
  fn_801D5190(value0,lbl_80565910);
  fn_801D5190(value0,lbl_80565914);
  fn_801D4F14(value0,lbl_805658A4);
 } else {
  fn_801D4F14(value0,lbl_805658A0);
 }
 fn_801D5190(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+188));
 fn_801D5190(value0,lbl_80565884);
 fn_801D5190(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+184));
 fn_801D5190(value0,lbl_805658BC);
 fn_801D5190(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+104));
 fn_801D5190(value0,lbl_805658C8);
 fn_801D4F14(value0,lbl_8056589C);
 fn_801D5190(value0,lbl_80565888);
 fn_801D5190(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+164));
 fn_801D5190(value0,lbl_805658C0);
 fn_801D5190(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+100));
 fn_801D5190(value0,lbl_805658CC);
 fn_801D5190(value0,lbl_8056588C);
 fn_801D4F14(value0,lbl_805658A8);
 fn_801D5190(value0,lbl_80565890);
 fn_801D4F14(value0,lbl_805658AC);
 fn_8020136C((void *)p0,(void *)p1);
 fn_801D4FBC(value0,lbl_805658AC);
 fn_801D524C(value0,lbl_80565890);
 fn_801D4FBC(value0,lbl_805658A8);
 fn_801D524C(value0,lbl_8056588C);
 fn_801D524C(value0,lbl_805658CC);
 fn_801D524C(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+100));
 fn_801D524C(value0,lbl_805658C0);
 fn_801D524C(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+164));
 fn_801D524C(value0,lbl_80565888);
 fn_801D4FBC(value0,lbl_8056589C);
 fn_801D524C(value0,lbl_805658C8);
 fn_801D524C(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+104));
 fn_801D524C(value0,lbl_805658BC);
 fn_801D524C(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+184));
 fn_801D524C(value0,lbl_80565884);
 fn_801D524C(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+188));
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136)==1){
  fn_801D4FBC(value0,lbl_805658A4);
  fn_801D524C(value0,lbl_80565914);
  fn_801D524C(value0,lbl_80565910);
  fn_801D524C(value0,lbl_8056590C);
 } else {
  fn_801D4FBC(value0,lbl_805658A0);
 }
 fn_802063E8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+68));
}
}
#pragma pop

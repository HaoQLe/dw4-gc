#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053F28(void *);
void *fn_80054094(void *,void *);
void *fn_80054140(int);
void *fn_80188BA4(void *);
void *fn_80188C0C(void *,int);
void *fn_80188CAC(void *,void *);
void fn_80188CD0(void *);
extern void *lbl_80562140;
extern void *lbl_805644E0;
extern void *lbl_80564714;
extern void *lbl_80564BC0;
}
extern "C" {
void *fn_8015B954(int p0){
 void *value2;
 void *value3;
 void *value1;
 void *value4;
 void *value5;
 void *value6;
 void *value0=lbl_805644E0;
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+28);
 if(!value1){
  value3=(void *)0;
 } else {
  if(!lbl_80562140){
   value4=fn_80054140(16);
   value2=value4;
   if((int)(int)value4!=0){
    value5=fn_80053F28(value4);
    value2=value5;
   }
   lbl_80562140=value2;
  }
  value6=fn_80054094(lbl_80562140,value1);
  value3=value6;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value3;
 return value3;
}
void *fn_8015B9D4(){return lbl_80564BC0;}
void fn_8015B9DC(int p0){
 void *local0;
 fn_80188BA4(&local0);
 fn_80188CD0(&local0);
 fn_80188CAC((void *)p0,&local0);
 fn_80188C0C(&local0,-1);
}
void *igCollapseNodeForTransform_virtual7C(){return lbl_80564714;}
}
#pragma pop

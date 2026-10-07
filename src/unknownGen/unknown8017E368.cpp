#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053F28(void *);
void *fn_80054094(void *,void *);
void *fn_80054140(int);
extern void *lbl_80562140;
}
extern "C" {
void *fn_8017E368(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 if((int)p1==0){
  value1=(void *)0;
 } else {
  if(!lbl_80562140){
   value2=fn_80054140(16);
   value0=value2;
   if((int)(int)value2!=0){
    value3=fn_80053F28(value2);
    value0=value3;
   }
   lbl_80562140=value0;
  }
  value4=fn_80054094(lbl_80562140,(void *)p1);
  value1=value4;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value1;
 return (void *)p0;
}
}
#pragma pop

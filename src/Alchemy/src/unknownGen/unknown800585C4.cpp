#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800693C4(void *,void *,int);
void *fn_800695CC(void *,void *,void *);
extern void *lbl_80561748;
extern void *lbl_80562150;
}
extern "C" {
void *fn_800585C4(int p0,int p1,int p2){
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)0;
 void *value0=lbl_80562150;
 if(value0){
  value1=fn_800695CC(value0,lbl_80561748,(void *)p0);
  if(value1){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+12);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+16);
  }
  return value1;
 } else {
  return value0;
 }
}
void fn_80058634(int p0){
 void *value1;
 void *value0=lbl_80562150;
 if(value0){
  value1=fn_800695CC(value0,lbl_80561748,(void *)p0);
  if((int)(int)value1!=0){
   fn_800693C4(lbl_80562150,value1,0);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop

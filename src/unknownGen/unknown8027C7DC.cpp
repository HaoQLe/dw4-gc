#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8027998C(void *,void *,void *);
void *fn_8027C414(void *,void *);
void *fn_8027C75C(void *);
extern char lbl_804CA5C4[];
}
extern "C" {
void fn_8027C7DC(int p0,int p1,int p2){
 void *value0;
 void *value1;
 value0=fn_8027C75C((void *)p0);
 if((int)(int)value0>=1){
  fn_8027998C((void *)p0,lbl_804CA5C4,(reinterpret_cast<char *>((void *)p1)+20));
 } else {
  if((int)(int)value0==-1){
   value1=fn_8027C414(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40),(void *)p1);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+4)=value1;
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop

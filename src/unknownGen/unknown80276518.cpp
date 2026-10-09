#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276F34(void *,int);
void fn_80276F5C(void *,int,void *);
}
extern "C" {
void *fn_80276518(int p0,int p1,int p2,int p3,int p4,int p5){
 switch((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)){
 case 1:
  fn_80276F5C((void *)p0,11,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4));
  break;
 case 0:
  fn_80276F5C((void *)p0,12,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4));
  break;
 case 2:
  fn_80276F34((void *)p0,13);
  break;
 case 3:
  return (void *)0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=(void *)3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+8)=(void *)-1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(void *)-1;
 return (void *)1;
}
}
#pragma pop

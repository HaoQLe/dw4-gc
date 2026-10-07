#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80278B88(void *);
void fn_8027BD18(void *,void *,int);
}
extern "C" {
void fn_80278BD4(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+28)=(void *)p2;
 void *value0=fn_80278B88((void *)p1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96)+(int)value0);
}
void fn_80278C14(int p0,int p1){
 void *value0;
 void *value2;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+28);
 if((int)(int)value0>0){
  value2=fn_80278B88((void *)p1);
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)(int)((int)value1-(int)value2);
 }
 fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+24),0);
 fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+56),0);
 fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8),0);
 fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0),0);
 fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16),0);
 fn_8027BD18((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+44),0);
 fn_8027BD18((void *)p0,(void *)p1,0);
}
void fn_80278CD8(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96)-(((*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+14)+-1)<<4)+32));
 fn_8027BD18((void *)p0,(void *)p1,0);
}
}
#pragma pop

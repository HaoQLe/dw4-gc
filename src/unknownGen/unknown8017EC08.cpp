#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801887D4(void *,void *,void *,void *);
extern void *lbl_80564034;
extern void *lbl_80564038;
extern void *lbl_80564BC0;
}
extern "C" {
void *fn_8017EC08(int p0){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 if(!value0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
void fn_8017EC2C(){}
void fn_8017EC30(int p0,int p1){
 void *local1;
 void *local0;
 fn_801887D4(&local1,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_80564034)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
 fn_801887D4(&local0,(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_80564038)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40));
}
void *fn_8017EC90(){return lbl_80564BC0;}
}
#pragma pop

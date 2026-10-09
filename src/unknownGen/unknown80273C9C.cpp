#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8027C000(void *,...);
void fn_8028185C(void *,void *);
extern char lbl_804167C8[];
extern char lbl_804C9BA0[];
}
extern "C" {
void fn_80273C9C(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 fn_8028185C((void *)p0,(void *)p1);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+-16);
 switch((int)(int)value1){
 case 4:
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+-8);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(void *)p1;
  return;
 case 0:
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+-8);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+0)=(void *)p1;
  return;
 default:
  fn_8027C000((void *)p0,lbl_804C9BA0,(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(lbl_804167C8)+((int)value1<<2)));
  return;
 }
}
}
#pragma pop

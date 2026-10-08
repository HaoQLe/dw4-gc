#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80276234(void *,void *);
void fn_8027992C(void *,void *,int,void *);
void fn_8027C67C(void *,void *);
void fn_8027C710(void *,void *,int);
extern char lbl_804CA654[];
extern char lbl_80561214[4];
}
extern "C" {
void fn_8027CA50(int p0,int p1,int p2){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 fn_8027C67C((void *)p0,(void *)p1);
 fn_8027992C((void *)p0,(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(value0)+30),100,lbl_804CA654);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0))+32)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(value0)+30);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value1)+34)=(short)(int)(void *)p2;
 if((int)p2!=0){
  fn_8027C710((void *)p0,lbl_80561214,0);
  fn_8027C67C((void *)p0,(void *)1);
 }
 fn_80276234(value0,(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(value0)+30));
}
}
#pragma pop

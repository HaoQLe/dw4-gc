#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802816A8(void *,void *);
void fn_80281814(void *,void *);
}
extern "C" {
void *fn_802818A4(int p0,int p1,int p2){
 void *value1;
 void *value2;
 void *value0;
 fn_80281814((void *)p0,(void *)p1);
 fn_80281814((void *)p0,(void *)p2);
 value1=(void *)0;
 do {
  value2=fn_802816A8((void *)p1,value1);
  if((int)(int)value2!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+72);
   *reinterpret_cast<int *>(reinterpret_cast<char *>((void *)(int)(p1<<6))+((int)value0+((int)value1<<2)))=(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)(int)(p2<<6))+((int)value0+((int)value1<<2)));
  }
  value1=(reinterpret_cast<char *>(value1)+1);
 } while((int)(int)value1<15);
 return (void *)p1;
}
}
#pragma pop

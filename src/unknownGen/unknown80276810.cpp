#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802761B0(void *,void *);
}
extern "C" {
void *fn_80276810(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 value0=(void *)p1;
 value1=(void *)p2;
 while((int)(int)value0!=-1){
  if((int)p2!=(int)((unsigned int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+24))+((int)value0<<2))&0x3F)){
   return (void *)1;
  }
  value2=fn_802761B0((void *)p0,value0);
  value0=value2;
 }
 return (void *)0;
}
}
#pragma pop

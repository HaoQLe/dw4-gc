#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80290BD4(void *);
void *fn_802957BC(void *);
void fn_802959C4();
void fn_802959E4();
void fn_8029D9A0(void *,int);
void fn_8029D9C0(void *,int);
}
extern "C" {
void fn_8029B030(int p0){
 void *value2;
 void *value0;
 void *value1;
 void *value3;
 fn_802959E4();
 fn_8029D9C0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),0);
 fn_8029D9A0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),0);
 fn_80290BD4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
 if((int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+2)==2){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
  if(value0){
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
   reinterpret_cast<void (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0))+12))(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0));
  }
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116);
 value2=value1;
 if(value1){
  value3=fn_802957BC(value1);
  value2=value3;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+168)=0;
 fn_802959C4();
}
}
#pragma pop

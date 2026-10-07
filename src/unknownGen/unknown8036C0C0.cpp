#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_80534AAC[];
extern char lbl_80534FBC[];
}
extern "C" {
void fn_8036C0C0(int p0,int p1,int p2,int p3,int p4){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 if((int)p1!=0){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p2;
 value3=fn_8028A730((void *)p2,*reinterpret_cast<void **>((lbl_80534FBC+0)));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value3;
 value4=fn_8028A730((void *)p2,*reinterpret_cast<void **>((lbl_80534AAC+0)));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=value4;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(void *)p4;
}
}
#pragma pop

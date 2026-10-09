#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028A730(void *,void *);
extern char lbl_805346A8[];
}
extern "C" {
void beLua_virtual64(int p0){
 void *value2;
 void *value0;
 void *value1;
 value2=fn_8028A730(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>((lbl_805346A8+0)));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)0;
}
}
#pragma pop

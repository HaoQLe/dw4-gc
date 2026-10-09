#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800667D0();
void *igNode_getMeta();
}
extern "C" {
void fn_80184AAC(int p0){
 void *value3;
 void *value4;
 void *value0;
 void *value1;
 void *value2;
 value3=fn_800667D0();
 value4=igNode_getMeta();
 if((int)(int)value4!=0){
  value0=(void *)reinterpret_cast<Meta::igMetaObject *>(value4)->_refCount;
  reinterpret_cast<Meta::igMetaObject *>(value4)->_refCount=(unsigned int)(reinterpret_cast<char *>(value0)+1);
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 if(value1){
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
   fn_80066E1C(value1);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=value4;
}
}
#pragma pop

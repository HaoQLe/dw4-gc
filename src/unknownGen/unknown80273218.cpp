#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272D20(void *,void *);
}
extern "C" {
void *fn_80273218(int p0,int p1){
 void *value0;
 void *value1;
 value1=fn_80272D20((void *)p0,(void *)p1);
 value0=(void *)0;
 if(((!value1||(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+0)!=5)||(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8))+12)==0)){
  value0=(void *)1;
 }
 if((unsigned char)(int)value0){
  return (void *)0;
 } else {
  return *reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8))+0);
 }
}
}
#pragma pop

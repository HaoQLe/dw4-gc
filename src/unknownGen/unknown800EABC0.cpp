#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_800EABC0(void *p0,void *p1){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>(p1)+12);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0);
 if(!value0){
  return p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
}
#pragma pop

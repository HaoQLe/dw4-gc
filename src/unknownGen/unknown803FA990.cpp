#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_803FA990(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+400);
 if(value0){
  value1=reinterpret_cast<void * (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0))+20))(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+0));
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop

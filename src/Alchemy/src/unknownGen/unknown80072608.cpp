#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80071F9C(void *,void *);
}
extern "C" {
void fn_80072608(int p0){
 void *value0;
 void *value1;
 void *value2;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)){
  value0=(void *)p0;
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  value2=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
  while((unsigned int)(value2=(reinterpret_cast<char *>(value2)+-1))>(unsigned int)(int)value1){
   if(((int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>(value2)+0)==92||(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>(value2)+0)==47)){
    fn_80071F9C(value0,(reinterpret_cast<char *>(value2)+1));
    break;
   }
  }
  return;
 } else {
  return;
 }
}
}
#pragma pop

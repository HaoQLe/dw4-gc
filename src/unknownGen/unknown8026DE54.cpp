#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8026DBB8(void *);
}
extern "C" {
void *fn_8026DE54(int p0){
 void *value0;
 void *value1;
 value0=(void *)p0;
 while(value0){
  value1=fn_8026DBB8(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+28));
  if(value1){
   return value1;
  }
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+56);
 }
 return (void *)0;
}
}
#pragma pop

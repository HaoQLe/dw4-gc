#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800FEFF4(void *,void *);
}
extern "C" {
void *fn_800C4AE8(int p0,int p1){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 if(value0){
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+36)!=-1){
   value1=fn_800FEFF4((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+36));
   return value1;
  } else {
   return value0;
  }
 }
 return value0;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80065C34(void *,void *);
void *fn_80065CE0(void *);
}
extern "C" {
void *fn_80179098(int p0){
 void *value0;
 void *value1;
 value0=fn_80065CE0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
 if(((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)>=(int)(int)value0||(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)<0)){
  return (void *)0;
 } else {
  value1=fn_80065C34(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
  return value1;
 }
}
}
#pragma pop

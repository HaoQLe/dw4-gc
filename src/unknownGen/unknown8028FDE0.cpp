#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802941D0(void *);
void *fn_802941D8(void *);
}
extern "C" {
void *fn_8028FDE0(int p0){
 void *value0;
 void *value1;
 value0=fn_802941D8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
 if(((int)(int)value0>0&&((int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+1)==2||(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+1)==3))){
  value1=fn_802941D0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
  return value1;
 } else {
  return (void *)0;
 }
}
}
#pragma pop

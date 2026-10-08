#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80056378(void *);
void fn_80068390(void *,void *);
}
extern "C" {
void *fn_800DDE54(int p0){
 void *value0;
 void *value1;
 if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56)){
  fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56));
 }
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
 if(value0){
  if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)){
   value1=fn_80056378(value0);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=(void *)0;
   return value1;
  } else {
   return value0;
  }
 }
 return value0;
}
}
#pragma pop

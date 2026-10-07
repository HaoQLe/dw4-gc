#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004778C(void *);
void *fn_80056378(void *);
void fn_80070E2C();
}
extern "C" {
void *fn_80070DD4(int p0){
 void *value0;
 void *value1;
 fn_8004778C((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+9532)=(void *)fn_80070E2C;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+9524)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+9528);
 if(value0){
  value1=fn_80056378(value0);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+9528)=(void *)0;
  return value1;
 } else {
  return value0;
 }
}
}
#pragma pop

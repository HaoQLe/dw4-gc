#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801184EC(void *,void *);
void fn_8028A6D8(void *,void *);
}
extern "C" {
void *fn_8040E1AC(int p0){
 void *value0;
 void *value1;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 if(value0){
  fn_8028A6D8(value0,*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44))+8));
  value1=fn_801184EC(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+32),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+176)=(void *)2;
  return value1;
 } else {
  return value0;
 }
}
void fn_8040E204(int p0){
 fn_8028A6D8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32));
}
void fn_8040E230(int p0){
 fn_8028A6D8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28));
}
void fn_8040E25C(int p0){
 fn_8028A6D8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
}
void fn_8040E288(){}
}
#pragma pop

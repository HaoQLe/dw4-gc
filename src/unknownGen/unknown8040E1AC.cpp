#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801184EC(void *,void *);
void fn_8011BFA4(void *,void *);
void fn_8028A6D8(void *,void *);
void fn_8040F994(void *,void *);
void *fn_8040FCB0(void *,void *);
extern void *lbl_8055C94C;
}
struct UnknownGenL8040E28C_8 {
 int m08;
 int m0C;
 int m10;
};
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
void fn_8040E28C(int p0){
 UnknownGenL8040E28C_8 local0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+212)=(void *)1;
 local0.m08=(int)2;
 local0.m0C=(int)0;
 local0.m10=(int)(int)lbl_8055C94C;
 fn_8011BFA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),&local0);
 fn_8040F994(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136),(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+16));
 fn_8040FCB0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136),*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+12));
}
}
#pragma pop

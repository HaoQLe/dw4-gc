#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void fn_80188BA4(void *);
void fn_80188C0C(void *,int);
void fn_80188CAC(void *,void *);
void fn_80188CD0(void *);
extern void *lbl_80564BC0;
}
static inline void *UnknownGenCast80180724_9(void *q){
 void *value1;
 if((q&&(value1=fn_80068128(q,lbl_80564BC0),(unsigned char)(int)value1))) return q;
 return 0;
}
extern "C" {
void fn_80180724(int p0,int p1){
 void *value0;
 void *local0;
 fn_80188BA4(&local0);
 value0=UnknownGenCast80180724_9(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32));
 if(!value0){
  fn_80188CAC((void *)p0,&local0);
  fn_80188C0C(&local0,-1);
  return;
 } else {
  fn_80188CD0(&local0);
  fn_80188CAC((void *)p0,&local0);
  fn_80188C0C(&local0,-1);
  return;
 }
}
}
#pragma pop

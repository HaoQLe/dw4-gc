#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void fn_80188BA4(void *);
void fn_80188C0C(void *,int);
void fn_80188CAC(void *,void *);
void fn_80188CD0(void *);
extern void *lbl_80564714;
}
static inline void *UnknownGenCast801808A4_9(void *q){
 void *value1;
 if((q&&(value1=fn_80068128(q,lbl_80564714),(unsigned char)(int)value1))) return q;
 return 0;
}
extern "C" {
void igObjectPropertyForTransform_virtual90(int p0,int p1){
 void *value0;
 void *local0;
 fn_80188BA4(&local0);
 value0=UnknownGenCast801808A4_9(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32));
 if(!value0){
  fn_80188CAC((void *)p0,&local0);
  fn_80188C0C(&local0,-1);
  return;
 } else {
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+36)=1;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+37)=0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+38)=0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+39)=1;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+42)=1;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+40)=1;
  fn_80188CD0(&local0);
  fn_80188CAC((void *)p0,&local0);
  fn_80188C0C(&local0,-1);
  return;
 }
}
}
#pragma pop

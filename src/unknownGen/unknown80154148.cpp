#include <unknownGen.h>
#include <meta/igAttrSet.h>
#include <meta/igLightSet.h>
#include <meta/igLightStateSet.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void fn_80069184(void *,void *);
void fn_80188BA4(void *);
void fn_80188C0C(void *,int);
void fn_80188CAC(void *,void *);
void fn_80188CD0(void *);
extern void *lbl_80564DAC;
extern void *lbl_80564DB4;
extern void *lbl_80565378;
}
static inline void *UnknownGenCast80154148_9(void *q){
 void *value3;
 if((q&&(value3=fn_80068128(q,lbl_80565378),(unsigned char)(int)value3))) return q;
 return 0;
}
static inline void *UnknownGenCast80154148_19(void *q){
 void *value4;
 if((q&&(value4=fn_80068128(q,lbl_80564DB4),(unsigned char)(int)value4))) return q;
 return 0;
}
static inline void *UnknownGenCast80154148_29(void *q){
 void *value5;
 if((q&&(value5=fn_80068128(q,lbl_80564DAC),(unsigned char)(int)value5))) return q;
 return 0;
}
extern "C" {
void igAttrTraversal_virtual90(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *local0;
 fn_80188BA4(&local0);
 value0=UnknownGenCast80154148_9(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32));
 if(value0){
  fn_80069184(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+36),reinterpret_cast<Meta::igAttrSet *>(value0)->_attributes);
 }
 value1=UnknownGenCast80154148_19(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32));
 if(value1){
  fn_80069184(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+36),reinterpret_cast<Meta::igLightSet *>(value1)->_lights);
 }
 value2=UnknownGenCast80154148_29(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+32));
 if(value2){
  fn_80069184(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+36),reinterpret_cast<Meta::igLightStateSet *>(value2)->_lightEnables);
 }
 fn_80188CD0(&local0);
 fn_80188CAC((void *)p0,&local0);
 fn_80188C0C(&local0,-1);
}
}
#pragma pop

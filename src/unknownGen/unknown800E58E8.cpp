#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
void *fn_800E3D94(void *,int,int);
extern void *lbl_80563A14;
}
static inline void *UnknownGenCast800E58E8_11(void *q){
 void *value2;
 if((q&&(value2=fn_80068128(q,lbl_80563A14),(unsigned char)(int)value2))) return q;
 return 0;
}
extern "C" {
void *fn_800E58E8(int p0,int p1){
 void *value1;
 void *value0;
 value1=fn_800E3D94(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),8,0);
 value0=UnknownGenCast800E58E8_11(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+12));
 return (void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+16)+(p1*12));
}
}
#pragma pop

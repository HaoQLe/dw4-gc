#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80068128(void *,void *);
extern void *lbl_805647C0;
void strcmp(void *,void *);
}
static inline void *UnknownGenCast80206644_6(void *q){
 void *value1;
 if(((int)(int)q!=0&&(value1=fn_80068128(q,lbl_805647C0),(unsigned char)(int)value1))) return q;
 return 0;
}
extern "C" {
void fn_80206644(int p0,int p1){
 void *value0;
 value0=UnknownGenCast80206644_6((void *)p1);
 strcmp(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8));
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027BD18(void *,int,void *);
void fn_80281D40(void *,void *,void *,int,void *,void *);
void *fn_80281DE4(void *,void *,void *);
}
extern "C" {
void fn_8028209C(int p0,int p1,int p2,int p3){
 void *value0=fn_80281DE4((void *)p0,(void *)p2,(void *)p3);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+48)=value0;
 void *value1=fn_8027BD18((void *)p0,0,(void *)(int)((int)value0<<2));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+44)=value1;
 fn_80281D40((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+44),value0,4,(void *)p2,(void *)p3);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8028295C(void *,void *,void *);
}
extern "C" {
void fn_80282A54(int p0,int p1,int p2){
 void *value0=fn_8028295C((void *)p0,(void *)p2,(void *)p2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+0)=(void *)p1;
 *reinterpret_cast<short *>(reinterpret_cast<char *>(value0)+12)=0;
}
}
#pragma pop

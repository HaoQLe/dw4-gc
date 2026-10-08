#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void ceil(void *);
void fn_80273388(void *);
void *fn_80274214(void *,int);
}
extern "C" {
void *fn_8027B4C4(int p0){
 void *value0=fn_80274214((void *)p0,1);
 ceil(value0);
 fn_80273388((void *)p0);
 return (void *)1;
}
}
#pragma pop

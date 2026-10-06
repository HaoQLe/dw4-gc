#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *,void *);
}
extern "C" {
void *fn_8016D46C(int p0,int p1){
 fn_80056378((void *)p0,(void *)p1);
 return (void *)p1;
}
}
#pragma pop

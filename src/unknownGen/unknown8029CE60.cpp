#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80296058(void *,void *,void *,void *);
}
extern "C" {
void fn_8029CE60(int p0,int p1,int p2){
 fn_80296058((void *)p2,(void *)p1,(reinterpret_cast<char *>((void *)p0)+48),(reinterpret_cast<char *>((void *)p0)+50));
}
}
#pragma pop

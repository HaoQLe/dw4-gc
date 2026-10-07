#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F8590(void *,void *,void *);
}
extern "C" {
int fn_800C4F48(){return 128;}
void fn_800C4F50(int p0,int p1){
 fn_800F8590((void *)p1,(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+76))+10),(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop

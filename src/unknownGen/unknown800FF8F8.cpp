#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800FF8D8();
}
extern "C" {
void *igGamecubeVisualContext_virtual258(){return fn_800FF8D8();}
void igGamecubeVisualContext_virtual25C(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)(p0+(p1<<2)))+508);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)(p0+(p1<<2)))+572);
}
}
#pragma pop

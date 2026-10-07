#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F8590(void *,void *,void *);
void fn_80100234(void *,void *,void *);
}
extern "C" {
void fn_800C46DC(int p0,int p1){
 fn_80100234((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+82));
 fn_800F8590((void *)p1,(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76))+2),(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop

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
void *fn_800C4734(int p0){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+10)=(short)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+76);
 return (void *)p0;
}
}
#pragma pop

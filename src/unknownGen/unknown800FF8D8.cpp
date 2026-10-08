#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_800FF8D8(int p0,int p1,int p2,int p3){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)(int)(p0+(p1<<2)))+508)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)(int)(p0+(p1<<2)))+572)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x40);
 return (void *)p0;
}
}
#pragma pop

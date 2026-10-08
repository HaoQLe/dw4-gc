#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void memcpy(void *,void *,void *);
}
extern "C" {
void fn_80064B08(int p0,int p1,int p2,int p3,int p4,int p5){
 memcpy((void *)(int)(p1+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)),(void *)p2,(void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+20));
}
}
#pragma pop

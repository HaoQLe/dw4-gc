#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void GXSetDither(void *);
}
extern "C" {
void *fn_800F9890(void *p0,void *p1,void *p2){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p1)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+1748);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p2)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+1749);
 return p0;
}
void igGamecubeVisualContext_virtual244(int p0,int p1){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+312)=(unsigned char)(int)(void *)p1;
 GXSetDither((void *)(int)(unsigned char)p1);
}
}
#pragma pop

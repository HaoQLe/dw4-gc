#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_803B0ECC(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)(int)((unsigned int)p1&0x3FF);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=(unsigned char)(int)(void *)(int)(((unsigned int)p1>>10)&0x1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)(int)(((unsigned int)p1>>12)&0xF);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)(int)(((unsigned int)p1>>16)&0xF);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)(int)(((unsigned int)p1>>20)&0x7FF);
 return (void *)p0;
}
}
#pragma pop

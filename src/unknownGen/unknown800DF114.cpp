#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_800DF114(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+24)=value;}
void *fn_800DF11C(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)(int)(unsigned short)p1;
 return (void *)p0;
}
void *fn_800DF128(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)(int)(unsigned short)p1;
 return (void *)p0;
}
}
#pragma pop

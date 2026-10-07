#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_800BD628(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16)=value;}
void fn_800BD630(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void *fn_800BD638(int p0){
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+10)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+30);
 return (void *)p0;
}
}
#pragma pop

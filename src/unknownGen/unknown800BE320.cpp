#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F9860(void *,void *,void *);
}
extern "C" {
void fn_800BE320(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800BE328(int p0,int p1){
 fn_800F9860((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12),(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+13));
}
}
#pragma pop

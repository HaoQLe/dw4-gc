#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F93B0(void *,void *);
void *fn_800F93DC(void *,void *);
}
extern "C" {
void fn_800BDDCC(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16)=value;}
void fn_800BDDD4(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800BDDDC(int p0,int p1){
 fn_800F93B0((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
 fn_800F93DC((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
}
}
#pragma pop

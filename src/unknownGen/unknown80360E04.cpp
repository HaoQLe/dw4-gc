#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802D91E4(void *);
}
extern "C" {
int fn_80360E04(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0);}
int fn_80360E0C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
int fn_80360E14(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0);}
void *fn_80360E1C(int p0,int p1){
 void *value0=fn_802D91E4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value0;
 return (void *)p0;
}
void fn_80360E54(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0)=value;}
unsigned char fn_80360E5C(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+28);}
unsigned char fn_80360E64(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+29);}
}
#pragma pop

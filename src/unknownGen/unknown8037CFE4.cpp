#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803404A4(void *);
void *fn_803409B0(void *);
}
extern "C" {
int fn_8037CFE4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0);}
void *fn_8037CFEC(int p0,int p1){
 void *value0=fn_803409B0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)=value0;
 return (void *)p0;
}
void *fn_8037D024(int p0,int p1){
 void *value0=fn_803404A4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)=value0;
 return (void *)p0;
}
void fn_8037D05C(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0)=value;}
void fn_8037D064(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+48)=value;}
void fn_8037D06C(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32)=value;}
int fn_8037D074(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+32);}
}
#pragma pop

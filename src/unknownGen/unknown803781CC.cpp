#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801285A0(void *);
void fn_80128CF4(void *);
}
extern "C" {
int fn_803781CC(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
void *fn_803781D4(int p0){
 fn_80128CF4((void *)p0);
 return (void *)p0;
}
void *fn_80378204(int p0){
 fn_801285A0((void *)p0);
 return (void *)p0;
}
int fn_80378234(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+260);}
int fn_8037823C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0);}
}
#pragma pop

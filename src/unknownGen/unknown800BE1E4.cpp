#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F9474(void *,void *);
}
extern "C" {
void fn_800BE1E4(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_800BE1EC(int p0,int p1){
 fn_800F9474((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop

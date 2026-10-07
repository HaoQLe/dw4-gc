#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800593F4(void *);
}
extern "C" {
int fn_8003C240(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+172);}
void fn_8003C248(int p0){
 void *local0;
 fn_800593F4(&local0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=local0;
}
}
#pragma pop

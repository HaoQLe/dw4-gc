#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800424B4(void *,void *,void *);
}
extern "C" {
void fn_8028B8F0(int p0,int p1){
 void *local0;
 fn_800424B4(&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8),(void *)p1);
}
}
#pragma pop

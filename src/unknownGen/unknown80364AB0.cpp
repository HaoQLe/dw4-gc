#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80364894(void *);
void memcpy(void *,void *,void *);
}
extern "C" {
void fn_80364AB0(int p0,int p1){
 memcpy(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),(void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
 fn_80364894((void *)p0);
}
}
#pragma pop

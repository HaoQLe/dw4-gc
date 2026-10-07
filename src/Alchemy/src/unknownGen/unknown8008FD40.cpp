#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800681C4(void *,void *);
void fn_80068390(void *,void *);
}
extern "C" {
void fn_8008FD40(int p0){
 void *value0=fn_800681C4((void *)p0,(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)<<2));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=value0;
}
void fn_8008FD78(int p0){
 fn_80068390((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)0;
}
}
#pragma pop

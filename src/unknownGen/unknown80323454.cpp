#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803225EC(void *,void *);
void fn_803225FC(void *);
void fn_80322688(void *,void *);
}
extern "C" {
void fn_80323454(int p0,int p1){
 fn_803225EC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+48));
 fn_803225FC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
 fn_80322688(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+48));
}
}
#pragma pop

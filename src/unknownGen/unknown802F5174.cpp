#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802F60FC(void *,int);
void fn_802F6824(void *);
void fn_8031CB84(void *);
}
extern "C" {
void fn_802F5174(int p0){
 fn_802F60FC((void *)p0,5);
 fn_8031CB84(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32))+12));
 fn_8031CB84(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36))+12));
 fn_802F6824((void *)p0);
}
}
#pragma pop

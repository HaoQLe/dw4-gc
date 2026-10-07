#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80272DD0(void *,int);
void *fn_8027327C(void *,int);
}
extern "C" {
void fn_8026DB54(int p0){
 void *value0=fn_8027327C((void *)p0,-1);
 fn_80272DD0((void *)p0,2);
 fn_80272DD0((void *)p0,2);
 reinterpret_cast<void (*)(void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+32))((void *)p0);
}
}
#pragma pop

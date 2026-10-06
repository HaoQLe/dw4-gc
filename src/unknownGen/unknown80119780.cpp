#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80119B60(void *,void *);
void fn_80119BB0(void *,void *);
void fn_80119C00(void *,void *);
}
extern "C" {
void fn_80119780(int p0,int p1){
 fn_80119B60(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)p1);
}
void fn_801197A4(int p0,int p1){
 fn_80119BB0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)p1);
}
void fn_801197C8(int p0,int p1){
 fn_80119C00(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16),(void *)p1);
}
}
#pragma pop

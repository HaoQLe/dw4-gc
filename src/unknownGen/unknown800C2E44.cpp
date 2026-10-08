#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800F9828(void *,void *);
void fn_800F9834(void *,void *);
void fn_800F9840(void *,void *,void *,void *);
void fn_800F9848(void *,void *);
void fn_800F9854(void *,void *);
}
extern "C" {
void fn_800C2E44(int p0,int p1){
 fn_800F9840((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
 fn_800F9828((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 fn_800F9834((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
 fn_800F9848((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24));
 fn_800F9854((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
}
}
#pragma pop

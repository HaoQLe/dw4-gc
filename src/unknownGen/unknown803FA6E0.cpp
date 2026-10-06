#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803C7DB8(void *);
void fn_803C7DE4(void *);
void fn_803C7E10(void *,void *,void *);
}
extern "C" {
void fn_803FA6E0(int p0){
 fn_803C7DE4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172));
}
void fn_803FA704(int p0){
 fn_803C7DB8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172));
}
void fn_803FA728(int p0,int p1,int p2){
 fn_803C7E10(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+172),(void *)p1,(void *)p2);
}
}
#pragma pop

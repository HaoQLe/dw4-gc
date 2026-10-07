#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803C5E70(void *,void *);
void fn_803C5EC0(void *,void *);
void *fn_803C5F10();
void *fn_803C5F30();
}
extern "C" {
void fn_803C7DB8(int p0){
 fn_803C5E70(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+100));
}
void fn_803C7DE4(int p0){
 fn_803C5EC0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+96),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+100));
}
void *fn_803C7E10(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+100)=(void *)p2;
 return (void *)p0;
}
void *fn_803C7E1C(){return fn_803C5F10();}
void *fn_803C7E3C(){return fn_803C5F30();}
}
#pragma pop

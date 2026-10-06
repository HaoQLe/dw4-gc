#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803F9E60(void *,void *);
void fn_803FA614(void *);
}
extern "C" {
void fn_803FF2DC(int p0,int p1){
 fn_803FA614(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+68));
 fn_803F9E60((void *)p0,(void *)p1);
}
}
#pragma pop

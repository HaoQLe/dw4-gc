#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual284(void *,void *);
void igGamecubeVisualContext_virtual28C(void *,void *);
void igGamecubeVisualContext_virtual294(void *,void *,void *,void *);
void igGamecubeVisualContext_virtual29C(void *,void *);
void igGamecubeVisualContext_virtual2A4(void *,void *);
}
extern "C" {
void igStencilFunctionAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual294((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36));
 igGamecubeVisualContext_virtual284((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 igGamecubeVisualContext_virtual28C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16));
 igGamecubeVisualContext_virtual29C((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24));
 igGamecubeVisualContext_virtual2A4((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20));
}
}
#pragma pop

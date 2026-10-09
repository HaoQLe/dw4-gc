#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *igGamecubeVisualContext_virtual3CC(void *,float);
void *igGamecubeVisualContext_virtual3D4(void *,void *);
void *igGamecubeVisualContext_virtual3DC(void *,void *);
void *igGamecubeVisualContext_virtual3E4(void *,float);
void *igGamecubeVisualContext_virtual3EC(void *,float);
}
extern "C" {
int igFloatConstantAttr_virtual7C(){return 128;}
void igFogAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual3D4((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+24);
 igGamecubeVisualContext_virtual3CC((void *)p1,value0);
 igGamecubeVisualContext_virtual3DC((void *)p1,(reinterpret_cast<char *>((void *)p0)+28));
 float value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16);
 igGamecubeVisualContext_virtual3E4((void *)p1,value1);
 float value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20);
 igGamecubeVisualContext_virtual3EC((void *)p1,value2);
}
}
#pragma pop

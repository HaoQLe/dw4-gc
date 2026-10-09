#include <unknownGen.h>
#include <meta/igFogAttr.h>
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
 igGamecubeVisualContext_virtual3D4((void *)p1,(void *)(int)reinterpret_cast<Meta::igFogAttr *>((void *)p0)->_mode);
 float value0=reinterpret_cast<Meta::igFogAttr *>((void *)p0)->_density;
 igGamecubeVisualContext_virtual3CC((void *)p1,value0);
 igGamecubeVisualContext_virtual3DC((void *)p1,(reinterpret_cast<char *>((void *)p0)+28));
 float value1=reinterpret_cast<Meta::igFogAttr *>((void *)p0)->_nearVal;
 igGamecubeVisualContext_virtual3E4((void *)p1,value1);
 float value2=reinterpret_cast<Meta::igFogAttr *>((void *)p0)->_farVal;
 igGamecubeVisualContext_virtual3EC((void *)p1,value2);
}
}
#pragma pop

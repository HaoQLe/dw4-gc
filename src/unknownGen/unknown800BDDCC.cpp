#include <unknownGen.h>
#include <meta/igCullFaceAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual394(void *,void *);
void *igGamecubeVisualContext_virtual39C(void *,void *);
}
extern "C" {
void igCullFaceAttr_virtual80(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16)=value;}
void igCullFaceAttr_virtual84(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void igCullFaceAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual394((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
 igGamecubeVisualContext_virtual39C((void *)p1,(void *)(int)reinterpret_cast<Meta::igCullFaceAttr *>((void *)p0)->_mode);
}
}
#pragma pop

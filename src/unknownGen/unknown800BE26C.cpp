#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igGamecubeVisualContext_virtual3A4(void *,void *);
void *igGamecubeVisualContext_virtual3B4(void *,void *);
}
extern "C" {
void igDepthStateAttr_virtual80(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+12)=value;}
void igDepthStateAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual3A4((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
void igDepthWriteStateAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual3B4((void *)p1,(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop

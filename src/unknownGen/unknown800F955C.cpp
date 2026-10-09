#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubeVisualContext_virtual3D4(void *p0,void *p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1236)=p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x8);
 return p0;
}
int igGamecubeVisualContext_virtual3D8(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1236);}
}
#pragma pop

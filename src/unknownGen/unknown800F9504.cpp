#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_80563511[1];
}
extern "C" {
void igGamecubeVisualContext_virtual3BC(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1220)=value;}
int igGamecubeVisualContext_virtual3C0(){return 0;}
void igGamecubeVisualContext_virtual3C4(int p0,int p1){
 void *value0;
 value0=(void *)p1;
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80563511+0))){
  value0=(void *)0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1228)=(unsigned char)(int)value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x8);
}
unsigned char igGamecubeVisualContext_virtual3C8(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1228);}
void *igGamecubeVisualContext_virtual3CC(void *p0,float f0){
 *reinterpret_cast<float *>(reinterpret_cast<char *>(p0)+1232)=f0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x8);
 return p0;
}
}
#pragma pop

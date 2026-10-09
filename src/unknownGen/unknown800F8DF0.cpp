#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_8056350B[1];
extern char lbl_8056350C[1];
}
extern "C" {
void igGamecubeVisualContext_virtual34C(int p0,int p1){
 void *value0;
 value0=(void *)p1;
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_8056350C+0))){
  value0=(void *)0;
 }
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1124)==(unsigned int)(unsigned char)(int)value0){
  return;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1124)=(unsigned char)(int)value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x400);
}
unsigned char igGamecubeVisualContext_virtual350(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1124);}
void igGamecubeVisualContext_virtual260(int p0,int p1){
 void *value0;
 value0=(void *)p1;
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_8056350B+0))){
  value0=(void *)0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1160)=(unsigned char)(int)value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x2);
}
unsigned char igGamecubeVisualContext_virtual264(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1160);}
void *igGamecubeVisualContext_virtual268(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1164)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x2);
 return (void *)p0;
}
void *igGamecubeVisualContext_virtual270(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1168)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x2);
 return (void *)p0;
}
int igGamecubeVisualContext_virtual26C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1164);}
int igGamecubeVisualContext_virtual274(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1168);}
void *igGamecubeVisualContext_virtual278(void *p0,void *p1,void *p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1164)=p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1168)=p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x2);
 return p0;
}
}
#pragma pop

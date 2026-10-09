#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void igGamecubeVisualContext_virtual3F4(int p0,int p1,int p2){
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+321)==1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 }
 if((unsigned int)p2==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kFailure__3Gap;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+1280)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+1284)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+8);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+1288)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p2)+1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+1289)=(unsigned char)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+20);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=kSuccess__3Gap;
}
void *igGamecubeVisualContext_virtual3F8(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1280);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+8)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1284);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+1)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1288);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+20)=(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+1289);
 return (void *)p0;
}
void igGamecubeVisualContext_virtual1C4(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1290)=value;}
unsigned char igGamecubeVisualContext_virtual1C8(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1290);}
void igGamecubeVisualContext_virtual27C(){}
int igGamecubeVisualContext_virtual280(){return 0;}
void igGamecubeVisualContext_virtual284(){}
int igGamecubeVisualContext_virtual288(){return 0;}
void igGamecubeVisualContext_virtual28C(){}
int igGamecubeVisualContext_virtual290(){return 0;}
void igGamecubeVisualContext_virtual294(){}
void igGamecubeVisualContext_virtual298(){}
void igGamecubeVisualContext_virtual29C(){}
int igGamecubeVisualContext_virtual2A0(){return 0;}
void igGamecubeVisualContext_virtual2A4(){}
int igGamecubeVisualContext_virtual2A8(){return 0;}
}
#pragma pop

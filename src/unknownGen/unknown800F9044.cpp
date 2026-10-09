#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void GXSetClipMode(void *);
extern char lbl_8056350E[1];
}
extern "C" {
void igGamecubeVisualContext_virtual37C(int p0,int p1){
 void *value0;
 value0=(void *)p1;
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_8056350E+0))){
  value0=(void *)0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1172)=(unsigned char)(int)value0;
 GXSetClipMode((void *)(int)((unsigned int)__cntlzw((unsigned char)(int)value0)>>5));
}
unsigned char igGamecubeVisualContext_virtual380(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1172);}
void igGamecubeVisualContext_virtual2F0(int p0,int p1,int p2,int p3,int p4){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1176)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1180)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1184)=(void *)p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1188)=(void *)p4;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+104)!=1){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x10);
}
void *igGamecubeVisualContext_virtual2F4(int p0,int p1,int p2,int p3,int p4){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1176);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1180);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p3)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1184);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p4)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1188);
 return (void *)p0;
}
void igGamecubeVisualContext_virtual2F8(int p0,int p1){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+104)==(int)p1){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+104)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x10);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_8056350F[1];
}
extern "C" {
void *fn_800F933C(void *p0,void *p1,void *p2,void *p3,void *p4){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1176)=p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1180)=p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1184)=p3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1188)=p4;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x10);
 return p0;
}
void *igGamecubeVisualContext_virtual384(void *p0,void *p1,void *p2,void *p3,void *p4){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+1192)=(unsigned char)(int)p1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+1193)=(unsigned char)(int)p2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+1194)=(unsigned char)(int)p3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+1195)=(unsigned char)(int)p4;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x2);
 return p0;
}
void *igGamecubeVisualContext_virtual388(int p0,int p1,int p2,int p3,int p4){
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1192);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p2)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1193);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p3)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1194);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p4)+0)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1195);
 return (void *)p0;
}
void igGamecubeVisualContext_virtual38C(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1196)=value;}
int igGamecubeVisualContext_virtual390(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1196);}
void igGamecubeVisualContext_virtual394(int p0,int p1){
 void *value0;
 value0=(void *)p1;
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_8056350F+0))){
  value0=(void *)0;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1200)=(unsigned char)(int)value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x20);
}
unsigned char igGamecubeVisualContext_virtual398(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1200);}
void *igGamecubeVisualContext_virtual39C(void *p0,void *p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1204)=p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+1312)|0x20);
 return p0;
}
}
#pragma pop

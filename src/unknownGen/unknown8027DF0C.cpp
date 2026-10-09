#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8027C1E0(void *);
void fn_8027C2CC(void *,int);
void fn_8027C30C(void *,void *,void *);
void *fn_8027C4F4(void *);
void fn_8027C604(void *,void *,int);
void fn_8027C710(void *,void *,int);
void fn_8027D748(void *);
void fn_8027DD74(void *,int,int,int);
void *fn_8027F0D0(void *,void *);
extern char lbl_804CA750[];
extern char lbl_80561228[3];
extern char lbl_8056122C[8];
}
extern "C" {
void fn_8027DF0C(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 fn_8027C2CC((void *)p0,44);
 value1=fn_8027C4F4((void *)p0);
 value0=(void *)0;
 if(((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8)==275&&(value2=fn_8027F0D0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44),lbl_80561228),(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16)==(unsigned int)(int)value2))){
  value0=(void *)1;
 }
 fn_8027C30C((void *)p0,(void *)(int)(unsigned char)(int)value0,lbl_804CA750);
 fn_8027C1E0((void *)p0);
 fn_8027D748((void *)p0);
 fn_8027C710((void *)p0,lbl_8056122C,0);
 fn_8027C604((void *)p0,(void *)p1,1);
 fn_8027C604((void *)p0,value1,2);
 fn_8027DD74((void *)p0,3,46,47);
}
}
#pragma pop

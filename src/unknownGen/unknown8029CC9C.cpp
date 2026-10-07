#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80296058(void *,void *,void *,void *);
void memset(void *,int,int,void *);
}
extern "C" {
int fn_8029CC9C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+16);}
void fn_8029CCA4(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)!=3){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
}
void fn_8029CCBC(int p0,int p1,int p2,int p3,int p4,int p5){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 memset((reinterpret_cast<char *>((void *)p0)+40),0,8,(void *)p3);
}
void fn_8029CCF0(int p0){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)!=0){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)1;
}
void *fn_8029CD10(void *p0,void *p1,void *p2,void *p3,void *p4){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+12)==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+20)=(void *)1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+24)=p1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+28)=p2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+32)=p3;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+36)=p4;
  return (void *)1;
 }
 return (void *)0;
}
void *fn_8029CD44(void *p0,void *p1,void *p2,void *p3,void *p4){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+12)==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+20)=(void *)2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+24)=p1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+28)=p2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+32)=p3;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+36)=p4;
  return (void *)1;
 }
 return (void *)0;
}
void *fn_8029CD78(void *p0,void *p1,void *p2,void *p3,int p4){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+12)==0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+20)=(void *)1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+24)=p1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+28)=p2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+32)=p3;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+36)=(void *)p4;
  return (void *)1;
 }
 return (void *)0;
}
int fn_8029CDAC(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12);}
void fn_8029CDB4(int p0,int p1,int p2,int p3,int p4,int p5){
 if((unsigned int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
  memset((void *)p0,0,60,(void *)p3);
  return;
 } else {
  return;
 }
}
void *fn_8029CDEC(void *p0,void *p1,void *p2,void *p3){
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p1)+0)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+52);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p2)+0)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+54);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p3)+0)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+56);
 return p0;
}
void *fn_8029CE08(void *p0,void *p1,void *p2,void *p3){
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+52)=(short)(int)p1;
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+54)=(short)(int)p2;
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+56)=(short)(int)p3;
 return p0;
}
void *fn_8029CE18(void *p0,void *p1,void *p2){
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p1)+0)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+40);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p2)+0)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+42);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p1)+2)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+44);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p2)+2)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+46);
 return p0;
}
void *fn_8029CE3C(void *p0,void *p1,void *p2){
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+40)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p1)+0);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+42)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p2)+0);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+44)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p1)+2);
 *reinterpret_cast<short *>(reinterpret_cast<char *>(p0)+46)=(short)(int)(void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>(p2)+2);
 return p0;
}
void fn_8029CE60(int p0,int p1,int p2){
 fn_80296058((void *)p2,(void *)p1,(reinterpret_cast<char *>((void *)p0)+48),(reinterpret_cast<char *>((void *)p0)+50));
}
}
#pragma pop

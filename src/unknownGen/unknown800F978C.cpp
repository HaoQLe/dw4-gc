#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *kFailure__3Gap;
extern void *kSuccess__3Gap;
}
extern "C" {
void fn_800F978C(int p0,int p1,int p2){
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
void *fn_800F97E4(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1280);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+8)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1284);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+1)=(unsigned char)(int)(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1288);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+20)=(void *)(int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+1289);
 return (void *)p0;
}
void fn_800F980C(void *object,unsigned char value){*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1290)=value;}
unsigned char fn_800F9814(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1290);}
void fn_800F981C(){}
int fn_800F9820(){return 0;}
void fn_800F9828(){}
int fn_800F982C(){return 0;}
void fn_800F9834(){}
int fn_800F9838(){return 0;}
void fn_800F9840(){}
void fn_800F9844(){}
void fn_800F9848(){}
int fn_800F984C(){return 0;}
void fn_800F9854(){}
int fn_800F9858(){return 0;}
}
#pragma pop

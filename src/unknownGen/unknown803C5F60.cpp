#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A3F2C(void *,void *,void *,void *);
void *fn_803C7BF0(void *,int,int);
extern char lbl_8045F4A0[];
extern char lbl_8045F4A8[];
}
struct UnknownGenL803C5FA0_10 {
 int m10;
 int m14;
};
struct UnknownGenL803C5FA0_8 {
 int m08;
 int m0C;
};
extern "C" {
int fn_803C5F60(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+56);}
void fn_803C5F68(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+56)=value;}
void fn_803C5F70(int p0,int p1,int p2){
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)!=1){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=(void *)0;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)0;
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32);
}
void fn_803C5FA0(int p0,int p1,int p2){
 void *value0;
 void *value1;
 UnknownGenL803C5FA0_10 local1;
 UnknownGenL803C5FA0_8 local0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)p2;
 local1.m10=(int)p1;
 local1.m14=(int)p2;
 value1=fn_802A3F2C(&local1,lbl_8045F4A0,lbl_8045F4A8,&local0);
 if(!value1){
  fn_803C7BF0(value0,0,0);
 } else {
  fn_803C7BF0(value0,(int)(int)((void *)(int)local0.m08),(int)(int)((void *)(int)local0.m0C));
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)1;
}
void fn_803C603C(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+20)=value;}
void *fn_803C6044(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)p2;
 return (void *)p0;
}
int fn_803C6050(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+8);}
void fn_803C6058(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+8)=value;}
void fn_803C6060(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+4)=value;}
}
#pragma pop

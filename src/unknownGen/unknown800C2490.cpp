#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800EB108(void *,void *);
void fn_800EB318(void *,void *,void *,void *);
void *fn_800EBDA8(void *);
void *fn_800EC170(void *,void *);
void *fn_800EC188(void *,void *);
void *fn_800EC1A0(void *,void *);
void *fn_800EC1B8(void *,void *);
}
struct UnknownGenL800C2490_10 {
 int m10;
 int m14;
 int m18;
 int m1C;
 int m20;
 int m24;
 int m28;
};
extern "C" {
void fn_800C2490(int p0,int p1){
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value0;
 void *value1;
 void *value2;
 UnknownGenL800C2490_10 local2;
 void *local1;
 void *local0;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+24)){
  value3=fn_800EBDA8((void *)p1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=value3;
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20)<0){
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)!=1){
    fn_800EB318((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28),&local1,&local0);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+40)=local1;
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=local0;
    value4=fn_800EC170((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28));
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+48)=value4;
    value5=fn_800EC188((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28));
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=value5;
    value6=fn_800EC1A0((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28));
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=value6;
    value7=fn_800EC1B8((void *)p1,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28));
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+60)=value7;
   }
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)==2){
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28);
   } else {
    local2.m14=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
    local2.m18=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44);
    local2.m1C=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+48);
    local2.m20=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52);
    local2.m24=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
    local2.m28=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+60);
    local2.m10=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36);
    value8=fn_800EB108((void *)p1,&local2);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=value8;
   }
  }
  if((unsigned int)p1!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+4)=(reinterpret_cast<char *>(value0)+1);
  }
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
  if(value1){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value1)+4)=(reinterpret_cast<char *>(value2)+-1);
   if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+4)&0x7FFFFF)){
    fn_80066E1C(value1);
   }
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+64)=(void *)p1;
  return;
 } else {
  return;
 }
}
}
#pragma pop

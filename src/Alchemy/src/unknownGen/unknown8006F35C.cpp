#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800695CC(void *,void *,void *);
void *fn_8006F5E0(void *);
extern char lbl_80413774[];
extern void *lbl_80561CB0;
void *strcmp(void *,void *);
}
extern "C" {
void *fn_8006F35C(int p0,int p1,int p2){
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value0;
 void *value1;
 void *value9;
 void *value2;
 void *value3;
 value7=strcmp((void *)p2,lbl_80413774);
 if((int)(int)value7==0){
  value8=fn_8006F5E0((void *)p1);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value8;
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  value4=value8;
  if(value0){
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
   value4=value1;
  }
  value6=value4;
 } else {
  value9=fn_800695CC(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+16),lbl_80561CB0,(void *)p2);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value9;
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
  value5=value9;
  if(value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+1);
   value5=value3;
  }
  value6=value5;
 }
 return value6;
}
}
#pragma pop

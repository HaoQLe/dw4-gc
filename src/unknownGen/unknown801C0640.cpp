#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
void fn_801C0704(void *,int);
extern char lbl_804B4B00[];
}
extern "C" {
void *fn_801C0640(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804B4B00;
  if((int)(p0+548)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+548);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(p0+472)!=0){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+472);
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
   }
  }
  fn_801C0704((void *)p0,0);
  if((int)(short)p1>0){
   fn_80066DFC((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop

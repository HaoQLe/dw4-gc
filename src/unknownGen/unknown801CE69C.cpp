#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
void fn_801CE7C0(void *,int);
extern char lbl_804B3068[];
}
extern "C" {
void *fn_801CE69C(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804B3068;
  if((int)(p0+128)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+128);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(p0+124)!=0){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+124);
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
   }
  }
  if((int)(p0+120)!=0){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+120);
   if(value4){
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
     fn_80066E1C(value4);
    }
   }
  }
  if((int)(p0+112)!=0){
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+112);
   if(value6){
    value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
     fn_80066E1C(value6);
    }
   }
  }
  fn_801CE7C0((void *)p0,0);
  if((int)(short)p1>0){
   fn_80066DFC((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop

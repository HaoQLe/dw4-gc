#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066DFC(void *);
void fn_801C0704(void *,int);
extern char lbl_804B50D4[];
}
extern "C" {
void *fn_801C3D40(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 void *value10;
 void *value11;
 void *value12;
 void *value13;
 if((int)p0!=0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804B50D4;
  if((int)(p0+504)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+504);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(p0+500)!=0){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+500);
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
   }
  }
  if((int)(p0+492)!=0){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+492);
   if(value4){
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
     fn_80066E1C(value4);
    }
   }
  }
  if((int)(p0+488)!=0){
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+488);
   if(value6){
    value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
     fn_80066E1C(value6);
    }
   }
  }
  if((int)(p0+480)!=0){
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+480);
   if(value8){
    value9=*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+4)=(reinterpret_cast<char *>(value9)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4)&0x7FFFFF)){
     fn_80066E1C(value8);
    }
   }
  }
  if((int)(p0+476)!=0){
   value10=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+476);
   if(value10){
    value11=*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+4)=(reinterpret_cast<char *>(value11)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4)&0x7FFFFF)){
     fn_80066E1C(value10);
    }
   }
  }
  if((int)(p0+472)!=0){
   value12=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+472);
   if(value12){
    value13=*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value12)+4)=(reinterpret_cast<char *>(value13)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value12)+4)&0x7FFFFF)){
     fn_80066E1C(value12);
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

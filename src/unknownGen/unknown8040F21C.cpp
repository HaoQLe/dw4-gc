#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
void fn_8028A2D0(void *,void *);
void fn_8028A468(void *);
void fn_8028A618(void *);
void fn_8028A6D8(void *,void *);
void fn_8028AA24(void *);
void fn_8028AAC4(void *);
void fn_8028AD98(void *);
void fn_8028AF00(void *);
void fn_8028B07C(void *);
}
extern "C" {
void *dtor_8040F21C(void *p0,int p1){
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
 if((int)(int)p0!=0){
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+24)){
   fn_8028A2D0(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0),*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+12));
   fn_8028A2D0(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0),*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+8));
   fn_8028A2D0(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0),*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+4));
   if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(p0)+16)){
    fn_8028A6D8(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0),*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+20));
   }
  }
  if((int)((int)p0+24)!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+24);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)((int)p0+20)!=0){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+20);
   if(value2){
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+4)=(reinterpret_cast<char *>(value3)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+4)&0x7FFFFF)){
     fn_80066E1C(value2);
    }
   }
  }
  if((int)((int)p0+12)!=0){
   value4=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+12);
   if(value4){
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+4)=(reinterpret_cast<char *>(value5)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value4)+4)&0x7FFFFF)){
     fn_80066E1C(value4);
    }
   }
  }
  if((int)((int)p0+8)!=0){
   value6=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+8);
   if(value6){
    value7=*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+4)=(reinterpret_cast<char *>(value7)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value6)+4)&0x7FFFFF)){
     fn_80066E1C(value6);
    }
   }
  }
  if((int)((int)p0+4)!=0){
   value8=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+4);
   if(value8){
    value9=*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+4)=(reinterpret_cast<char *>(value9)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value8)+4)&0x7FFFFF)){
     fn_80066E1C(value8);
    }
   }
  }
  if((unsigned int)(int)p0!=0){
   value10=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0);
   if(value10){
    value11=*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+4)=(reinterpret_cast<char *>(value11)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value10)+4)&0x7FFFFF)){
     fn_80066E1C(value10);
    }
   }
  }
  if((int)(short)p1>0){
   fn_800A325C(p0);
  }
 }
 return p0;
}
void fn_8040F3D0(int p0){
 fn_8028AD98(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
 fn_8028A468(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
 fn_8028AA24(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
}
void fn_8040F410(int p0){
 fn_8028AAC4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
 fn_8028A618(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
 fn_8028AF00(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
}
void fn_8040F450(int p0){
 fn_8028B07C(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0));
}
}
#pragma pop

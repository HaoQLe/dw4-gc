#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802A25A0();
void *fn_802A25EC();
void *fn_802A41A4(void *);
extern char lbl_8041A8E0[];
extern char lbl_8041A90C[];
}
extern "C" {
void fn_802A2904(int p0,int p1,int p2){
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
 value7=fn_802A25EC();
 if((unsigned int)p0==0){
  value8=fn_802A41A4(lbl_8041A8E0);
  value6=value8;
 } else {
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4)==0){
   value9=fn_802A41A4(lbl_8041A90C);
   value5=value9;
  } else {
   value4=value7;
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+4)>0){
    value3=value7;
    if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+0)){
     value2=value7;
     if((int)p1!=0){
      value1=value7;
      if((int)p1!=1){
       *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+4)=(void *)0;
       *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)0;
       value0=value7;
       if(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28)){
        value10=reinterpret_cast<void * (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+28))(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32),(void *)-3);
        value0=value10;
       }
       value1=value0;
      }
      value2=value1;
     }
     value3=value2;
    }
    value4=value3;
   }
   value5=value4;
  }
  value6=value5;
 }
 fn_802A25A0();
}
}
#pragma pop

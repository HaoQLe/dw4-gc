#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80291078(void *);
void *fn_80291B60(void *,void *,void *);
void *fn_802926DC(void *,void *,void *);
void *fn_80292860(void *);
void *fn_80293628(void *,void *,void *);
void *fn_802937A0(void *);
void *fn_80294478(void *,void *,void *);
void *fn_80295298(void *);
void *fn_802955A4(void *,void *,void *);
}
extern "C" {
void *fn_802942E0(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 if((unsigned int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p1)+0)==32768){
  value0=fn_80294478((void *)p0,(void *)p1,(void *)p2);
  return value0;
 } else {
  value1=fn_80295298((void *)p1);
  if((int)(int)value1!=0){
   value2=fn_802955A4((void *)p0,(void *)p1,(void *)p2);
  } else {
   value3=fn_80291078((void *)p1);
   if((int)(int)value3!=0){
    value4=fn_80291B60((void *)p0,(void *)p1,(void *)p2);
    return value4;
   } else {
    value5=fn_80292860((void *)p1);
    if((int)(int)value5!=0){
     value6=fn_802926DC((void *)p0,(void *)p1,(void *)p2);
    } else {
     value7=fn_802937A0((void *)p1);
     if((int)(int)value7!=0){
      value8=fn_80293628((void *)p0,(void *)p1,(void *)p2);
      return value8;
     } else {
      return (void *)-1;
     }
    }
    return value6;
   }
  }
  return value2;
 }
}
}
#pragma pop

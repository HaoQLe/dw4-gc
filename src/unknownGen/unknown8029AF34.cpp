#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80290BD4(void *);
void *fn_802957BC(void *);
void *fn_802959C4();
void *fn_802959E4();
void fn_80296810(void *);
void *fn_80299A30(void *);
void fn_8029D9A0(void *,int);
void fn_8029D9C0(void *,int);
void fn_802A1AC8(void *);
extern char lbl_80418FCC[];
}
extern "C" {
void fn_8029AF34(int p0){
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value0;
 void *value8;
 void *value9;
 void *value1;
 void *value10;
 void *value2;
 void *value3;
 void *value11;
 void *value12;
 if((int)p0==0){
  fn_80296810(lbl_80418FCC);
  return;
 } else {
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
  value4=value0;
  if(value0){
   value8=fn_80299A30(value0);
   value4=value8;
  }
  value9=fn_802959E4();
  value6=value9;
  if((int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+2)==4){
   fn_802A1AC8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+148));
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
   value5=value1;
   if(value1){
    value10=reinterpret_cast<void * (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+0))+20))(value1,*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+0));
    value5=value10;
   }
   value6=value5;
  }
  fn_802959E4();
  fn_8029D9C0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),0);
  fn_8029D9A0(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),0);
  fn_80290BD4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+4));
  if((int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+2)==2){
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
   if(value2){
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
    reinterpret_cast<void (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+0))+12))(value2,*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+0));
   }
  }
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116);
  value7=value3;
  if(value3){
   value11=fn_802957BC(value3);
   value7=value11;
  }
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)=0;
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+168)=0;
  value12=fn_802959C4();
  fn_802959C4();
  return;
 }
}
}
#pragma pop

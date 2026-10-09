#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053F28(void *);
void *fn_80054094(void *,void *);
void *fn_80054140(int);
void *fn_800658F8(void *,void *);
extern char lbl_804A1050[];
extern void *lbl_805617BC;
extern void *lbl_80562140;
extern void *lbl_805622A4;
extern void *lbl_80564318;
extern void *lbl_805645F4;
extern char lbl_805645F8[1];
}
extern "C" {
void *igFieldSource_virtual7C(){return lbl_805622A4;}
void *igFieldSource_virtual88(int p0){
 void *value2;
 void *value3;
 void *value1;
 void *value4;
 void *value5;
 void *value6;
 void *value0=lbl_80564318;
 value1=(void *)reinterpret_cast<Meta::igMetaObject *>(value0)->_name;
 if(!value1){
  value3=(void *)0;
 } else {
  if(!lbl_80562140){
   value4=fn_80054140(16);
   value2=value4;
   if((int)(int)value4!=0){
    value5=fn_80053F28(value4);
    value2=value5;
   }
   lbl_80562140=value2;
  }
  value6=fn_80054094(lbl_80562140,value1);
  value3=value6;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value3;
 return value3;
}
void *fn_8016C330(int p0,int p1){
 void *value0;
 void *value1;
 if((int)*reinterpret_cast<signed char *>((lbl_805645F8+0))==0){
  value0=fn_800658F8(lbl_805617BC,lbl_804A1050);
  lbl_805645F4=value0;
  *reinterpret_cast<unsigned char *>((lbl_805645F8+0))=1;
 }
 if((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805645F4)+8))){
  value1=reinterpret_cast<void * (*)(void *)>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>((void *)p1)+(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(lbl_805645F4)+8)))((void *)p0);
  return value1;
 } else {
  return lbl_805645F4;
 }
}
}
#pragma pop

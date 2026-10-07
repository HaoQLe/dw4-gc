#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80054050(void *);
void fn_80054184(void *);
void *fn_80058C80();
void *fn_800607F4(void *);
void *fn_80072FFC(void *,void *,int);
void *fn_80073060(void *,int);
void *fn_80073630(int,void *);
void *fn_80073688(void *,int,void *,void *);
void *fn_80073BB0(int,void *);
extern void *lbl_805621F8;
extern char lbl_80562298[1];
}
extern "C" {
void *fn_80053F28(int p0){
 void *value1;
 void *value2;
 void *value3;
 void *value0;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 void *value8;
 void *value9;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)16384;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80562298+0))){
  value1=value0;
 } else {
  value4=fn_800607F4(lbl_805621F8);
  value1=value4;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value1;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12)){
  value5=fn_80058C80();
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value5;
 }
 value6=fn_80073630(24,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 value2=value6;
 if((int)(int)value6!=0){
  value7=fn_80072FFC(value6,(void *)p0,1024);
  value2=value7;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=value2;
 value8=fn_80073BB0(36,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 value3=value8;
 if((int)(int)value8!=0){
  value9=fn_80073688(value8,0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
  value3=value9;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=value3;
 return (void *)p0;
}
void *fn_80053FF4(int p0,int p1){
 if((int)p0!=0){
  fn_80054050((void *)p0);
  fn_80073060(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0),1);
  if((int)(short)p1>0){
   fn_80054184((void *)p0);
  }
 }
 return (void *)p0;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_803B7F88(void *);
void *fn_803B7FD8(void *,int);
void *fn_803B804C(void *,void *);
void *fn_803B8260(void *);
void *fn_803B82B8(void *,int);
void fn_803B84C0(void *);
extern void *lbl_805674B0;
}
extern "C" {
void *fn_803B7D0C(int p0){
 fn_803B7F88((void *)p0);
 fn_803B8260((reinterpret_cast<char *>((void *)p0)+36));
 fn_803B8260((reinterpret_cast<char *>((void *)p0)+64));
 fn_803B8260((reinterpret_cast<char *>((void *)p0)+92));
 return (void *)p0;
}
void *fn_803B7D54(int p0,int p1){
 if((int)p0!=0){
  fn_803B82B8((reinterpret_cast<char *>((void *)p0)+92),-1);
  fn_803B82B8((reinterpret_cast<char *>((void *)p0)+64),-1);
  fn_803B82B8((reinterpret_cast<char *>((void *)p0)+36),-1);
  fn_803B7FD8((void *)p0,-1);
  if((int)(short)p1>0){
   __dl__FPv((void *)p0);
  }
 }
 return (void *)p0;
}
void *fn_803B7DD0(int p0,int p1){
 void *value6;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 if((int)p1==0){
  value6=fn_803B804C((void *)p0,(void *)p1);
  return value6;
 } else {
  if((unsigned int)p1<256){
   fn_803B804C((void *)p0,(void *)1);
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
   if((unsigned int)((int)value0+1)>=(unsigned int)(int)lbl_805674B0){
    fn_803B84C0((reinterpret_cast<char *>((void *)p0)+36));
   }
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52))+0)=(unsigned char)(int)(void *)p1;
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52))+1);
   value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+56);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(reinterpret_cast<char *>(value1)+1);
  } else {
   if((unsigned int)p1<65535){
    fn_803B804C((void *)p0,(void *)2);
    value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+84);
    if((unsigned int)((int)value2+2)>=(unsigned int)(int)lbl_805674B0){
     fn_803B84C0((reinterpret_cast<char *>((void *)p0)+64));
    }
    *reinterpret_cast<short *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80))+0)=(short)(int)(void *)p1;
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+80)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+80))+2);
    value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+84);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+84)=(reinterpret_cast<char *>(value3)+2);
    return value3;
   } else {
    fn_803B804C((void *)p0,(void *)3);
    value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+112);
    if((unsigned int)((int)value4+4)>=(unsigned int)(int)lbl_805674B0){
     fn_803B84C0((reinterpret_cast<char *>((void *)p0)+92));
    }
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+108))+0)=(void *)p1;
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+108)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+108))+4);
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+112);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+112)=(reinterpret_cast<char *>(value5)+4);
    return value5;
   }
  }
  return value1;
 }
}
}
#pragma pop

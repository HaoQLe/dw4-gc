#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80299664(void *);
void fn_802A17C4(void *,...);
extern char lbl_8041A618[];
}
extern "C" {
void fn_802A1AC8(int p0,int p1,int p2,int p3,int p4,int p5){
 void *value0;
 void *value1;
 if((int)p0==0){
  fn_802A17C4(lbl_8041A618,(void *)p1,(void *)p2,(void *)p3,(void *)p4,(void *)p5);
 } else {
  if((int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+1)!=0){
   *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1)=0;
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+40);
   if(value0){
    value1=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+2);
    if((int)(int)value1==1){
     fn_80299664(value0);
     *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+2)=0;
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+44)=(void *)0;
   if((unsigned int)p0==0){
    fn_802A17C4(lbl_8041A618);
   } else {
    if((int)*reinterpret_cast<signed char *>(reinterpret_cast<char *>((void *)p0)+1)==0){
     *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)0;
     *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+32)=(void *)0;
     *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+36)=(void *)0;
    }
   }
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+52)=(void *)0;
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop

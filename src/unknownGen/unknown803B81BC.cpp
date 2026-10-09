#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803B842C(void *,void *);
void fn_803B84C0(void *);
extern void *lbl_805674B0;
}
extern "C" {
void fn_803B81BC(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 if((((int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+28)!=0||(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+30)!=0)||(value0=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+32),value0))){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
  value2=(void *)(int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+33);
  if((unsigned int)((int)value1+1)>=(unsigned int)(int)lbl_805674B0){
   fn_803B84C0((void *)p0);
  }
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+0)=(unsigned char)(int)value2;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+1);
  value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(reinterpret_cast<char *>(value3)+1);
 }
 fn_803B842C((void *)p0,(void *)p1);
}
}
#pragma pop

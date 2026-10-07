#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
void fn_8011C5F8(void *,int);
void fn_8011D0D4(void *,void *);
}
extern "C" {
void fn_8011C3A0(int p0){
 fn_800667CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12))+12)=(void *)p0;
 fn_8011D0D4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12),*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
}
void *fn_8011C3E0(int p0){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)!=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
  if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)<(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8)){
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)>=0){
    fn_8011C5F8((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+16))+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12)<<2)),1);
   }
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)>=0){
    fn_8011C5F8((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16))+16))+((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24)<<2)),0);
   }
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8);
   *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=*reinterpret_cast<void **>(reinterpret_cast<char *>(value2)+12);
   return value2;
  } else {
   return value1;
  }
 }
 return value0;
}
}
#pragma pop

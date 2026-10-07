#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802EFE1C(void *,void *);
void fn_802F0264(void *,void *);
void fn_802F057C(void *,void *);
void fn_802F0C30(void *,void *);
void fn_802F0EB0(void *,void *);
}
extern "C" {
void fn_802F16CC(int p0,int p1){
 void *value0;
 if(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p1)+20)){
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+56);
  if(!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value0)+76)){
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+20)!=0){
    fn_802F0EB0((void *)p0,(void *)p1);
   }
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+28)!=0){
    fn_802F0C30((void *)p0,(void *)p1);
   }
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+52)!=0){
    fn_802F057C((void *)p0,(void *)p1);
   }
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+68)!=0){
    fn_802F0264((void *)p0,(void *)p1);
   }
   if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+72)!=0){
    fn_802EFE1C((void *)p0,(void *)p1);
   }
  }
 }
}
}
#pragma pop

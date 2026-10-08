#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803E811C(void *);
void fn_803E813C(void *);
void fn_803EF62C(void *,void *,void *);
void *fn_803F2C5C(void *,int);
void *fn_803F3074(void *,void *,void *);
}
extern "C" {
void *fn_803EF858(int p0){
 void *value0;
 void *value1;
 void *local2;
 void *local1;
 void *local0;
 fn_803E813C(&local0);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+72)!=4){
  local1=(void *)0;
 } else {
  fn_803EF62C((void *)p0,&local2,&local1);
  if(local1){
   value0=fn_803F2C5C((void *)p0,15);
   if((int)(int)value0!=0){
    value1=fn_803F3074((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>(local1)+56),*reinterpret_cast<void **>(reinterpret_cast<char *>(local1)+60));
    if((int)(int)value1==0){
     local1=(void *)0;
    }
   }
  }
 }
 fn_803E811C(&local0);
 return local1;
}
}
#pragma pop

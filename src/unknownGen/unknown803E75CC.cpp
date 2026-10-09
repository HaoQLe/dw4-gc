#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803E73D4(void *,void *,void *);
void fn_803E811C(void *);
void fn_803E813C(void *);
}
extern "C" {
void fn_803E75CC(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *local0;
 fn_803E813C(&local0);
 fn_803E73D4((void *)p0,(void *)p1,(void *)p2);
 if(((*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+8)||*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+12))||(value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+16),(int)(int)value0==-1))){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p2)+0)=1;
 }
 if((*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+8)||(value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+12),value1))){
  *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p2)+1)=1;
 }
 fn_803E811C(&local0);
}
}
#pragma pop

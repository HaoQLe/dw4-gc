#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802727F4(void *,...);
void fn_80272D8C(void *,int);
void fn_802734C8(void *,void *,int);
extern char lbl_804C9650[];
}
extern "C" {
void *fn_8026D000(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value0=(void *)p1;
 value1=(void *)p1;
 while(value1){
  if(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+56)){
   fn_80272D8C((void *)p0,-2);
   fn_802734C8((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+56),0);
   value2=reinterpret_cast<void * (*)(void *,void *)>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+56))+32))((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+56));
   return value2;
  }
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+20);
 }
 fn_802727F4(lbl_804C9650,*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+12));
 return (void *)0;
}
}
#pragma pop

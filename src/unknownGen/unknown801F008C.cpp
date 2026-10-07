#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006AD74(void *,void *,void *);
void *fn_8006AE4C(void *,void *);
void fn_8006B05C(void *,void *);
}
extern "C" {
void fn_801F008C(int p0,int p1,int p2,int p3){
 void *value0;
 value0=fn_8006AE4C((void *)p1,(void *)p2);
 if((int)(int)value0!=-1){
  fn_8006B05C((void *)p1,value0);
 }
 fn_8006AD74((void *)p1,(void *)p2,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p3)+28));
}
}
#pragma pop

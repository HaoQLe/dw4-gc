#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027BF00(void *,void *);
void *fn_8027EE84(void *,void *,void *);
void fn_80281CB8(void *,void *,void *,void *,int);
void *fn_80281E18();
}
extern "C" {
void *fn_80281E80(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 value0=fn_80281E18();
 if((int)(int)value0==0){
  return (void *)0;
 } else {
  value1=fn_8027BF00((void *)p0,value0);
  fn_80281CB8((void *)p0,value1,value0,(void *)p1,0);
  value2=fn_8027EE84((void *)p0,value1,(reinterpret_cast<char *>(value0)+-1));
  return value2;
 }
}
}
#pragma pop

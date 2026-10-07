#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8027CDE8(void *,void *);
void *fn_802826A8(void *,void *);
void fn_80282A54(void *,void *,int);
}
extern "C" {
void fn_802786AC(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+4)!=0){
  value1=fn_802826A8((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
  value0=value1;
 } else {
  value2=fn_8027CDE8((void *)p0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0));
  value0=value2;
 }
 fn_80282A54((void *)p0,value0,0);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80272F04(void *,void *);
void fn_80273F98(void *,void *,void *);
}
extern "C" {
void fn_80274078(int p0,int p1,int p2){
 void *value0;
 value0=fn_80272F04((void *)p0,(void *)p1);
 if((int)p2!=(int)(int)value0){
  fn_80273F98((void *)p0,(void *)p1,(void *)p2);
  return;
 } else {
  return;
 }
}
}
#pragma pop

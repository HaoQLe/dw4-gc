#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065A58(void *);
void *fn_80065C34(void *,void *);
void *fn_80065CE0(void *);
}
extern "C" {
void fn_80065EC8(int p0){
 void *value0;
 void *value1;
 void *value2;
 value1=fn_80065CE0((void *)p0);
 value0=(void *)0;
 while((int)(int)value0<(int)(int)value1){
  value2=fn_80065C34((void *)p0,value0);
  fn_80065A58(value2);
  value0=(reinterpret_cast<char *>(value0)+1);
 }
}
}
#pragma pop

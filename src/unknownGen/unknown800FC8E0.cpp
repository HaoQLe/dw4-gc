#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800FC960(void *,void *,int,int,int,int);
void fn_800FCA60(void *,void *,int,int);
}
extern "C" {
void fn_800FC8E0(int p0){
 void *value0;
 void *value1;
 value0=(void *)0;
 do {
  fn_800FCA60((void *)p0,value0,0,0);
  value0=(reinterpret_cast<char *>(value0)+1);
 } while((int)(int)value0<16);
 value1=(void *)0;
 do {
  fn_800FC960((void *)p0,value1,0,1,2,3);
  value1=(reinterpret_cast<char *>(value1)+1);
 } while((int)(int)value1<4);
}
}
#pragma pop

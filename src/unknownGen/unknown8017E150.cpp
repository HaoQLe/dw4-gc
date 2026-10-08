#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_8017E150(int p0){
 void *value0;
 void *value1;
 if((int)p0<=1){
  return (void *)1;
 }
 value0=(reinterpret_cast<char *>((void *)p0)+-1);
 value1=(void *)0;
 while((int)(value0=(void *)(int)((int)value0>>1))!=0){
  value1=(reinterpret_cast<char *>(value1)+1);
 }
 return (void *)(int)(1<<((int)value1+1));
}
}
#pragma pop

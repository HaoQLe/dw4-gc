#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80065BDC(int p0,int p1){
 void *value0;
 value0=(void *)p0;
 while(value0){
  if((unsigned int)p1==(unsigned int)(int)value0){
   return (void *)1;
  }
  value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+56);
 }
 return (void *)0;
}
}
#pragma pop

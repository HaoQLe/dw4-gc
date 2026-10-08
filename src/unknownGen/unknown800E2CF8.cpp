#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_800E2CF8(int p0){
 void *value0;
 void *value1;
 void *value2;
 value0=(void *)p0;
 value1=(void *)0;
 while(value0){
  value2=value1;
  if(((unsigned int)(int)value0&0x1)){
   value2=(reinterpret_cast<char *>(value1)+1);
  }
  value1=value2;
  value0=(void *)(int)((unsigned int)(int)value0>>1);
 }
 return value1;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_8026DEA4(int p0,int p1){
 void *value0;
 void *value1;
 void *value2;
 value0=(void *)p0;
 value1=(void *)p1;
 value2=(void *)0;
 while(value1){
  if((unsigned int)(int)value1==(unsigned int)(int)value0){
   return value2;
  }
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+20);
  value2=(reinterpret_cast<char *>(value2)+1);
 }
 return (void *)-1;
}
}
#pragma pop

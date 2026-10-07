#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80306ACC(int p0,int p1,int p2){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+20);
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8)==0){
  return value1;
 }
 if((int)p1<0){
  return value1;
 }
 if((int)p1>=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+8)){
  return value1;
 }
 value2=*reinterpret_cast<void **>(reinterpret_cast<char *>(value1)+16);
 *reinterpret_cast<int *>(reinterpret_cast<char *>(value2)+(p1<<2))=(int)p2;
 return value2;
}
}
#pragma pop

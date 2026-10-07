#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_803F2B24(int p0,int p1,int p2){
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+13512);
 if(!value0){
  return value0;
 }
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+3512)<0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+3512)=(void *)p1;
 }
 if((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+3516)>=0){
  return value0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+3516)=(void *)p2;
 return value0;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80071668(int p0,int p1,int p2){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p2)+0);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0);
 if(!value0){
  return (void *)p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+-4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+-4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
int fn_8007168C(){return 4;}
}
#pragma pop

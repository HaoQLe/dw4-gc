#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_803F3EB4(int p0,int p1,int p2){
 void *value1;
 void *value0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+72);
 if(((((int)(int)value0!=4&&(int)(int)value0!=-4)&&(int)(int)value0!=6)&&(int)(int)value0!=-6)){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=(void *)-1;
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)1;
  value1=(void *)0;
 } else {
  value1=(void *)1;
 }
 if((int)(int)value1==0){
  return (void *)0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p1)+0)=(void *)-2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)1;
 return (void *)0;
}
}
#pragma pop

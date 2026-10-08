#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_801CF2A4(int p0,int p1,int p2){
 void *value4;
 void *value5;
 void *value6;
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 value5=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
 value4=(void *)0;
 value6=(void *)0;
 while((int)(int)value6<(int)(int)value5){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+16);
  value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(value1)+((int)value4<<2)))+24);
  if(!value2){
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(value1)+((int)value4<<2)))+8);
   if((unsigned int)(int)value3==(unsigned int)p1){
    *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)(int)*reinterpret_cast<int *>(reinterpret_cast<char *>(value1)+((int)value4<<2));
    return value4;
   }
  }
  value4=(reinterpret_cast<char *>(value4)+1);
  value6=(reinterpret_cast<char *>(value6)+1);
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)0;
 return (void *)-1;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igTransformSequence1_5_virtual110(int p0){
 void *value0;
 void *value1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)=(unsigned char)(int)(void *)(int)(*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+72)&0xF7);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
}
}
#pragma pop

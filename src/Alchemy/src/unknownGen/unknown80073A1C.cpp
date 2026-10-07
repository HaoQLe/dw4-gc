#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80073A1C(int p0,int p1,int p2,int p3){
 void *value0;
 void *value1;
 void *value2;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+24);
 if((unsigned int)p2==(unsigned int)(int)value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+24)=(void *)p3;
 }
 if((unsigned int)p1!=0){
  value1=(void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p1)+-4);
  value2=(void *)(int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p2)+-4);
  *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p1)+-4)=(short)(int)(void *)(int)((int)value1+(int)value2);
 }
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p3)+-2)=(short)(int)(void *)(int)(*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p3)+-2)+*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p2)+-2));
 return (void *)(int)(*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p3)+-2)<<2);
}
}
#pragma pop

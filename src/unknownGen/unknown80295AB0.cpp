#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80295AB0(int p0,int p1,int p2){
 if((int)p1<16){
  return (void *)-1;
 }
 if((unsigned int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+0)!=32769){
  return (void *)-2;
 }
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p2)+0)=(short)(int)(reinterpret_cast<char *>((void *)(int)*reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+2))+4);
 return (void *)0;
}
}
#pragma pop

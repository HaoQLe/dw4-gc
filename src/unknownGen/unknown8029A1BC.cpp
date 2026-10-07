#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_8029A1BC(int p0,int p1,int p2){
 if((int)p1<2){
  return (void *)0;
 }
 if((unsigned int)*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+0)!=32769){
  return (void *)0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p2)+0)=(void *)p1;
 return (void *)1;
}
}
#pragma pop

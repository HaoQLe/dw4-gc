#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *igGamecubePointSpriteExt_virtualBC(int p0,int p1){
 if(((((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36)==0&&(int)(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)>>16)&0xF)!=0)||((int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+36)==1&&(int)(((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)>>20)&0x3)!=0))||((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+0)&0x1000000))){
  return (void *)0;
 }
 return (void *)1;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *fn_80064194(int p0){
 if((!*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+38)||*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+37))){
  return (void *)0;
 }
 return (void *)(void *)(int)((unsigned int)(*reinterpret_cast<unsigned short *>(reinterpret_cast<char *>((void *)p0)+20)+3)&0xFFFFFFFC);
}
}
#pragma pop

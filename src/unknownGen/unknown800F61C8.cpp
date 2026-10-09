#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void igGamecubeVisualContext_virtual1B8(int p0,int p1){
 if((unsigned int)(unsigned char)p1==(unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1269)){
  return;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1269)=(unsigned char)(int)(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x100);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x40);
}
unsigned char igGamecubeVisualContext_virtual1BC(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1269);}
}
#pragma pop

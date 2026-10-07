#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern char lbl_805634FB[1];
}
extern "C" {
void fn_800F654C(int p0,int p1){
 void *value0;
 value0=(void *)p1;
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_805634FB+0))){
  value0=(void *)0;
 }
 if((unsigned int)*reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1268)==(unsigned int)(unsigned char)(int)value0){
  return;
 }
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+1268)=(unsigned char)(int)value0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+1312)=(void *)(int)((int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+1312)|0x100);
}
unsigned char fn_800F6580(void *object){return *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(object)+1268);}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_800CD258(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x28);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x28)=value;
}
void fn_800CD2C8(int p0,int p1){
 if((unsigned int)(unsigned short)p1>=4){
  return;
 }
 *reinterpret_cast<short *>(reinterpret_cast<char *>((void *)p0)+36)=(short)(int)(void *)p1;
}
}
#pragma pop

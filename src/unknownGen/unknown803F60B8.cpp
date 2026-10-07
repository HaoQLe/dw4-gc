#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_803F60B8(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+12)=value;}
void fn_803F60C0(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+4)=value;}
void fn_803F60C8(int p0,int p1){
 if((int)p1<=0){
  return;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)p1;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803FE1A4();
}
extern "C" {
void fn_803FF4BC(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+104)=value;}
void fn_803FF4C4(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+100)=value;}
void fn_803FF4CC(int p0){
 void *value0=fn_803FE1A4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+88)=(void *)p0;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void fn_80068FBC(void *object,int value){*reinterpret_cast<int *>(reinterpret_cast<char *>(object)+44)=value;}
int fn_80068FC4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+44);}
}
#pragma pop

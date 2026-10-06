#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
int fn_800ED68C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1076);}
void fn_800ED694(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x43C);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x43C)=value;
}
int fn_800ED704(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1084);}
void fn_800ED70C(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x438);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x438)=value;
}
int fn_800ED77C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1080);}
}
#pragma pop

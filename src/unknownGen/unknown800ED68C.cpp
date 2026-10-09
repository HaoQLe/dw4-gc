#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
int igGamecubeVisualContext_virtualF4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1076);}
void igGamecubeVisualContext_virtualFC(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x43C);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x43C)=value;
}
int igGamecubeVisualContext_virtual100(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1084);}
void igGamecubeVisualContext_virtualF0(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x438);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x438)=value;
}
int igGamecubeVisualContext_virtualF8(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+1080);}
}
#pragma pop

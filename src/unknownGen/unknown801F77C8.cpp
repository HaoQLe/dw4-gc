#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801FAE18();
}
extern "C" {
void *igLightStateSet_virtual24(){return fn_801FAE18();}
void fn_801F77E8(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x20);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x20)=value;
}
}
#pragma pop

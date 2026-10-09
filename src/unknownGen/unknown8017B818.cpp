#include <unknownGen.h>
#include <meta/igListenerInterface.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
}
extern "C" {
void igListenerInterface_virtual34(int p0){
 fn_800667CC();
 reinterpret_cast<Meta::igListenerInterface *>((void *)p0)->_listenerInterface=(Meta::igListenerInterface *)(void *)p0;
}
int igListenerBase_virtual70(){return 0;}
int igListenerBase_virtual6C(){return 0;}
}
#pragma pop

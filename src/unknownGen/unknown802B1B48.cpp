#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B1B98(void *,short);
void fn_802B2340(void *);
}
struct UnknownGenObject802B1B48 {
 void *unknown00;
 char unknown04[172];
};
extern "C" {
void *fn_802B1B48(){
 UnknownGenObject802B1B48 object;
 fn_802B2340(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_802B1B98(&object,-1);
 return result;
}
}
#pragma pop

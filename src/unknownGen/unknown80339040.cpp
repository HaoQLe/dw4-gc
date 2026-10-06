#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80339090(void *,short);
void fn_803392A8(void *);
}
struct UnknownGenObject80339040 {
 void *unknown00;
 char unknown04[300];
};
extern "C" {
void *fn_80339040(){
 UnknownGenObject80339040 object;
 fn_803392A8(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80339090(&object,-1);
 return result;
}
}
#pragma pop

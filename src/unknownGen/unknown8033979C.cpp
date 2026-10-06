#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80339124(void *,short);
void fn_803392EC(void *);
}
struct UnknownGenObject8033979C {
 void *unknown00;
 char unknown04[284];
};
extern "C" {
void *fn_8033979C(){
 UnknownGenObject8033979C object;
 fn_803392EC(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80339124(&object,-1);
 return result;
}
}
#pragma pop

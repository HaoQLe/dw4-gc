#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801C0640(void *,short);
void fn_801C0C50(void *);
}
struct UnknownGenObject801C05F8 {
 void *unknown00;
 char unknown04[556];
};
extern "C" {
void *fn_801C05F8(){
 UnknownGenObject801C05F8 object;
 fn_801C0C50(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801C0640(&object,-1);
 return result;
}
}
#pragma pop

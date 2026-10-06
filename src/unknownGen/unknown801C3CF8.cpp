#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801C3D40(void *,short);
void fn_801C3EF4(void *);
}
struct UnknownGenObject801C3CF8 {
 void *unknown00;
 char unknown04[524];
};
extern "C" {
void *fn_801C3CF8(){
 UnknownGenObject801C3CF8 object;
 fn_801C3EF4(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801C3D40(&object,-1);
 return result;
}
}
#pragma pop

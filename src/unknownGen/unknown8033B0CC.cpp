#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033B11C(void *,short);
void fn_8033B17C(void *);
}
struct UnknownGenObject8033B0CC {
 void *unknown00;
 char unknown04[284];
};
extern "C" {
void *fn_8033B0CC(){
 UnknownGenObject8033B0CC object;
 fn_8033B17C(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_8033B11C(&object,-1);
 return result;
}
}
#pragma pop

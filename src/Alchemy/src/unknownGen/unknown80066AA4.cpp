#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void fn_8006665C(void *);
void igObject_register();
}
struct UnknownGenObject80066AAC_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
int fn_80066AA4(){return 0;}
void *fn_80066AAC(){
 UnknownGenObject80066AAC_0 object;
 fn_8006665C(&object);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObject_registerNow(){
 meta_registerNow((int)igObject_register);
}
}
#pragma pop

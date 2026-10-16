#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void igObject_construct(void *);
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
 igObject_construct(&object);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop

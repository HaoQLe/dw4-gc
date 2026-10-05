#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_8006665C(void *);
void fn_80066B08();
}
struct UnknownGenObject80066AAC {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_80066AAC(){
 UnknownGenObject80066AAC object;
 fn_8006665C(&object);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80066AE0(){
 fn_80066188((int)fn_80066B08);
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80403D78(void *,short);
void fn_80404544(void *);
}
struct UnknownGenObject80403D28 {
 void *unknown00;
 char unknown04[204];
};
extern "C" {
void *fn_80403D28(){
 UnknownGenObject80403D28 object;
 fn_80404544(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80403D78(&object,-1);
 return result;
}
}
#pragma pop

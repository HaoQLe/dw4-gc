#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801B4EB0(void *,short);
void fn_801B5514(void *);
}
struct UnknownGenObject801B4E68 {
 void *unknown00;
 char unknown04[236];
};
extern "C" {
void *fn_801B4E68(){
 UnknownGenObject801B4E68 object;
 fn_801B5514(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801B4EB0(&object,-1);
 return result;
}
}
#pragma pop

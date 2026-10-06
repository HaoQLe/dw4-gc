#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033A984(void *,short);
void fn_8033AA48(void *);
}
struct UnknownGenObject8033A934 {
 void *unknown00;
 char unknown04[268];
};
extern "C" {
void *fn_8033A934(){
 UnknownGenObject8033A934 object;
 fn_8033AA48(&object);
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_8033A984(&object,-1);
 return result;
}
}
#pragma pop

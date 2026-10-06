#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80179EB0();
}
extern "C" {
void *fn_80179F44(){
 void *value0=fn_80179EB0();
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+8);
}
}
#pragma pop

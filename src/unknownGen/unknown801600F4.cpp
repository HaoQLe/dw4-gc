#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80160128(void *);
void fn_80184B24(void *);
}
extern "C" {
void fn_801600F4(int p0){
 fn_80184B24((void *)p0);
 fn_80160128((void *)p0);
}
}
#pragma pop

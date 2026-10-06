#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003A418(void *);
}
extern "C" {
int fn_8003A3EC(){return 4;}
void fn_8003A3F4(int p0){
 fn_8003A418(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
}
}
#pragma pop

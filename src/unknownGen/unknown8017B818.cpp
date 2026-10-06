#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
}
extern "C" {
void fn_8017B818(int p0){
 fn_800667CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)p0;
}
int fn_8017B848(){return 0;}
int fn_8017B850(){return 0;}
}
#pragma pop

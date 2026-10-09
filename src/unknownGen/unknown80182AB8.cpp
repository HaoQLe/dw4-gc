#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
void fn_800667D0();
}
extern "C" {
void igOptInterface_virtual2C(){return fn_800667D0();}
void igOptInterface_virtual34(int p0){
 fn_800667CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=(void *)p0;
}
}
#pragma pop

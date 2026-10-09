#include <unknownGen.h>
#include <meta/igOptInterface.h>
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
 reinterpret_cast<Meta::igOptInterface *>((void *)p0)->_optInterface=(Meta::igOptInterface *)(void *)p0;
}
}
#pragma pop

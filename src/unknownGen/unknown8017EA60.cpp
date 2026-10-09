#include <unknownGen.h>
#include <meta/igMessageInterface.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667CC();
}
extern "C" {
void igMessageInterface_virtual34(int p0){
 fn_800667CC();
 reinterpret_cast<Meta::igMessageInterface *>((void *)p0)->_messageInterface=(Meta::igMessageInterface *)(void *)p0;
}
}
#pragma pop

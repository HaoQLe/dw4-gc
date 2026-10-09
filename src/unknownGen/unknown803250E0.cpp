#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80325630();
extern void *lbl_80535C20;
}
extern "C" {
void *libNdmwRuntimePlugin_getMeta(){
 if(!lbl_80535C20 || !(reinterpret_cast<unsigned int *>(lbl_80535C20)[0x24/4]&4)) fn_80325630();
 return lbl_80535C20;
}
}
#pragma pop

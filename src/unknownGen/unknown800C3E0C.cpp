#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D8204();
extern void *lbl_80562508;
}
extern "C" {
void *fn_800C3E0C(){
 void *value0=lbl_80562508;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+52)=(void *)fn_800D8204;
 return value0;
}
}
#pragma pop

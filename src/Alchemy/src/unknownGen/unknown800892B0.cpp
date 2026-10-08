#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
}
extern "C" {
void fn_800892B0(int p0){
 fn_80056378(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+140));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+148)=0;
}
}
#pragma pop

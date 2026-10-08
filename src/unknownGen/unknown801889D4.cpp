#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
void fn_800667A8(void *);
}
extern "C" {
void fn_801889D4(int p0){
 fn_80056378(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)0;
 fn_800667A8((void *)p0);
}
}
#pragma pop

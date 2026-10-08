#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
}
extern "C" {
void fn_8018B6D4(int p0){
 fn_80056378(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+8));
 fn_80056378(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12));
}
}
#pragma pop

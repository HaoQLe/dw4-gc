#include <unknownGen.h>
#include <meta/igParameterSet.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80056378(void *);
void fn_800667A8(void *);
}
extern "C" {
void igParameterSet_virtual10(int p0){
 fn_80056378(reinterpret_cast<Meta::igParameterSet *>((void *)p0)->_data);
 reinterpret_cast<Meta::igParameterSet *>((void *)p0)->_data=(void *)0;
 fn_800667A8((void *)p0);
}
}
#pragma pop

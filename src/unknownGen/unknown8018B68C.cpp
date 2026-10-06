#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800561FC(int,int);
}
extern "C" {
void fn_8018B68C(int p0){
 void *value0=fn_800561FC(4,4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+8)=value0;
 void *value1=fn_800561FC(4,4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=value1;
}
}
#pragma pop

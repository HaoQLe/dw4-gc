#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800536F8(void *);
extern char lbl_80475CB0[];
}
extern "C" {
void *fn_80053CF4(int p0){
 fn_800536F8((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80475CB0;
 return (void *)p0;
}
}
#pragma pop

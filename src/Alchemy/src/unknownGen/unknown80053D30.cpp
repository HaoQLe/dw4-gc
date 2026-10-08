#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053740(void *);
extern char lbl_80475CB0[];
}
extern "C" {
void *fn_80053D30(int p0){
 fn_80053740((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80475CB0;
 return (void *)p0;
}
}
#pragma pop

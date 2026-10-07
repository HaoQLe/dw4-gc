#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80090490(void *);
extern char lbl_804701F8[];
}
extern "C" {
void *fn_800778F0(int p0){
 fn_80090490((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804701F8;
 return (void *)p0;
}
}
#pragma pop

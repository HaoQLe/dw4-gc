#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006CC40(void *);
extern char lbl_80476630[];
}
extern "C" {
void *fn_8006C4B8(int p0){
 fn_8006CC40((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80476630;
 return (void *)p0;
}
}
#pragma pop

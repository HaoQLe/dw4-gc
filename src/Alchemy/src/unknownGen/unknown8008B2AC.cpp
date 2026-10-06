#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80058B34(void *);
extern char lbl_80473790[];
}
extern "C" {
void *fn_8008B2AC(int p0){
 fn_80058B34((void *)p0);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80473790;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+148)=(void *)0;
 return (void *)p0;
}
}
#pragma pop

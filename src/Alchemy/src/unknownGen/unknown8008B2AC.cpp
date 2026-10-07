#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80058B34(void *);
extern char lbl_80473790[];
}
extern "C" {
void *fn_8008B2AC(void *p0){
 fn_80058B34(p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=lbl_80473790;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+116)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+148)=(void *)0;
 return p0;
}
}
#pragma pop

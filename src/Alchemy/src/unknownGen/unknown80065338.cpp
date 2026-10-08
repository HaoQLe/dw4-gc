#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066690(void *);
extern char lbl_804761D8[];
}
extern "C" {
void *fn_80065338(int p0){
 fn_80066690((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804761D8;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+28)=(void *)0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+96)=(void *)0;
 return (void *)p0;
}
}
#pragma pop

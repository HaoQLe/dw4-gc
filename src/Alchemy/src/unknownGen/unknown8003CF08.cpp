#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80058B34(void *);
extern char lbl_80473C90[];
}
extern "C" {
void *fn_8003CF08(int p0){
 fn_80058B34((void *)p0);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80473C90;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+116)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+152)=(void *)0;
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+180)=(void *)0;
 return (void *)p0;
}
}
#pragma pop

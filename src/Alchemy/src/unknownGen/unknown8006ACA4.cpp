#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006CC40(void *);
extern char lbl_804762FC[];
}
extern "C" {
void *fn_8006ACA4(int p0){
 fn_8006CC40((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804762FC;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+64)=(void *)0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+60)=1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+56)=(void *)0;
 return (void *)p0;
}
}
#pragma pop

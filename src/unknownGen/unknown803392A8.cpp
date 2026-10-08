#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803392EC(void *);
extern char lbl_804E6054[];
}
extern "C" {
void *fn_803392A8(int p0){
 fn_803392EC((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804E6054;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+276)=(void *)0;
 return (void *)p0;
}
}
#pragma pop

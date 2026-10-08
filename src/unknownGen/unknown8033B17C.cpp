#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803392EC(void *);
extern char lbl_804E5F5C[];
}
extern "C" {
void *fn_8033B17C(int p0){
 fn_803392EC((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_804E5F5C;
 return (void *)p0;
}
}
#pragma pop

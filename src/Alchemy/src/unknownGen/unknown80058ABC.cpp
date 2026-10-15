#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void igObject_construct(void *);
extern char lbl_80471CEC[];
}
extern "C" {
void *fn_80058ABC(int p0){
 igObject_construct((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_80471CEC;
 return (void *)p0;
}
}
#pragma pop

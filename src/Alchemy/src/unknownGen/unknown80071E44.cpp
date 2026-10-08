#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006CC40(void *);
extern char lbl_8047693C[];
}
extern "C" {
void *fn_80071E44(int p0){
 fn_8006CC40((void *)p0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=lbl_8047693C;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+56)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+39)=2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+53)=1;
 return (void *)p0;
}
}
#pragma pop

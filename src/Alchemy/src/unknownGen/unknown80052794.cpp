#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80051E04(void *);
void fn_80051E30(void *);
}
extern "C" {
void *fn_80052794(int p0){
 fn_80051E30((void *)p0);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+48)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+49)=0;
 fn_80051E04((void *)p0);
 return (void *)-1;
}
}
#pragma pop

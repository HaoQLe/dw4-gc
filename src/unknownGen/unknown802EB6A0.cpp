#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8026E010(void *,void *,int,int,int,int,int,int);
extern char lbl_80423D80[];
extern char lbl_804DD20C[];
}
extern "C" {
void *fn_802EB6A0(int p0){
 fn_8026E010((void *)p0,lbl_80423D80,0,0,0,0,0,0);
 *reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+88)=lbl_804DD20C;
 return (void *)p0;
}
}
#pragma pop

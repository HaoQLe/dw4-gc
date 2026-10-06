#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8026E010(void *,void *,void *,int,int,int,int,int);
extern char lbl_804241DC[];
extern char lbl_80424918[];
extern char lbl_804DD238[];
}
extern "C" {
void *fn_802EB5B4(int p0){
 fn_8026E010((void *)p0,lbl_804241DC,lbl_80424918,0,0,0,0,0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+88)=lbl_804DD238;
 return (void *)p0;
}
}
#pragma pop

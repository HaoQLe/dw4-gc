#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_802A4E98();
void *fn_802A4F28();
extern char lbl_805184A8[];
}
extern "C" {
void *fn_802959C4(){return fn_802A4E98();}
void *fn_802959E4(){return fn_802A4F28();}
void fn_80295A04(){
 *reinterpret_cast<void * *>((lbl_805184A8+0))=(void *)0;
}
}
#pragma pop

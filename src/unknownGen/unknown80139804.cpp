#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80139990();
extern void *lbl_80563DFC;
}
extern "C" {
void *fn_80139804(void *object){
 fn_80139990();
 return fn_8006546C(lbl_80563DFC,object);
}
void *fn_8013983C(){
 if(!lbl_80563DFC || !(reinterpret_cast<unsigned int *>(lbl_80563DFC)[0x24/4]&4)) fn_80139990();
 return lbl_80563DFC;
}
}
#pragma pop

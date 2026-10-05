#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80030D50();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
extern void *lbl_80561BA4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80030C18(void *object){
 fn_80030D50();
 return fn_8006546C(lbl_80561BA4,object);
}
void *fn_80030C50(){
 if(!lbl_80561BA4) lbl_80561BA4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561BA4;
}
void *fn_80030C8C(){
 if(!lbl_80561BA4 || !(reinterpret_cast<unsigned int *>(lbl_80561BA4)[0x24/4]&4)) fn_80030D50();
 return lbl_80561BA4;
}
}
#pragma pop

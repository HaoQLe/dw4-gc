#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033AB80();
extern void *lbl_80536204;
}
extern "C" {
void *fn_8033A8A8(void *object){
 fn_8033AB80();
 return fn_8006546C(lbl_80536204,object);
}
void *beNDMWMdlItemInfoWork_getMeta(){
 if(!lbl_80536204 || !(reinterpret_cast<unsigned int *>(lbl_80536204)[0x24/4]&4)) fn_8033AB80();
 return lbl_80536204;
}
}
#pragma pop

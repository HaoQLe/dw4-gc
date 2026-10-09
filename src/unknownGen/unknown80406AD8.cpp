#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80406D60();
extern void *lbl_8055C9A4;
}
extern "C" {
void *fn_80406AD8(void *object){
 fn_80406D60();
 return fn_8006546C(lbl_8055C9A4,object);
}
void *igPickMode_getMeta(){
 if(!lbl_8055C9A4 || !(reinterpret_cast<unsigned int *>(lbl_8055C9A4)[0x24/4]&4)) fn_80406D60();
 return lbl_8055C9A4;
}
}
#pragma pop

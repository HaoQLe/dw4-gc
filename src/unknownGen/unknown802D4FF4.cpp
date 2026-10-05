#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802D52E4();
extern void *lbl_805351DC;
}
extern "C" {
void *fn_802D4FF4(void *object){
 fn_802D52E4();
 return fn_8006546C(lbl_805351DC,object);
}
}
#pragma pop

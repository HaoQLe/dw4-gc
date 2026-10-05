#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80137264();
extern void *lbl_80563D1C;
}
extern "C" {
void *fn_80137128(void *object){
 fn_80137264();
 return fn_8006546C(lbl_80563D1C,object);
}
void *fn_80137160(){
 if(!lbl_80563D1C || !(reinterpret_cast<unsigned int *>(lbl_80563D1C)[0x24/4]&4)) fn_80137264();
 return lbl_80563D1C;
}
}
#pragma pop

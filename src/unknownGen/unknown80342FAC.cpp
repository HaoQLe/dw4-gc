#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_803430A4();
extern void *lbl_8053674C;
}
extern "C" {
void *fn_80342FAC(void *object){
 fn_803430A4();
 return fn_8006546C(lbl_8053674C,object);
}
void *fn_80342FEC(){
 if(!lbl_8053674C || !(reinterpret_cast<unsigned int *>(lbl_8053674C)[0x24/4]&4)) fn_803430A4();
 return lbl_8053674C;
}
}
#pragma pop

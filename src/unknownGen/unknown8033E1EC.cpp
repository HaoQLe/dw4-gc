#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_8033E328();
extern void *lbl_805364B8;
}
extern "C" {
void *fn_8033E1EC(void *object){
 fn_8033E328();
 return fn_8006546C(lbl_805364B8,object);
}
void *beNDMWLoadIntf2CtrlData_getMeta(){
 if(!lbl_805364B8 || !(reinterpret_cast<unsigned int *>(lbl_805364B8)[0x24/4]&4)) fn_8033E328();
 return lbl_805364B8;
}
}
#pragma pop

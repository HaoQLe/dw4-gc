#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80344078();
extern void *lbl_80536798;
}
extern "C" {
void *fn_80343F60(void *object){
 fn_80344078();
 return fn_8006546C(lbl_80536798,object);
}
void *fn_80343FA0(){
 if(!lbl_80536798 || !(reinterpret_cast<unsigned int *>(lbl_80536798)[0x24/4]&4)) fn_80344078();
 return lbl_80536798;
}
}
#pragma pop

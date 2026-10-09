#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BEA04();
extern void *lbl_80534954;
}
extern "C" {
void *fn_802BE85C(void *object){
 fn_802BEA04();
 return fn_8006546C(lbl_80534954,object);
}
void *beSvUseCheckApi_getMeta(){
 if(!lbl_80534954 || !(reinterpret_cast<unsigned int *>(lbl_80534954)[0x24/4]&4)) fn_802BEA04();
 return lbl_80534954;
}
}
#pragma pop

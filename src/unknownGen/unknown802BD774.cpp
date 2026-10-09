#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_802BD91C();
extern void *lbl_80534910;
}
extern "C" {
void *fn_802BD774(void *object){
 fn_802BD91C();
 return fn_8006546C(lbl_80534910,object);
}
void *beSvEndApi_getMeta(){
 if(!lbl_80534910 || !(reinterpret_cast<unsigned int *>(lbl_80534910)[0x24/4]&4)) fn_802BD91C();
 return lbl_80534910;
}
}
#pragma pop

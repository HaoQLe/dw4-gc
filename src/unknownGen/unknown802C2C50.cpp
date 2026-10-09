#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802C2D78();
extern void *lbl_80534B38;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C2C50(void *object){
 fn_802C2D78();
 return fn_8006546C(lbl_80534B38,object);
}
void *fn_802C2C90(){
 if(!lbl_80534B38) lbl_80534B38=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534B38;
}
void *beNumberCtrlInfoWork_getMeta(){
 if(!lbl_80534B38 || !(reinterpret_cast<unsigned int *>(lbl_80534B38)[0x24/4]&4)) fn_802C2D78();
 return lbl_80534B38;
}
}
#pragma pop

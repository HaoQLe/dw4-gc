#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802C6C54();
void *fn_8030FEB0();
extern void *lbl_80534C64;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C6320(){return fn_8030FEB0();}
void *fn_802C6340(void *object){
 fn_802C6C54();
 return fn_8006546C(lbl_80534C64,object);
}
void *fn_802C6380(){
 if(!lbl_80534C64) lbl_80534C64=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534C64;
}
void *fn_802C63D4(){
 if(!lbl_80534C64 || !(reinterpret_cast<unsigned int *>(lbl_80534C64)[0x24/4]&4)) fn_802C6C54();
 return lbl_80534C64;
}
}
#pragma pop

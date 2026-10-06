#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802C7C30();
extern void *lbl_80534D74;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C7A78(void *object){
 fn_802C7C30();
 return fn_8006546C(lbl_80534D74,object);
}
void *fn_802C7AB8(){
 if(!lbl_80534D74) lbl_80534D74=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534D74;
}
void *fn_802C7B0C(){
 if(!lbl_80534D74 || !(reinterpret_cast<unsigned int *>(lbl_80534D74)[0x24/4]&4)) fn_802C7C30();
 return lbl_80534D74;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_800CF498();
extern void *lbl_805621F4;
extern void *lbl_80562D9C;
}
extern "C" {
void *fn_800CF308(void *object){
 fn_800CF498();
 return fn_8006546C(lbl_80562D9C,object);
}
void *fn_800CF340(){
 if(!lbl_80562D9C) lbl_80562D9C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562D9C;
}
void *fn_800CF37C(){
 if(!lbl_80562D9C || !(reinterpret_cast<unsigned int *>(lbl_80562D9C)[0x24/4]&4)) fn_800CF498();
 return lbl_80562D9C;
}
}
#pragma pop

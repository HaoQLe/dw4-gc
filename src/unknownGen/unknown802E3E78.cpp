#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802E3FCC();
extern void *lbl_80535718;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802E3E78(void *object){
 fn_802E3FCC();
 return fn_8006546C(lbl_80535718,object);
}
void *fn_802E3EB8(){
 if(!lbl_80535718) lbl_80535718=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535718;
}
void *fn_802E3F0C(){
 if(!lbl_80535718 || !(reinterpret_cast<unsigned int *>(lbl_80535718)[0x24/4]&4)) fn_802E3FCC();
 return lbl_80535718;
}
}
#pragma pop

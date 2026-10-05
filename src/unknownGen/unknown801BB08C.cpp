#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801BB3B8();
extern void *lbl_805621F4;
extern void *lbl_80564D8C;
}
extern "C" {
void *fn_801BB08C(void *object){
 fn_801BB3B8();
 return fn_8006546C(lbl_80564D8C,object);
}
void *fn_801BB0C4(){
 if(!lbl_80564D8C) lbl_80564D8C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564D8C;
}
void *fn_801BB100(){
 if(!lbl_80564D8C || !(reinterpret_cast<unsigned int *>(lbl_80564D8C)[0x24/4]&4)) fn_801BB3B8();
 return lbl_80564D8C;
}
}
#pragma pop

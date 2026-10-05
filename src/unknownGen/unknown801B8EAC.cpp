#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801B905C();
extern void *lbl_805621F4;
extern void *lbl_80564C88;
}
extern "C" {
void *fn_801B8EAC(){
 if(!lbl_80564C88) lbl_80564C88=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564C88;
}
void *fn_801B8EE8(){
 if(!lbl_80564C88 || !(reinterpret_cast<unsigned int *>(lbl_80564C88)[0x24/4]&4)) fn_801B905C();
 return lbl_80564C88;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80110294();
extern void *lbl_805621F4;
extern void *lbl_80563698;
}
extern "C" {
void *fn_80110094(){
 if(!lbl_80563698) lbl_80563698=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563698;
}
void *fn_801100D0(){
 if(!lbl_80563698 || !(reinterpret_cast<unsigned int *>(lbl_80563698)[0x24/4]&4)) fn_80110294();
 return lbl_80563698;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D957C();
extern void *lbl_80535344;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D9468(){
 if(!lbl_80535344) lbl_80535344=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535344;
}
void *fn_802D94BC(){
 if(!lbl_80535344 || !(reinterpret_cast<unsigned int *>(lbl_80535344)[0x24/4]&4)) fn_802D957C();
 return lbl_80535344;
}
}
#pragma pop

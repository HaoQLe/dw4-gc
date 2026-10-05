#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_800B35FC();
extern void *lbl_805621F4;
extern void *lbl_80562728;
}
extern "C" {
void *fn_800B3430(){
 if(!lbl_80562728) lbl_80562728=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562728;
}
void *fn_800B346C(){
 if(!lbl_80562728 || !(reinterpret_cast<unsigned int *>(lbl_80562728)[0x24/4]&4)) fn_800B35FC();
 return lbl_80562728;
}
}
#pragma pop

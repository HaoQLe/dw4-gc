#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D1D34();
extern void *lbl_80535108;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D1C20(){
 if(!lbl_80535108) lbl_80535108=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535108;
}
void *beLuaDataList_getMeta(){
 if(!lbl_80535108 || !(reinterpret_cast<unsigned int *>(lbl_80535108)[0x24/4]&4)) fn_802D1D34();
 return lbl_80535108;
}
}
#pragma pop

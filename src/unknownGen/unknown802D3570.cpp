#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D3684();
extern void *lbl_80535158;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D3570(){
 if(!lbl_80535158) lbl_80535158=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535158;
}
void *beLayerGroupList_getMeta(){
 if(!lbl_80535158 || !(reinterpret_cast<unsigned int *>(lbl_80535158)[0x24/4]&4)) fn_802D3684();
 return lbl_80535158;
}
}
#pragma pop

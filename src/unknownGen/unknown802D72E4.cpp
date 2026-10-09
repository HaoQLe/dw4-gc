#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D73F8();
extern void *lbl_80535290;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D72E4(){
 if(!lbl_80535290) lbl_80535290=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535290;
}
void *beGeneraterDataList_getMeta(){
 if(!lbl_80535290 || !(reinterpret_cast<unsigned int *>(lbl_80535290)[0x24/4]&4)) fn_802D73F8();
 return lbl_80535290;
}
}
#pragma pop

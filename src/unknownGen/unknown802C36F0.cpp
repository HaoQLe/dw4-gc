#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802C3804();
extern void *lbl_80534B74;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C36F0(){
 if(!lbl_80534B74) lbl_80534B74=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534B74;
}
void *beNumVerInsideDataList_getMeta(){
 if(!lbl_80534B74 || !(reinterpret_cast<unsigned int *>(lbl_80534B74)[0x24/4]&4)) fn_802C3804();
 return lbl_80534B74;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D7ED4();
extern void *lbl_805352E0;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D7DC0(){
 if(!lbl_805352E0) lbl_805352E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805352E0;
}
void *beGeneraterItemDataList_getMeta(){
 if(!lbl_805352E0 || !(reinterpret_cast<unsigned int *>(lbl_805352E0)[0x24/4]&4)) fn_802D7ED4();
 return lbl_805352E0;
}
}
#pragma pop

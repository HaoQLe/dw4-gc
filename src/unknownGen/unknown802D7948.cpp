#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D7A5C();
extern void *lbl_805352C8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D7948(){
 if(!lbl_805352C8) lbl_805352C8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805352C8;
}
void *beGeneraterPlayerDataList_getMeta(){
 if(!lbl_805352C8 || !(reinterpret_cast<unsigned int *>(lbl_805352C8)[0x24/4]&4)) fn_802D7A5C();
 return lbl_805352C8;
}
}
#pragma pop

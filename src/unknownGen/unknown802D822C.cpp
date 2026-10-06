#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802D8340();
extern void *lbl_805352EC;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D822C(){
 if(!lbl_805352EC) lbl_805352EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805352EC;
}
void *fn_802D8280(){
 if(!lbl_805352EC || !(reinterpret_cast<unsigned int *>(lbl_805352EC)[0x24/4]&4)) fn_802D8340();
 return lbl_805352EC;
}
}
#pragma pop

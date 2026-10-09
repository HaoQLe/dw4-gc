#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802CEA40();
extern void *lbl_80535000;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802CE92C(){
 if(!lbl_80535000) lbl_80535000=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535000;
}
void *beMessengerGroupList_getMeta(){
 if(!lbl_80535000 || !(reinterpret_cast<unsigned int *>(lbl_80535000)[0x24/4]&4)) fn_802CEA40();
 return lbl_80535000;
}
}
#pragma pop

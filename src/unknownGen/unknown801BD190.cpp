#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801BD3DC();
extern void *lbl_805621F4;
extern void *lbl_80564E0C;
}
extern "C" {
void *fn_801BD190(){
 if(!lbl_80564E0C) lbl_80564E0C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564E0C;
}
void *igInverseKinematicsAnimation_getMeta(){
 if(!lbl_80564E0C || !(reinterpret_cast<unsigned int *>(lbl_80564E0C)[0x24/4]&4)) fn_801BD3DC();
 return lbl_80564E0C;
}
}
#pragma pop

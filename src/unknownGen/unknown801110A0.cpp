#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801113D0();
extern void *lbl_805621F4;
extern void *lbl_80563710;
}
extern "C" {
void *fn_801110A0(){
 if(!lbl_80563710) lbl_80563710=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563710;
}
void *fn_801110DC(){
 if(!lbl_80563710 || !(reinterpret_cast<unsigned int *>(lbl_80563710)[0x24/4]&4)) fn_801113D0();
 return lbl_80563710;
}
}
#pragma pop

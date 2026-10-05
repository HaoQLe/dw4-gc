#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8010FF38();
extern void *lbl_805621F4;
extern void *lbl_8056368C;
}
extern "C" {
void *fn_8010FE38(){
 if(!lbl_8056368C) lbl_8056368C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056368C;
}
void *fn_8010FE74(){
 if(!lbl_8056368C || !(reinterpret_cast<unsigned int *>(lbl_8056368C)[0x24/4]&4)) fn_8010FF38();
 return lbl_8056368C;
}
}
#pragma pop

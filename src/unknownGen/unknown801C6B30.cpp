#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801C6D18();
extern void *lbl_805621F4;
extern void *lbl_80565298;
}
extern "C" {
void *fn_801C6B30(void *object){
 fn_801C6D18();
 return fn_8006546C(lbl_80565298,object);
}
void *fn_801C6B68(){
 if(!lbl_80565298) lbl_80565298=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565298;
}
void *fn_801C6BA4(){
 if(!lbl_80565298 || !(reinterpret_cast<unsigned int *>(lbl_80565298)[0x24/4]&4)) fn_801C6D18();
 return lbl_80565298;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80340E34();
extern void *lbl_8053666C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80340CA4(void *object){
 fn_80340E34();
 return fn_8006546C(lbl_8053666C,object);
}
void *fn_80340CE4(){
 if(!lbl_8053666C) lbl_8053666C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053666C;
}
void *beNDMWLoadIntf2MesWin_getMeta(){
 if(!lbl_8053666C || !(reinterpret_cast<unsigned int *>(lbl_8053666C)[0x24/4]&4)) fn_80340E34();
 return lbl_8053666C;
}
}
#pragma pop

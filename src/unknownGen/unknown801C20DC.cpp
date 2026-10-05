#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801C236C();
void *fn_801CED90();
void *fn_801E4D7C();
void *fn_801E4DA0();
extern void *lbl_805621F4;
extern void *lbl_80564FC0;
}
extern "C" {
void *fn_801C20DC(){return fn_801CED90();}
void *fn_801C20FC(){return fn_801E4D7C();}
void *fn_801C211C(){return fn_801E4DA0();}
void *fn_801C213C(){
 if(!lbl_80564FC0) lbl_80564FC0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564FC0;
}
void *fn_801C2178(){
 if(!lbl_80564FC0 || !(reinterpret_cast<unsigned int *>(lbl_80564FC0)[0x24/4]&4)) fn_801C236C();
 return lbl_80564FC0;
}
}
#pragma pop

#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80025028();
void fn_80025064();
void fn_8002515C();
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80463664[];
extern void *lbl_805615A8;
void *fn_8002513C();
}
extern "C" {
void fn_800250CC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805615A8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8002513C,(int)lbl_80463664,16,(int)fn_80025064,(int)fn_8002515C,0,0);
}
void *fn_8002513C(){return fn_80025028();}
}
#pragma pop
